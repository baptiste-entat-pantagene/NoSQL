cmake_minimum_required(VERSION 3.28)
project(NoSQL)

set(CMAKE_CXX_STANDARD 26)


Include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.4.0 # or a later release
)
FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)

add_executable(NoSQL sources/main.cpp
        sources/NoSQL.cpp
        includes/NoSQL.h
        sources/primitiveStorage.cpp
        includes/primitiveStorage.h)

add_executable(tests
        sources/NoSQL.cpp
        includes/NoSQL.h
        sources/primitiveStorage.cpp
        includes/primitiveStorage.h
        tests/test_primitiveStorage.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
catch_discover_tests(tests)

