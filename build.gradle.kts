plugins {
    kotlin("multiplatform") version "1.4.20"
}

group = "love.forte"
version = "1.0-SNAPSHOT"

repositories {
    mavenCentral()
}

kotlin {
    jvm {
        compilations.all {
            kotlinOptions.jvmTarget = "1.8"
        }
        testRuns["test"].executionTask.configure {
            useJUnit()
        }
    }
    // js(LEGACY) {
    js(IR) {
        browser {
            testTask {
                useKarma {
                    useChromeHeadless()
                    webpackConfig.cssSupport.enabled = true
                }
            }
        }
        nodejs()
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

    // targets.all {
    //     compilations.all {
    //         kotlinOptions {
    //             allWarningsAsErrors = true
    //         }
    //     }
    // }
}
