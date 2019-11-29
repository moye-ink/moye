# Moye.Ink

cmake_minimum_required (VERSION 3.10)

project(moye)

include_directories(${moye_SOURCE_DIR}/include)

# boost
find_package(Boost REQUIRED)
include_directories(${Boost_IINCLUDE_DIRS})

# wxWidgets
find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})

# Command-line program
add_executable(moye src/moye_cli.cc)

# GUI program
add_executable(moye-gui src/gui/moye_gui.cc)
target_link_libraries(moye-gui ${wxWidgets_LIBRARIES})
