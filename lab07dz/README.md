# lab07dz

C++ library with Hunter package manager integration

## Usage

```cmake
hunter_add_package(lab07dz)
find_package(lab07dz REQUIRED)

target_link_libraries(your_target lab07dz)
