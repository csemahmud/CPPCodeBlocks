#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if(b == 100){
        b++;
    }

    if(a == 0){
        cout << b;
    } else if(a == 1){
        cout << b*100;
    } else if(a == 2){
        cout << b*10000;
    }

    return 0;
}

/*

Sample input 1

0 5

Sample output 1

5

Sample input 2

1 11

Sample output 2

1100

Sample input 3

2 85

Sample output 3

850000

*/