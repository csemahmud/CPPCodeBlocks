#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;
    
    cin >> a >> b;
    
    if(a >= b){
        for(int i = 0; i < a; i++){
            cout << b;
        }
    } else {
        for(int i = 0; i < b; i++){
            cout << a;
        }
    }

    return 0;

}

/*

Sample input 1

4 3

Sample output 1

3333

Sample input 2

7 7

Sample output 2

7777777

*/