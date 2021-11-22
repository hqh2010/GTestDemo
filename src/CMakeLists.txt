#查找当前目录下的所有源文件将名称保存到 BASE_SRC 变量
aux_source_directory(utils UTILS_SRC)
include_directories(utils SRC_INCLUDE)
set(MAIN_SOURCES
        ../main.cpp
        ${UTILS_SRC}
        ${SRC_INCLUDE}
        )

set(LINK_LIBS
    stdc++
    )

add_executable(main
        ${MAIN_SOURCES})

#target_include_directories(main PRIVATE ${GLIB_INCLUDE_DIRS})

#设置生成目标二进制的路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
install(TARGETS main RUNTIME DESTINATION bin)