# SPDX-FileCopyrightText: Copyright DB Netz AG
# SPDX-License-Identifier: CC0-1.0

# ######################################################################################################################
# Preamble
# ######################################################################################################################
cmake_minimum_required(VERSION 3.22)

project(
    dsd_common_types
    LANGUAGES CXX
    VERSION 1.0.0
)
# ######################################################################################################################
# Project Wide Setup
# ######################################################################################################################
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(GNUInstallDirs)
# ######################################################################################################################
# Dependencies
# ######################################################################################################################
find_package(ament_cmake REQUIRED)

# ######################################################################################################################
# Main targets
# ######################################################################################################################
# Targets
add_library(dsd_common_types INTERFACE)
add_library(dsd_common_types::dsd_common_types ALIAS dsd_common_types)
target_include_directories(dsd_common_types INTERFACE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>)

# Installation
install(DIRECTORY "${PROJECT_SOURCE_DIR}/include/" DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(
    TARGETS dsd_common_types
    EXPORT dsd_common_typesTargets
    INCLUDES
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
ament_export_targets(dsd_common_typesTargets HAS_LIBRARY_TARGET)

# ######################################################################################################################
# Main targets
# ######################################################################################################################
ament_package()
