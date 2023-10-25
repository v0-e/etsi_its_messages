cmake_minimum_required(VERSION 3.8)
project(etsi_its_rviz_plugins)

find_package(ros_environment REQUIRED QUIET)
set(ROS_VERSION $ENV{ROS_VERSION})

# === ROS2 (AMENT) =============================================================
if(${ROS_VERSION} EQUAL 2)

  if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
  endif()

  # find dependencies
  find_package(ament_cmake REQUIRED)
  find_package(etsi_its_msgs REQUIRED)
  find_package(GeographicLib REQUIRED)
  find_package(pluginlib REQUIRED)
  find_package(rclcpp REQUIRED)
  find_package(rviz_common REQUIRED)
  find_package(rviz_default_plugins REQUIRED)
  find_package(rviz_ogre_vendor REQUIRED)
  find_package(rviz_rendering REQUIRED)
  find_package(tf2 REQUIRED)
  find_package(tf2_geometry_msgs REQUIRED)
  find_package(tf2_ros REQUIRED)

  set(display_headers_to_moc
    include/displays/CAM/cam_display.hpp
    include/displays/CAM/cam_render_object.hpp
  )

  foreach(header "${display_headers_to_moc}")
    qt5_wrap_cpp(display_moc_files "${header}")
  endforeach()

  set(display_source_files
    src/displays/CAM/cam_display.cpp
    src/displays/CAM/cam_render_object.cpp
  )

  add_library(${PROJECT_NAME} SHARED
    ${display_moc_files}
    ${display_source_files}
  )

  target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
    ${Qt5Widgets_INCLUDE_DIRS}
  )

  target_link_libraries(${PROJECT_NAME} PUBLIC
    rviz_ogre_vendor::OgreMain
    rviz_ogre_vendor::OgreOverlay
  )

  pluginlib_export_plugin_description_file(rviz_common plugins_description.xml)

  ament_target_dependencies(${PROJECT_NAME}
    PUBLIC
    rclcpp
    etsi_its_msgs
    GeographicLib
    rviz_common
    rviz_default_plugins
    rviz_rendering
    tf2
    tf2_geometry_msgs
    tf2_ros
  )

  # Export modern CMake targets
  ament_export_targets(${PROJECT_NAME} HAS_LIBRARY_TARGET)

  ament_export_dependencies(
    etsi_its_msgs
    rclcpp
    rviz_common
    rviz_default_plugins
    rviz_ogre_vendor
    rviz_rendering
    tf2
    tf2_geometry_msgs
    tf2_ros
  )

  install(
    TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
  )

  install(
    DIRECTORY launch
    DESTINATION share/${PROJECT_NAME}
  )

  install(
    DIRECTORY config
    DESTINATION share/${PROJECT_NAME}
  )

  if(BUILD_TESTING)
    #find_package(ament_lint_auto REQUIRED)
    # the following line skips the linter which checks for copyrights
    # comment the line when a copyright and license is added to all source files
    #set(ament_cmake_copyright_FOUND TRUE)
    # the following line skips cpplint (only works in a git repo)
    # comment the line when this package is in a git repo and when
    # a copyright and license is added to all source files
    #set(ament_cmake_cpplint_FOUND TRUE)
    #ament_lint_auto_find_test_dependencies()
  endif()

  ament_package(
    CONFIG_EXTRAS ${PROJECT_NAME}-extras.cmake
  )

# === ROS1 (CATKIN) ============================================================
elseif(${ROS_VERSION} EQUAL 1)

  # Currently no support for ROS1!
  # Specify that the directory should be excluded from the install target
  install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
          DESTINATION .
          EXCLUDE_FROM_ALL)

endif()