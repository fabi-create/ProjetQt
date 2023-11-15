# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\chartthemes_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\chartthemes_autogen.dir\\ParseCache.txt"
  "chartthemes_autogen"
  )
endif()
