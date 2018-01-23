#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t,a,b,c;
	cin>>t;
	while(t--)
	{
	    string s;
    cin >> s;
    int n = s.size();
    string ans = "-1";
    int sum = (accumulate(begin(s), end(s), 0) - '0' * n) % 3;
    int lpos = -1;
    for(int i = 0; i < n; i++) {
        if((s[i] - '0') % 3 == sum && 
           (s[n - 1 - (i == n - 1)] - '0') % 2 == 0) {
            lpos = i;
            if(i + 1 < n && s[i] < s[i + 1]) {
                break;
            }
        }
    }
    cout << (lpos == -1 ? "-1" : s.substr(0, lpos) + s.substr(lpos + 1)) << '\n';
	}
	return 0;
}
