# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CalcuFuntras_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CalcuFuntras_autogen.dir\\ParseCache.txt"
  "CalcuFuntras_autogen"
  )
endif()
