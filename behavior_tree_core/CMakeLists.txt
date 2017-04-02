cmake_minimum_required(VERSION 2.8.3)
project(behavior_tree_core)



find_package(catkin REQUIRED COMPONENTS
  roscpp
  roslint
)

add_definitions(-Wall -lglut -lGL -std=c++0x)

catkin_package(
  CATKIN_DEPENDS actionlib_msgs
  INCLUDE_DIRS include
)



#########################################################
# FIND GLUT
#########################################################
find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS})
link_directories(${GLUT_LIBRARY_DIRS})
add_definitions(${GLUT_DEFINITIONS})
if(NOT GLUT_FOUND)
    message(ERROR " GLUT not found!")
endif(NOT GLUT_FOUND)

#########################################################
# FIND OPENGL
#########################################################
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
if(NOT OPENGL_FOUND)
    message(ERROR " OPENGL not found!")
endif(NOT OPENGL_FOUND)

#########################################################
# FIND GTest
#########################################################
find_package(GTest)
include_directories(${GTEST_INCLUDE_DIRS})


INCLUDE_DIRECTORIES(${catkin_INCLUDE_DIRS} include)

file(GLOB_RECURSE BTHeadLibrary include/*.h)

set(BTSrcLibrary
  src/action_node.cpp
  src/behavior_tree.cpp
  src/condition_node.cpp
  src/control_node.cpp
  src/draw.cpp
  src/exceptions.cpp
  src/leaf_node.cpp
  src/tick_engine.cpp
  src/parallel_node.cpp
  src/fallback_node.cpp
  src/sequence_node.cpp
  src/fallback_node_with_memory.cpp
  src/sequence_node_with_memory.cpp
  src/tree_node.cpp
)


add_library(bt ${BTSrcLibrary} ${BTHeadLibrary})
target_link_libraries(bt ${catkin_LIBRARIES} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

## Run roslint with `catkin_make roslint`
# Filter out errors with respect C++11 (for ROS-indigo)
set(ROSLINT_CPP_OPTS "--filter=-build/c++11,-build/include_what_you_use,-legal/copyright")
# Roslint macro
roslint_cpp()
