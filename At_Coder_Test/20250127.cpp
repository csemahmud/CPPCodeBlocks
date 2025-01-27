#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c;
    
    cin >> a >> b >> c;
    
    while(c <= b){
        if(c >= a){
            cout << c;
            return 0;
        }
        c *= 2;
    }
    
    cout << -1;
    return 0;
}

/*

Sample input 1

123 456 100

Sample output 1

200

Sample input 2

630 940 314

Sample output 2

-1

*/