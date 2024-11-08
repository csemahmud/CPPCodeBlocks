#include <bits/stdc++.h>
using namespace std;

int main() {
    
    bool approved = true;
    
    int n;
    cin >> n;
    
    if(n < 1200){
        cout << "ABC";
    } else {
        cout << "ARC";
    }
    
    return 0;

}

/*

Sample input 1

1000

Sample output 1

ABC

Sample input 2

2000

Sample output 2

ARC

*/

int main2() {
    
    bool approved = true;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if((a%2) == 0){
            if(((a%3) != 0)&&((a%5) != 0)){
                approved = false;
            }
        }
    }
    
    if(approved){
        cout << "APPROVED";
    } else {
        cout << "DENIED";
    }
    
    return 0;

}

/*

Sample input 1

5
6 7 9 10 31

Sample output 1

APPROVED

Sample input 2

3
28 27 24

Sample output 2

DENIED

*/

int main1() {
    
    int a, b;
    
    cin >> a >> b;
    
    if((a*b)%2 == 0){
        cout << "No";
    } else {
        cout << "Yes";
    }
    
    return 0;

}

/*

Sample input 1

3 1

Sample output 1

Yes

Sample input 2

1 2

Sample output 2

No

Sample input 3

2 2

Sample output 3

No

*/