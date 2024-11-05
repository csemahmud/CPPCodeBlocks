#include <bits/stdc++.h>
using namespace std;

int main() {
    
    bool flag = true;
    
    int a;
    int b;
    
    cin >> a;
    cin >> b;
    
    for(int i = 1; i <= (a+b+1); i++){
        char ch;
        cin >> ch;
        if((i == a+1)&&(ch != '-')){
            flag = false;
        } else if ((i != a+1)&&(ch == '-')){
            flag = false;
        }
    }
    
    if(flag){
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;

}

/*

Sample input 1

3 4
269-6650

Sample output 1

Yes

Sample input 2

1 1
---

Sample output 2

No

Sample input 2

1 2
7444

Sample output 2

No

*/

int main1() {
    
    int a, b, c;
    
    cin >> a;
    cin >> b; 
    cin >> c;
    
    if((a*a)+(b*b) < (c*c)){
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;

}

/*

Sample input 1

2 2 4

Sample output 1

Yes

Sample input 2

10 10 10

Sample output 2

No

Sample input 2

3 4 5

Sample output 2

No

*/