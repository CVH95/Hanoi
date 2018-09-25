cmake_minimum_required(VERSION 2.8.9)
# Project name
project (Tower_of_Hanoi)

# Initializaton message
MESSAGE(${PROJECT_NAME} " start compiling:")

# Add executables to /bin directory
set(EXECUTABLE_OUTPUT_PATH "../bin")

# Create executable for C++ program
add_executable(Tower_of_Hanoi src/hanoi.cpp)

# Finishing message
MESSAGE(${PROJECT_NAME} " compilation done!")