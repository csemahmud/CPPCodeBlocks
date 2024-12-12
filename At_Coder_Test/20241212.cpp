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