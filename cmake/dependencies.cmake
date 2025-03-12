include(FetchContent)

FetchContent_Declare(
  discover_sources
  GIT_REPOSITORY https://github.com/CesarBerriot/discover_sources.git
  GIT_TAG 1.0.0
)
FetchContent_Declare(
  setup_gtest
  GIT_REPOSITORY https://github.com/CesarBerriot/setup_gtest.git
  GIT_TAG 1.1.0
)

FetchContent_MakeAvailable(discover_sources setup_gtest)

include(${discover_sources_SOURCE_DIR}/discover_sources.cmake)
include(${setup_gtest_SOURCE_DIR}/setup_gtest.cmake)