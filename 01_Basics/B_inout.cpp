#include <iostream>
int main()
{
    std::string name;
    std::cout<<"Type Your Name: ";
    // std::cin>>name;
    int age;
    // std::cout<<"Enter Your Age: ";
    // std::cin>>age;
    // std::cout<<"Hello "<<name<<" you are "<<age<<" old";
    //for full name we use get line 
    std::getline(std::cin,name);
    std::cout<<"hello "<<name;

    return 0;
}