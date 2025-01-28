#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s, t, u;
    
    cin >> s >> t;
    
    int a, b;
    
    cin >> a >> b;
    
    cin >> u;
    
    if(u == s){
        a--;
    } else if(u == t){
        b--;
    }
    
    cout << a << " " << b;
    
    return 0;
}

/*

Sample input 1

red blue
3 4
red

Sample output 1

2 4

Sample input 2

red blue
5 5
blue

Sample output 2

5 4

*/