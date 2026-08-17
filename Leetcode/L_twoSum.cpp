#include <iostream>
int main()
{
    int arr[] = {2,7,11,15};
    int target = 9;

    for(int i=0; i<4;i++){
        for(int j=1; j<4; j++){
            if(arr[i]+arr[j]==target){
                std::cout<<i<<j;
            }
        }
    }
}