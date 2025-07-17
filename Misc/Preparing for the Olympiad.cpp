/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
**/

#include "iostream"
#include "vector"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int m[n];
        int s[n];

        int max_diff = 0;

        int mono_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }

        int stereo_sum = 0;
        for (int i = 0; i < n; i++) {
            int s_in;
            cin >> s_in;
            if (i == 0) {
                continue;
            }
            s[i] = s_in;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            mono_sum += m[i];
            if (i != 0 && i != n) {
                stereo_sum += s[i];
            }

            int diff = mono_sum - stereo_sum;
            // if (diff > 0) train += 1;
            if (diff > 0 && m[i] > s[i+1]) {
                train += 1;
                max_diff = diff;
            }
        }

        cout << ans << "\n";
        // if (max_diff == 0) {
        //     cout << mono_sum - stereo_sum << "\n";
        // } else {
        //     cout << max_diff << "\n";
        // }
    }
    return 0;
}
