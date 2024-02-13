#include <iostream>
#include "MySQL.h"

int main()
{
    MySQL mySQL("localhost", "5432", "CPPSQL7_4", "postgres", "GarDeN001");
    // mySQL.createTable("client");
    // mySQL.addClient("client", "Денис", "Гарпинич", "garpinich22@mail.ru", "123, 1234");
    // mySQL.addClient("client", "Данил", "Гарп", "garp22@mail.ru", "124, 1235");
    // mySQL.addClient("client", "Дмитрий", "Г", "dg22@mail.ru", "12");
    // mySQL.addPhoneNumber("client", 1, "1111111");
    // mySQL.addPhoneNumber("client", 2, "222222222");
    // mySQL.updateClient("client", 1, "Д", "Г", "garpinich22@yandex.ru", "123, 1234, 12345, 123456");
    // mySQL.updateClient("client", 2, "Да", "Г", "garp22@yandex.ru", "124, 1241, 1242");
    // mySQL.dropPhoneNumber("client", 1, "123");
    // mySQL.dropPhoneNumber("client", 1, "12345");
    // mySQL.dropPhoneNumber("client", 1, "123456");
    // mySQL.deleteClient("client", 2);
    // mySQL.findClient("client", "Д", "Г", "garpinich22@yandex.ru", "1234");
    return 0;
}