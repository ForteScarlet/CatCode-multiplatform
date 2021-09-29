import org.jetbrains.kotlin.gradle.utils.loadPropertyFromResources

plugins {
    kotlin("multiplatform") version "1.4.21"
    id("maven-publish")
    id("signing")
    // id("org.jetbrains.dokka") version "1.4.20"
}


val catCodeGroup = "love.forte.catcode"
val catCodeVersion = "1.0.0-DEV.1"
val catCodeId = rootProject.name

val credentialsPropertiesName = "credentials.properties"
val credentialsUsernameKey = "sonatype.credentials.username"
val credentialsPasswordKey = "sonatype.credentials.password"

println("credentialsPropertiesName: $credentialsPropertiesName")
val files = projectDir.listFiles { f: File -> f.name.endsWith(credentialsPropertiesName) }

val credentialsPropertiesFile: File = if(files?.size == 1) {
    files[0]
} else {
    throw RuntimeException("Cannot found file: $credentialsPropertiesName.")
}

val credentialsMap = credentialsPropertiesFile
    .readLines()
    .associate {
    val sp = it.split(Regex("="), 2)
    sp[0] to sp[1]
}

println(credentialsMap)


group = catCodeGroup
version = catCodeVersion

repositories {
    mavenCentral()
    jcenter()
}



tasks {
    // artifacts(sourcesJar)
    val sourceJar = withType<Jar>().configureEach {
        archiveClassifier.set("resource")
    }
    val javadocJar = withType<Jar>().configureEach {
        from("javadoc")
        archiveClassifier.set("javadoc")
    }
}

publishing {
    publications {
        create<MavenPublication>("maven") {
            groupId = catCodeGroup
            artifactId = catCodeId
            version = catCodeVersion

            pom {
                url.set("https://github.com/ForteScarlet/CatCode")
                scm {
                    url.set(this@pom.url)
                }
                description.set("猫猫码，一个可爱的通用特殊码。/ Cat code, the spirit of CQ code continues, a cute universal special code.")
                name.set(catCodeId)
                licenses {
                    name.set("MIT License")
                    url.set("https://opensource.org/licenses/MIT")
                }
                developers {
                    developer {
                        id.set("forte")
                        roles.set(listOf("Single programmer"))
                        name.set("ForteScarlet")
                        email.set("ForteScarlet@163.com")
                        timezone.set("+8")
                    }
                }
            }

            // from(components["java"])
            from(components["kotlin"])
            // artifact
            // artifact(sourceJar)

        }
    }

    repositories {
        val snapshot = "https://oss.sonatype.org/content/repositories/snapshots/"
        val release = "https://oss.sonatype.org/service/local/staging/deploy/maven2/"

        maven {
            name = "sonatype"
            credentials {
                this.username = credentialsMap[credentialsUsernameKey].toString()
                this.password = credentialsMap[credentialsPasswordKey].toString()
            }
            url = uri( if(version.toString().contains("snapshot", true)) snapshot else release )
        }
    }
}

signing {
    sign(publishing.publications["maven"])
}

// dependencies {
//     dokkaHtmlPlugin("org.jetbrains.dokka:kotlin-as-java-plugin:1.4.20")
// }

kotlin {
    jvm {
        compilations.all {
            kotlinOptions.jvmTarget = "1.8"
            kotlinOptions.javaParameters = true
        }
        testRuns["test"].executionTask.configure {
            useJUnit()
        }
    }
    js(LEGACY) { // xxx.jar
    // js(IR) {
        browser()
    }

    linuxX64("linux") {
        binaries.sharedLib()
    }

    mingwX64("mingw") {
       binaries.sharedLib()
    }

    macosX64("macos") {
        binaries {
            framework()
            sharedLib()
        }
    }


    // val hostOs = System.getProperty("os.name")
    // val isMingwX64 = hostOs.startsWith("Windows")
    // val nativeTarget = when {
    //     hostOs == "Mac OS X" -> macosX64("native")
    //     hostOs == "Linux" -> linuxX64("native")
    //     isMingwX64 -> mingwX64("native")
    //     else -> throw GradleException("Host OS is not supported in Kotlin/Native.")
    // }


    sourceSets {
        commonMain {
            dependencies {
                implementation(kotlin("stdlib-common"))
            }
        }
        // val commonMain by getting {
        //     dependencies {
        //         implementation(kotlin("stdlib-common"))
        //     }
        // }
        commonTest {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        // val commonTest by getting {
        //     dependencies {
        //         implementation(kotlin("test-common"))
        //         implementation(kotlin("test-annotations-common"))
        //     }
        // }
        val jvmMain by getting {
            dependencies {
                implementation(kotlin("stdlib-jdk8"))
            }
        }
        val jvmTest by getting {
            dependencies {
                implementation(kotlin("stdlib-jdk8"))
                implementation(kotlin("test"))
                implementation(kotlin("test-junit"))
            }
        }
        val jsMain by getting {
            dependencies {
                implementation(kotlin("stdlib-js"))
            }
        }
        val jsTest by getting {
            dependencies {
                implementation(kotlin("stdlib-js"))
                implementation(kotlin("test-js"))
            }
        }
        // val nativeMain by getting
        // val nativeTest by getting
        val linuxMain by getting
        val linuxTest by getting
        val mingwMain by getting
        val mingwTest by getting
        val macosMain by getting
        val macosTest by getting


    }




    // tasks.withType<org.jetbrains.dokka.gradle.DokkaTask>().configureEach {
    //     dokkaSourceSets {
    //     }
    // }



    // targets.all {
    //     compilations.all {
    //         kotlinOptions {
    //             allWarningsAsErrors = true
    //         }
    //     }
    // }
}


