#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    
    cin >> s;
    
    switch(s[s.length() - 1]){
        case 'r':
        cout << "er";
            break;
        case 't':
        cout << "ist";
    }
    
    return 0;
}

/*

Sample input 1

atcoder

Sample output 1

er

Sample input 2

tourist

Sample output 2

ist

Sample input 3

er

Sample output 3

er

*/