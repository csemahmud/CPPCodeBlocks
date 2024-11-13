#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c, d;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int left = a+b;
    int right = c+d;
    
    if(left==right){
        cout << "Balanced";
    } else if(left > right) {
        cout << "Left";
    } else {
        cout << "Right";
    }

    return 0;
}

/*

Sample input 1

3 8 7 1

Sample output 1

Left

Sample input 2

3 4 5 2

Sample output 2

Balanced

Sample input 3

1 7 6 4

Sample output 3

Right

*/


int main1() {
    
    int a, b;
    
    cin >> a;
    cin >> b;
    
    int sum = 0;
    
    if(a>b){
        sum = a;
        a--;
    } else {
        sum = b;
        b--;
    }
    
    if(a>b){
        sum += a;
    } else {
        sum += b;
    }
    
    cout << sum;

    return 0;
}

/*

Sample input 1

5 3

Sample output 1

9

Sample input 2

3 4

Sample output 2

7

Sample input 3

6 6

Sample output 3

12

*/