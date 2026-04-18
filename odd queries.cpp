#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n+1), pre(n+1, 0);

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            pre[i] = pre[i-1] + a[i];
        }

        long long total = pre[n];

        while(q--) {
            int l, r, k;
            cin >> l >> r >> k;

            long long range_sum = pre[r] - pre[l-1];
            long long len = r - l + 1;

            long long new_sum = total - range_sum + len * k;

            if(new_sum % 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}