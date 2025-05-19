add_executable(test_database test_database.cpp)
target_link_libraries(test_database rk2_lib GTest::GTest GTest::Main)
gtest_discover_tests(test_database)

add_executable(test_proxy test_proxy.cpp)
target_link_libraries(test_proxy rk2_lib GTest::GTest GTest::Main)
gtest_discover_tests(test_proxy)
