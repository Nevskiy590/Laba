pipeline {
    agent any
    environment {
        // Пути к инструментам (может потребоваться адаптация под ваш сервер)
        VS_PATH = "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\"
        MSBUILD_PATH = "${VS_PATH}MSBuild\\Current\\Bin\\amd64\\MSBuild.exe"
        CMAKE_PATH = "C:\\Program Files\\CMake\\bin\\cmake.exe"
    }
    stages {
        stage('Checkout') {
            steps {
                checkout scm  // Клонирует репозиторий
            }
        }
        stage('Generate Solution') {
            steps {
                bat """
                    mkdir build || true
                    cd build
                    "${CMAKE_PATH}" .. -G "Visual Studio 17 2022" -A x64
                """
            }
        }
        stage('Build') {
            steps {
                bat """
                    cd build
                    "${MSBUILD_PATH}" OPN_PROJECT.sln /p:Configuration=Release /p:Platform=x64
                """
            }
        }
        stage('Test') {
            steps {
                bat """
                    cd build\\Release
                    if exist OPN_PROJECT.exe (
                        OPN_PROJECT.exe --gtest_output=xml:test_results.xml
                    ) else (
                        echo "Исполняемый файл не найден!"
                        exit 1
                    )
                """
                // Публикация результатов тестов (опционально)
                junit 'build/Release/test_results.xml'
            }
        }
    }
    post {
        always {
            cleanWs()  // Очистка рабочей директории
        }
    }
}