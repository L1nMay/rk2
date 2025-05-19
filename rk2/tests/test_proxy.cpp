#include <gtest/gtest.h>
#include "../src/proxy.h"

// Тест без авторизации
TEST(ProxyTest, UnauthenticatedAccess) {
    Proxy proxy("test.db");
    proxy.write("test"); // Попытка записи без авторизации
    EXPECT_EQ(proxy.read(), ""); // Должен вернуть пустую строку
}

// Тест с авторизацией
TEST(ProxyTest, AuthenticatedAccess) {
    Proxy proxy("test.db");
    proxy.login("admin", "admin"); // Успешная авторизация
    proxy.write("test data"); // Запись должна пройти
    EXPECT_EQ(proxy.read(), "test data"); // Проверяем записанные данные
}
