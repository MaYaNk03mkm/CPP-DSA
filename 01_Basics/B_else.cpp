#include <iostream>
int main()
{
    int marks;
    std::cout<<"Enter your marks: ";
    std::cin>>marks;
    if(marks >= 90){
        std::cout<<"You got A+";
    }
    else if (marks >= 80)
    {
        std::cout<<"You got B+";
    }
    else if (marks >= 70)
    {
        std::cout<<"You got B";
    }
    else if (marks >= 60)
    {
        std::cout<<"You got C+";
    }
    else if (marks >= 50)
    {
        std::cout<<"You got C";
    }
    else if (marks >= 40)
    {
        std::cout<<"You got D";
    }
    else{
        std::cout<<"You got F";
    }
}