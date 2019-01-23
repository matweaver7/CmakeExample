add_library(
  math
  math.h
  math.cpp
  )
target_include_directories(math PUBLIC "${CMAKE_SOURCE_DIR}/src")
# set(sources ${sources} math.cpp math.h)