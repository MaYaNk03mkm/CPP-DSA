#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];

    cout << "Array size: ";
    cin >> n;

    cout << "Array Elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second_large = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second_large = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_large && arr[i] < largest)
        {
            second_large = arr[i];
        }
    }

    cout << "Largest Element = " << largest << endl;
    cout << "Second Largest Element = " << second_large;

    return 0;
}