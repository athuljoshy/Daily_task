# Install script for directory: C:/Users/PERSONAL/Documents/SystemC/Practice

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/SystemC_Practice")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/msys64/ucrt64/bin/objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/AndGate/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/DFlipFlop/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/NandGate/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/NorGate/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/NotGate/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/OrGate/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/ProducerConsumer/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/SimpleAdder/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/Timer_SC_THREAD/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/XnorGate/cmake_install.cmake")
  include("C:/Users/PERSONAL/Documents/SystemC/Practice/build/XorGate/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/PERSONAL/Documents/SystemC/Practice/build/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/PERSONAL/Documents/SystemC/Practice/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
