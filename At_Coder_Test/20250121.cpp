#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    
    cin >> n;
    
    int v[n], c[n], d = 0;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    
    for(int i = 0; i < n; i++){
        if(d <= (d + (v[i] - c[i]))){
            d += (v[i] - c[i]);
        }
    }
    
    cout << d;

    return 0;
}

/*

Sample input 1

3
10 2 5
6 3 4

Sample output 1

5

Sample input 2

4
13 21 6 19
11 30 6 15

Sample output 2

6

Sample input 3

1
1
50

Sample output 3

0

*/