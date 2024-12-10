#include <bits/stdc++.h>
using namespace std;

int main() {

    long long x, a, b;

    cin >> x >> a >> b;

    long long k = a - b;

    if(k >= 0){
        cout << "delicious";
    } else if((k + x >= 0)){
        cout << "safe";
    } else {
        cout << "dangerous";
    }

    return 0;
}

/*

Sample input 1

4 3 6

Sample output 1

safe

Sample input 2

6 5 1

Sample output 2

delicious

Sample input 3

3 7 12

Sample output 3

dangerous


*/