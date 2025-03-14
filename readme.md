```cmake
include(FetchContent)

FetchContent_Declare(
  strman
  GIT_REPOSITORY https://github.com/CesarBerriot/strman.git
  GIT_TAG 1.0.0
)

FetchContent_MakeAvailable(strman)

target_link_libraries(PROJECT_NAME PRIVATE strman)
```