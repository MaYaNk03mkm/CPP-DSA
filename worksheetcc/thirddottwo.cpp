#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> target;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == target) {
            cout << "true";
            return 0;
        }

        if (a[low] == a[mid] && a[mid] == a[high]) {
            low++;
            high--;
        }
        else if (a[low] <= a[mid]) {
            if (target >= a[low] && target < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (target > a[mid] && target <= a[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    cout << "false";
    return 0;
}