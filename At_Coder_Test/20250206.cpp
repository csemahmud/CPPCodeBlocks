#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    
    string s1, s2;
    
    cin >> n;
    cin >> s1 >> s2;
    
    for(int i = 0; i < n; i++){
        cout << s1[i] << s2[i];
    }
     
    return 0;
}

/*

Sample input 1

2
ip cc

Sample output 1

icpc

Sample input 2

8
hmhmnknk uuuuuuuu

Sample output 2

humuhumunukunuku

Sample input 3

5
aaaaa aaaaa

Sample output 3

aaaaaaaaaa

*/

