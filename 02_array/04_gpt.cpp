#include <iostream>
int main()
{
    int num;
    int arr[100];
    int even = 0;
    int odd = 0;
    std::cout<<"array size: ";
    std::cin>>num;
    for(int i = 0;i<num;i++)
    {
        std::cin>>arr[i];
    }
    for(int i = 0;i<num;i++)
    {
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    std::cout<<"Even "<<even<<std::endl;
    std::cout<<"Odd "<<odd;
    return 0;
}