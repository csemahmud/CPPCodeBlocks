#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    int counter = 0;
    
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if((i % 2 != 0)&&(a % 2 != 0)){
            counter++;
        }
    }
    
    cout << counter;
    
    return 0;

}

/*

Sample input 1

5
1 3 4 5 7

Sample output 1

2

Sample input 2

15
13 76 46 15 50 98 93 77 31 43 84 90 6 24 14

Sample output 2

3

*/

int main1() {
    
    int a, b, c; 
    cin >> a >> b >> c;
    
    cout << c << " " << a << " " << b;
    
    return 0;

}

/*

Sample input 1

1 2 3

Sample output 1

3 1 2

Sample input 2

100 100 100

Sample output 2

100 100 100

Sample input 3

41 59 31

Sample output 3

31 41 59

*/