#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int num_n, num_d;
    cin>>num_n>>num_d;
    int rng = 2 * num_d + 1;
    if (num_n % rng == 0) {
        
        cout << (num_n / rng);
        
    } else {
        
        cout << (num_n / rng + 1);
        
    }
    
    return 0;
}

/*

Sample input 1

6 2

Sample output 1

2

Sample input 2

14 3

Sample output 2

2

Sample input 3

20 4

Sample output 3

3

*/