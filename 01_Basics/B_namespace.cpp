#include <iostream>
// namespace = each entity requires unique name
namespace first //1st namespace
{
    int a = 1;
} 
namespace second //second namespace
{
    int a = 2;
}
int main()
{
    using namespace first;
    int a = 0;
    std:: cout << second :: a;//remove second it will give the value of the first
    return 0;
}
