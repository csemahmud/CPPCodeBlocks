#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    string str[n];
    
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }
    
    for(int i = n-1; i >= 0; i--){
        cout << str[i] << endl;
    }
    
    return 0;

}

/*

Sample input 1

3
Takahashi
Aoki
Snuke

Sample output 1

Snuke
Aoki
Takahashi

Sample input 2

4
2023
Year
New
Happy

Sample output 2

Happy
New
Year
2023

*/