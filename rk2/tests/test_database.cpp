#include <gtest/gtest.h>
#include "../src/database.h"

// Проверяем запись и чтение данных
TEST(DatabaseTest, ReadWriteTest) {
    DataBase db;
    db.write("test data");
    EXPECT_EQ(db.read(), "test data"); // Проверяем что записанное == прочитанному
}

// Проверяем конструктор с именем файла
TEST(DatabaseTest, ConstructorTest) {
    DataBase db("test.db");
    EXPECT_EQ(db.read(), ""); // Новая БД должна быть пустой
}
