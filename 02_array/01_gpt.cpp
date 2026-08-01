#include <iostream>
int main()
{
    int num;
    int arr[100];
    int sum = 0;
    std::cout<<"Enter the size of the array: ";
    std::cin>>num;
    for(int i = 0;i<num;i++)
    {
        std::cin>>arr[i];
    }
    for(int i = 0;i<num;i++)
    {
        std::cout<<arr[i]<<" ";
        sum = sum + arr[i];
    }
    std::cout<<sum;
    return 0;
}