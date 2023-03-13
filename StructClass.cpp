#include <iostream>
#include <string>

struct user
{
public:
    user(std::string n, int a)
    {
        name = n; age = a;
    }
    void move()
    {
        std::cout << name << " is moving" << std::endl;
    }
    void setAge(int a)
    {
        if (a > 0 && a < 100) age = a;
    }
    std::string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
private:
    std::string name;
    int age;

};

int main()
{
    user tom("Tom", 22);
    std::cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << std::endl;
    tom.setAge(31);
    std::cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << std::endl;
    return 0;
}