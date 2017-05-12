set(PROJECT_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE "${PROJECT_INCLUDE_DIR}")

include_directories("${PROJECT_INCLUDE_DIR}")

add_executable(mylib_test TestMylib.cpp ${PROJECT_SOURCE_DIR}/src/mylib.cpp)
target_link_libraries(mylib_test Catch)

enable_testing()
add_test(NAME TestMylib COMMAND mylib_test)
