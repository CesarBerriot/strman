cmake_minimum_required(VERSION 3.30)
project(strman C CXX)

include(cmake/dependencies.cmake)

add_library(strman)
target_include_directories(strman PUBLIC include)
discover_sources(strman)
if(${BUILD_TESTING})
  setup_gtest(strman)
endif()