#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n%10;
    
    n += (b * 100 + c * 10 + a);
    n += (c * 100 + a * 10 + b);
    
    cout << n;
     
    return 0;
}

/*

Sample input 1

123

Sample output 1

666

Sample input 2

999

Sample output 2

2997

*/

int main1() {
    
    int n;
    
    cin >> n;
    
    int x = 0;
    
    if(n%100 > 0){
        x = 1;
    }
    
    cout << n/100 + x ;
    
    return 0;
}

/*

Sample input 1

2021

Sample output 1

21

Sample input 2

200

Sample output 2

2

*/

int main2() {
    
    int n;
    
    cin >> n;
    
    if(n < 126){
        cout << 4;
    } else if(n < 212){
        cout << 6;
    } else {
        cout << 8;
    }
    
    return 0;
}

/*

Sample input 1

214

Sample output 1

8

Sample input 2

1

Sample output 2

4

Sample input 3

126

Sample output 3

6

*/