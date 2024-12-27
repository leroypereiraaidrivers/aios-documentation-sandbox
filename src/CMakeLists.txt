
cmake_minimum_required(VERSION 3.21)
set(ONTOLOGY_LIB ontology)
set(MAIN main)

add_library(${ONTOLOGY_LIB} ontology.cpp)
add_library(core::${ONTOLOGY_LIB} ALIAS ${ONTOLOGY_LIB}) 

target_include_directories(
  ${ONTOLOGY_LIB} 
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
  )

add_executable(${MAIN} main.cpp)
include_directories(${MAIN} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
link_directories(${MAIN} ${ONTOLOGY_LIB})


install(TARGETS ${ONTOLOGY_LIB} DESTINATION lib)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/common_structs.hpp
        DESTINATION include)
