#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int arr[5];

    cout << "Enter 5 array elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    cout << "Total Even Numbers = " << count;

    return 0;
}