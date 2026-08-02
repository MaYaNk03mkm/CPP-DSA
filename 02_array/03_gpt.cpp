#include <iostream>
int main()
{
    int num;
    int arr[100];
    int positive = 0; 
    int negative = 0;
    int zero = 0; 
    std::cout<<"array size: ";
    std::cin>>num;
    for(int i=0;i<num;i++)
    {
        std::cin>>arr[i];
    } 
    for(int i=0;i<num;i++)
    {
        std::cout<<arr[i]<<'\n';
    }
    for(int i =0;i<num;i++){
        if(arr[i]>0){
            positive++;
        }
        else if (arr[i] == 0)
        {
            zero++;
        }
        else{
            negative++;
        }
    }
    std::cout<<"Positive "<<positive<<std::endl;
    std::cout<<"Negative "<<negative<<std::endl;
    std::cout<<"Zero "<<zero;
    return 0;
}