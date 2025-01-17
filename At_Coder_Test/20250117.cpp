#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    int k = 1;

    while(k <= n){
        k *= 2;
        if(k > n){
          k = k/2;
          break;
        }
    }

    cout << k;

    return 0;
}

/*

Sample input 1

7

Sample output 1

4

Sample input 2

32

Sample output 2

32

Sample input 3

1

Sample output 3

1

Sample input 4

100

Sample output 4

64

*/

int main1() {

    int n, a, b;

    cin >> n >> a >> b;

    for(int i = 1; i <= n;  i++){
        int c;
        cin >> c;
        if(c == a+b){
            cout << i;
            return 0;
        }
    }

    return 0;
}

/*

Sample input 1

3 125 175
200 300 400

Sample output 1

2

Sample input 2

1 1 1
2

Sample output 2

1

Sample input 3

5 123 456
135 246 357 468 579

Sample output 3

5

*/