#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x == 0) {
        cout << 0;
        return 0;
    }

    long long low = 1, high = x, ans = 1;

    while (low <= high) {
        long long mid = (low + high) / 2;

        if (mid * mid == x) {
            cout << mid;
            return 0;
        }
        else if (mid * mid < x) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << ans;
    return 0;
}