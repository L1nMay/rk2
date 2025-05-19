# Тесты для Database
add_executable(test_database test_database.cpp)
target_link_libraries(test_database 
    rk2_lib 
    GTest::GTest 
    GTest::Main
)

# Тесты для Proxy
add_executable(test_proxy test_proxy.cpp)
target_link_libraries(test_proxy 
    rk2_lib 
    GTest::GTest 
    GTest::Main
)

# Автоматическое обнаружение тестов (предпочтительный способ)
gtest_discover_tests(test_database
    PROPERTIES TIMEOUT 10
)

gtest_discover_tests(test_proxy
    PROPERTIES TIMEOUT 10
)

# Альтернативный вариант (если автоматическое обнаружение не работает)
# add_test(NAME DatabaseTests COMMAND test_database)
# add_test(NAME ProxyTests COMMAND test_proxy)
