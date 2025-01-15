#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, t, p;

    cin >> n >> t >> p;

    int l[n];

    for(int i = 0; i < n; i++){
        cin >> l[i];
    }

    sort(l, l+n);

    if(l[n - p] >= t){
        cout << 0;
    } else {
        cout << t - l[n - p];
    }

    return 0;
}

/*

Sample input 1

5 10 3
3 11 1 6 2

Sample output 1

7

Sample input 2

2 5 2
10 10

Sample output 2

0

Sample input 3

3 10 1
1 2 3

Sample output 3

7


*/

int main1() {

    int r;

    cin >> r;

    if(r < 100){
        cout << 100 - r;
    } else if(r < 200){
        cout << 200 - r;
    } else {
        cout << 300 - r;
    }

    return 0;
}

/*

Sample input 1

123

Sample output 1

77

Sample input 2

250

Sample output 2

50

*/