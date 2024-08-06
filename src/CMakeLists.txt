cmake_minimum_required(VERSION 3.22)

set(INCLUDE_PATH ../include/krfw)

set(PUBLIC_HEADERS
    ${INCLUDE_PATH}/krfw.h
    ${INCLUDE_PATH}/krfw_defines.h
    ${INCLUDE_PATH}/krfw_types.h
)
SOURCE_GROUP(Include FILES ${PUBLIC_HEADERS})

set(PUBLIC_RHI_HEADERS
    ${INCLUDE_PATH}/rhi/krfw_buffer.h
    ${INCLUDE_PATH}/rhi/krfw_context.h
    ${INCLUDE_PATH}/rhi/krfw_device.h
    ${INCLUDE_PATH}/rhi/krfw_renderstates.h
    ${INCLUDE_PATH}/rhi/krfw_shaderstate.h
    ${INCLUDE_PATH}/rhi/krfw_texture.h
)
SOURCE_GROUP(Include/RHI FILES ${PUBLIC_RHI_HEADERS})

set(COMMON_SOURCE_FILES
    krfw/krfw.cpp
)
SOURCE_GROUP(Common FILES ${COMMON_SOURCE_FILES})

set(RHI_SOURCE_FILES
    krfw/rhi/krfw_buffer.cpp
    krfw/rhi/krfw_context.cpp
    krfw/rhi/krfw_device.cpp
    krfw/rhi/krfw_renderstates.cpp
    krfw/rhi/krfw_shaderstate.cpp
    krfw/rhi/krfw_texture.cpp
)
SOURCE_GROUP(RHI FILES ${RHI_SOURCE_FILES})

set(KRFW_SOURCE_FILES 
    ${COMMON_SOURCE_FILES}
    ${RHI_SOURCE_FILES}

    ${PUBLIC_HEADERS}
    ${PUBLIC_RHI_HEADERS}
)

add_library(krfw ${KRFW_SOURCE_FILES})

target_include_directories(krfw PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../include>
  $<INSTALL_INTERFACE:${ASSIMP_INCLUDE_INSTALL_DIR}>
)