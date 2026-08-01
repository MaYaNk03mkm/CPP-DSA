#include <iostream>
int main()
{
    int num;
    int arr[100];
    int max;
    std::cout<<"array size: ";
    std::cin>>num;
    for(int i = 0;i<num;i++)
    {
        std::cin>>arr[i];
    }
    for(int i = 0;i<num;i++){
        std::cout<<arr[i]<<" ";
    }
    max = arr[0];
    for(int i=1;i > num;i++)
    {
        if(arr[i]<max){
            max=arr[i];
        }
    }
    std::cout<<max;
    return 0;
}