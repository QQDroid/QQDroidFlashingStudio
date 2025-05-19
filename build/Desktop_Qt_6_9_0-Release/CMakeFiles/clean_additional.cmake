# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/QQDroidFlashingStudio_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QQDroidFlashingStudio_autogen.dir/ParseCache.txt"
  "QQDroidFlashingStudio_autogen"
  )
endif()
