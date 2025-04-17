cmake_minimum_required(VERSION 3.31)
project(Vorlesung)

set(CMAKE_CXX_STANDARD 20)

# Alle Executables sollen in den bin/ Ordner
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

# Füge das Skript zum Automatisieren hinzu
include(${CMAKE_SOURCE_DIR}/generate_targets.cmake)