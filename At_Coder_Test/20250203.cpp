#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x, y, n;
    
    cin >> x >> y >> n;
    
    if(x >= y/3){
        
        int count3 = n/3;
        int count = n - 3*count3;
        
        cout << count3 * y + count * x;
    } else {
        cout << n*x;
    }
    
    return 0;
}

/*

Sample input 1

10 25 10

Sample output 1

85

Sample input 2

10 40 10

Sample output 2

100

Sample input 3

100 100 2

Sample output 3

200

*/

int main1() {
    
    int n, h;
    
    int x = 0, max = 0;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        
        int h;
        cin >> h;
        
        if(max < h){
            max = h;
            x = i;
        }
    }
    
    cout << x;
    
    return 0;
}

/*

Sample input 1

3
50 80 70

Sample output 1

2

Sample input 2

1
1000000000

Sample output 2

1

Sample input 3

10
22 75 26 45 72 81 47 29 97 2

Sample output 3

9

*/