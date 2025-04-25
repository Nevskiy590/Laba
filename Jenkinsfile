pipeline {
    agent any
    stages {
        stage('Generate Solution') {
            steps {
                bat '''
                    mkdir build || true
                    cd build
                    "C:\\Program Files\\CMake\\bin\\cmake.exe" .. -G "Visual Studio 17 2022" -A x64
                '''
            }
        }
        stage('Build') {
            steps {
                bat '''
                    cd build
                    cmake --build . --config Release
                '''
            }
        }
        stage('Test') {
            steps {
                bat '''
                    cd build\\Release
                    if exist main.exe (
                        main.exe
                    ) else (
                        echo "Executable not found:"
                        dir /B
                        exit 1
                    )
                '''
            }
        }
    }
}
}