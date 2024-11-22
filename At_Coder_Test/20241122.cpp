#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;
    double t;

    cin >> a >> b >> t;

    t = t+0.5;

    int sum = 0;

    for(int  i = 0; i < t; i++){
        if((i >= a)&&(i%a == 0)){
            sum += b;
        }
    }

    cout << sum;
    
    return 0;
}

/*

Sample input 1

3 5 7

Sample output 1

10

Sample input 2

3 2 9

Sample output 2

6

Sample input 3

20 20 19

Sample output 3

0

*/

int main1() {

    long long a;
    
    cin >> a;
    
    cout << a + (a*a) + (a*a*a);
    
    return 0;
}

/*

Sample input 1

2

Sample output 1

14

Sample input 2

10

Sample output 2

1110

*/