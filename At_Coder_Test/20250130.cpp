#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    int x = 0;
    
    if(n%100 > 0){
        x = 1;
    }
    
    cout << n/100 + x ;
    
    return 0;
}

/*

Sample input 1

2021

Sample output 1

21

Sample input 2

200

Sample output 2

2

*/