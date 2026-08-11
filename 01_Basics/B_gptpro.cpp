#include <iostream>
int main(){
    int num;
    int arr[100];
    std::cout<<"Enter the size: ";
    std::cin>>num;
    for(int i = 0;i<num;i++){
        std::cin>>arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        std::cout<<arr[i]<<"\n";
    }
    return 0;
}