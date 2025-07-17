#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt[10] = {};
        bool f = 0;

        for (int i = 0; i < n; i++) {
            int dig;
            cin >> dig;
            cnt[dig]++;
            if (cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 &&
                cnt[3] >= 1 && cnt[5] >= 1 && !f) {
                cout << i + 1 << endl;
                f = 1;
            }
        }
        if (!f) cout << 0 << endl;
    }
    return 0;
}
