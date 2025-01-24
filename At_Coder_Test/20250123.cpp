#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b;
    
    cin >> a >> b;
    
    if(a >= 13){
        cout << b;
    } else if(a >= 6){
        cout << b/2;
    } else {
        cout << 0;
    }

    return 0;
}

/*

Sample input 1

30 100

Sample output 1

100

Sample input 2

12 100

Sample output 2

50

Sample input 3

0 100

Sample output 3

0

*/