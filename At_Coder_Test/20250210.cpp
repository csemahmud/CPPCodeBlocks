#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    if(pow(2,n)>(n*n)){
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}

/*

Sample input 1

5

Sample output 1

Yes

Sample input 2

2

Sample output 2

No

Sample input 3

623947744

Sample output 3

Yes

*/

int main1() {
    
    string s;
    
    cin >> s;
    
    cout << s[s.length()-2] << s[s.length()-1];
    
    return 0;
}

/*

Sample input 1

254

Sample output 1

54

Sample input 2

101

Sample output 2

01

*/

int main2() {
    
    int x, y;
    
    cin >> x >> y;
    
    if(x == y){
        cout << x;
    } else if((x == 0)&&(y == 1)){
        cout << 2;
    } else if((x == 0)&&(y == 2)){
        cout << 1;
    } else if((x == 1)&&(y == 0)){
        cout << 2;
    } else if((x == 1)&&(y == 2)){
        cout << 0;
    } else if((x == 2)&&(y == 0)){
        cout << 1;
    } else if((x == 2)&&(y == 1)){
        cout << 0;
    }
     
    return 0;
}

/*

Sample input 1

0 1

Sample output 1

2

Sample input 2

0 0

Sample output 2

0

*/

