#include <iostream>
#include <cmath>
int main()
{
    double a = 5.70;
    double b = 10;
    double z;
    z = std::max(a,b);   //max are used to tell which variable have  large value
    z = std::min(a,b);   //min are used to tell which variable have lowvalue
    z = pow(2,3);        // this is used to power the value
    z = sqrt(81);        //this is used to find the square root of the no.
    z = abs(-3);         // this is used to find the absolute value
    z = round(a);        //this is used to find the round value of the no.
    z = ceil(a);         //this is used to find the close value to the no.
    z = floor(a);        // this is used to find the lowest value of the no.
    std::cout<<z;
    return 0;
}