cmake_minimum_required(VERSION 3.3)
project(XML)

set(CMAKE_CXX_STANDARD 11)

include_directories("../../poco-1.7.8/Foundation/include")
include_directories("../../poco-1.7.8/XML/include")
link_directories("../../poco-1.7.8/cmake-build-release/lib")

set(SOURCE_FILES SAXTest.cpp)
add_executable(SAXTest ${SOURCE_FILES})
target_link_libraries(SAXTest PocoFoundation PocoXML)

set(SOURCE_FILES DOMTest.cpp)
add_executable(DOMTest ${SOURCE_FILES})
target_link_libraries(DOMTest PocoFoundation PocoXML)


