#include <iostream>
typedef int num;
typedef std::string text;
typedef bool bo;

int main()
{
    //typedef is short form of "int a = 5" we can also write typedef int num and use in code.
    //this is interger
    num a = 5;
    num b = 5;
    num c = a + b;
    
    //this is string
    text fname = "mayank";
    text lname = "Sharma";

    //this is bool
    bo isStudent = true;
    std::cout<<isStudent;

    return 0;
}