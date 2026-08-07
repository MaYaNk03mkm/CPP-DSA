#include <iostream>
int main()
{
    int n, i;
    int arr[100];
    std::cout << "Array Size: ";
    std::cin >> n;
    std::cout << "Array Elements: ";
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int longest = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > longest)
        {
            longest = arr[i];
        }
    }
    std::cout << "Largest Element: " << longest;
    return 0;
}