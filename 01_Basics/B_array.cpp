#include <iostream>
int main()
{
    std::string cars[3];//array init
    
    cars[0]="honda";//array assign
    cars[1]="mustang";//array assign
    cars[2]="BMW";//array assign

    std::cout<<cars[1]<<'\n'; // print the arrray by inndex value
    std::cout<<cars[0]<<'\n'; // print the arrray by inndex value
    std::cout<<cars[2]<<'\n'; // print the arrray by inndex value

    return 0;
}