#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int num_n;
    cin>>num_n;
    
    if((num_n == 0)||(num_n%100 != 0)){
        cout << "No";
    } else {
        cout << "Yes";
    }
    
    return 0;
}

/*

Sample input 1

500

Sample output 1

Yes

Sample input 2

40

Sample output 2

No

Sample input 3

0

Sample output 3

No

*/