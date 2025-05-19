# Включаем систему тестирования
enable_testing()

# Ищем библиотеку Google Test
find_package(GTest REQUIRED)
include(GoogleTest)

# Тесты для Database
add_executable(test_database test_database.cpp)
target_link_libraries(test_database rk2_lib GTest::GTest GTest::Main)
gtest_discover_tests(test_database)

# Тесты для Proxy
add_executable(test_proxy test_proxy.cpp)
target_link_libraries(test_proxy rk2_lib GTest::GTest GTest::Main)
gtest_discover_tests(test_proxy)
