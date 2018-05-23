cmake_minimum_required( VERSION 3.0 )
project( Name)
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main.out src/lr.cpp
	src/Point.cpp
	src/Vecteur.cpp
	src/Couleur.cpp
	src/Materiau.cpp
	src/Intensite.cpp
	src/Objet.cpp
	src/Sphere.cpp
	src/Plan.cpp
	src/Source.cpp
	src/Scene.cpp
	src/Image.cpp
	src/Camera.cpp
	src/Rayon.cpp
	src/Intersection.cpp
)
target_link_libraries( main.out ${PKG_LIBRARIES} )

