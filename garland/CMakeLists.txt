set(PROJECT_NAME garland)
project(${PROJECT_NAME} C CXX)
set(${PROJECT_NAME}_SRCS garland.cpp)
generate_arduino_firmware(${PROJECT_NAME})
