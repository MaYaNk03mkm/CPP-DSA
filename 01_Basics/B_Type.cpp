#include <iostream>
// typedef int num;
// typedef std::string text;
// typedef bool bo;


// by using 
using num = int;
using text = std::string;
using bo = bool; 
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
    // we can also done this by using USING in strting of the code in above the int main//
    // in thi swe comment the typedef and use the using and variable and then we and datatype of the variable and that done.
    return 0;
}