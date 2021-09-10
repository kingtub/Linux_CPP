# CMake 最低版本号要求

cmake_minimum_required (VERSION 3.6.3)

# 项目信息

project (TEST_VAR)

# 输出以下变量的信息

# CMake内置变量
#这2个变量指代的内容是一致的,如果是 in source 编译,指的就是工程顶层目录,如果是 out-of-source 编译,
#指的是工程编译发生的目录。PROJECT_BINARY_DIR 跟其他指令稍有区别,现在,你可以理解为他们是一致的。
message("CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

# 这2个变量指代的内容是一致的,不论采用何种编译方式,都是工程顶层目录。
#也就是在 in source 编译时,他跟 CMAKE_BINARY_DIR 等变量一致。
#PROJECT_SOURCE_DIR 跟其他指令稍有区别,现在,你可以理解为他们是一致的。
message("CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")

#指的是当前处理的 CMakeLists.txt 所在的路径
message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
#如果是 in-source 编译,它跟 CMAKE_CURRENT_SOURCE_DIR 一致,如果是 out-of-source 编译,
# 他指的是 target 编译目录
message("CMAKE_CURRENT_BINARY_DIR: ${CMAKE_CURRENT_BINARY_DIR}")



# cmake 调用环境变量的方式
# 使用$ENV{NAME}指令就可以调用系统的环境变量了
MESSAGE(STATUS “HOME dir: $ENV{HOME}”)

message("The CMake verison:${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}.${CMAKE_PATCH_VERSION}")
message("The System:${CMAKE_SYSTEM}")
message("Unix?:${UNIX}")
message("Windows?:${WIN32}")
