#include <pqxx/pqxx>
#include <iostream>
#include <memory>

class MySQL
{
public:
    MySQL(std::string host_, std::string port_, std::string dbname_,
          std::string user_, std::string password_);
    ~MySQL();
    // Метод, создающий структуру БД (таблицы)
    void createTable(std::string table);
    // Метод, позволяющий добавить нового клиента
    void addClient(std::string table, std::string first_name, std::string last_name,
                   std::string email, std::string phone_number);
    // Метод, позволяющий добавить телефон для существующего клиента
    void addPhoneNumber(std::string table, int id, std::string phone_number);
    // Метод, позволяющий изменить данные о клиенте
    void updateClient(std::string table, int id, std::string first_name_new, std::string last_name_new,
                         std::string email_new, std::string phone_number_new);
    // Метод, позволяющий удалить телефон для существующего клиента
    void dropPhoneNumber(std::string table, int id, std::string phone_number);
    // Метод, позволяющий удалить существующего клиента
    void deleteClient(std::string table, int id);
    // Метод, позволяющий найти клиента по его данным (имени, фамилии, email-у или телефону)
    void findClient(std::string table, std::string first_name, std::string last_name, std::string email, std::string phone_number);

private:
    std::string host;
    std::string port;
    std::string dbname;
    std::string user;
    std::string password;
    std::unique_ptr<pqxx::connection> c;
};