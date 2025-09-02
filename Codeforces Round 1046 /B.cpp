#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;   

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        string s; 
        int k, n;
        cin >> n >> k;
        cin >> s;

        int max_len = 0;
        int cur_len = 0;

        for(char c : s) {
            if (c == '1') {
                cur_len++;
            } else {
                cur_len = 0;
            }
            max_len = max(max_len, cur_len);
        }

        if (k > max_len ) {
            cout << "YES" << endl;
            int temp = n;
            vector<int> ans(n, 0);
            for(int i = 0; i < n; i++) {
                if(s[i] == '1') {
                    ans[i] = n - temp + 1;
                    temp--;
                }
            } 
            for(int i = 0; i < n; i++) {
                if(s[i] == '0') {
                    ans[i] = n - temp + 1;
                    temp--;
                }
            }
            for(int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }

    }

}