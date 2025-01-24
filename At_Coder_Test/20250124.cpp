#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if((a+b) >= 15 && b >= 8){
        cout << 1;
    } else if((a+b) >= 10 && b >= 3) {
        cout << 2;
    } else if((a+b) >= 3 ) {
        cout << 3;
    } else {
        cout << 4;
    }

    return 0;
}

/*

Sample input 1

10 8

Sample output 1

1

Sample input 2

1 2

Sample output 2

3

Sample input 3

0 0

Sample output 3

4

*/