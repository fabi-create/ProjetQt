# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Lab3-Prise-En-MainQt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Lab3-Prise-En-MainQt_autogen.dir\\ParseCache.txt"
  "Lab3-Prise-En-MainQt_autogen"
  )
endif()
