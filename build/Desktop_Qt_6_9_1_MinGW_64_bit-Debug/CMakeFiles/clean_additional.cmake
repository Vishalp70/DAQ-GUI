# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DAQ_GUI_Root_V1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DAQ_GUI_Root_V1_autogen.dir\\ParseCache.txt"
  "DAQ_GUI_Root_V1_autogen"
  )
endif()
