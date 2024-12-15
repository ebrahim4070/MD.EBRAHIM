#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> v(n);
        for (auto &i : v)
            cin >> i;

        // Sort in descending order to collect from the largest slots first
        sort(v.begin(), v.end(), greater<long long>());

        long long sum = 0;  // to track the number of cans collected
        int presses = 0;    // to track the number of button presses

        for (int i = 0; i < n; ++i) {
            sum += v[i];  // Collect the cans from the current slot
            presses++;    // Press the button for this slot
            if (sum >= k) // If we've collected enough cans
                break;
        }

        cout << presses << endl;
    }
    return 0;
}
