#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    long long L1, L2, L3;

    L1 = 2;
    L2 = 1;

    if(n == 0){
        cout << L1;
    } else if(n == 1){
        cout << L2;
    } else {
        for(int i = 0; i < n; i++){
            L3 = L1 + L2;
            L1 = L2;
            L2 = L3;
        }
        
        cout << L1;
    }
    
    

    return 0;
}

/*

Sample input 1

5

Sample output 1

11

Sample input 2

86

Sample output 2

939587134549734843

*/