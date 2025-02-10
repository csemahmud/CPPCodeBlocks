#include <bits/stdc++.h>
using namespace std;

int main() {
    
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

int main1() {
    
    int x, y;
    
    cin >> x >> y;
    
    cout << x*y;
     
    return 0;
}

/*

Sample input 1

2 5

Sample output 1

10

Sample input 2

100 100

Sample output 2

10000

*/

int main2() {
    
    int n, a, b;
    
    cin >> n >> a >> b;
    
    cout << n - a + b;
     
    return 0;
}

/*

Sample input 1

100 1 2

Sample output 1

101

Sample input 2

100 2 1

Sample output 2

99

Sample input 3

100 1 1

Sample output 3

100

*/

