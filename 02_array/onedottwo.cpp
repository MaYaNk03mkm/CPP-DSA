#include <iostream>
int main()
{
    int arr[5];
    std::cout<<"ENTER THE ARRAY ELEMENT: ";
    for(int i = 0;i<5;i++){
        std::cin>>arr[i];
    }
    std::cout<<"reverse order";
    for (int i = 4;i >= 0; i--){
        std::cout<<arr[i]<<" "; 
    }
}