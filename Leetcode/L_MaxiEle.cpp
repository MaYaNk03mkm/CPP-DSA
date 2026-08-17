#include <iostream>
int main()
{
    int arr[]={12,45,7,89,23,56};
    int largest_num= arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>largest_num){
            largest_num=arr[i];
        }
    }
    std::cout<<largest_num;
}