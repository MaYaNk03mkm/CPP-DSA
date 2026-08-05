#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int low = 0, high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (a[mid] > a[high])
            low = mid + 1;
        else if (a[mid] < a[high])
            high = mid;
        else
            high--;
    }

    cout << a[low];
    return 0;
}