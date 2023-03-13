#include <iostream>

class Person
{
public:
    class Account  
    {
    public:
        Account(const std::string& p_email, const std::string& p_password)
        {
            email = p_email;
            password = p_password;
        }
        std::string email{};
        std::string password{};
    };
    Person(const std::string& p_name, const Account& p_account)
    {
        name = p_name;
        account = p_account;
    }
    void print()
    {
        std::cout << "Name: " << name << "\n" << "Email: " << account.email << "\n"
            << "Password: " << account.password << std::endl;

    }
private:
    std::string name;
    Account account{ "", "" }; 
};

int main()
{
    Person::Account account{ "bob@somemail.com", "qwerty" };
    Person bob{ "Bob", account };
    bob.print();
}