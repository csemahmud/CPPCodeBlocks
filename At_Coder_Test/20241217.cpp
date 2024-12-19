#include <bits/stdc++.h>
using namespace std;

long long ar[400005];

int main() {

    long long n, m;

    cin >> n >> m;

    for(long long i = 0; i < n; i++){
        cin >> ar[i];
    }

    sort(ar, ar+(m*2));

    long long sum = 0;

    for(long long i = 0; i < m; i++){
        sum += (ar[i]+ar[m*2-1-i])*(ar[i]+ar[m*2-1-i]);
    }

    cout << sum;

    return 0;
}

/*

Sample input 1

5 3
1 1 1 6 7

Sample output 1

102

Sample input 2

2 1
167 924

Sample output 2

1190281

Sample input 3

12 9
22847 98332 854 68844 81080 46058 40949 62493 76561 52907 88628 99740

Sample output 3

61968950639

*/