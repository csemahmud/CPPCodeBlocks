#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long a, b, c, k, counter, sum;
    
    cin >> a >> b >> c >> k;
    
    counter = 0;
    sum = 0;
    
    for(long long i = 0; (i < a)&&(counter < k); i++){
        sum++;
        counter++;
    }
    
    for(long long i = 0; (i < b)&&(counter < k); i++){
        counter++;
    }
    
    for(long long i = 0; (i < c)&&(counter < k); i++){
        sum--;
        counter++;
    }
    
    cout << sum;

    return 0;
}

/*

Sample input 1

2 1 1 3

Sample output 1

2

Sample input 2

1 2 3 4

Sample output 2

0

Sample input 3

2000000000 0 0 2000000000

Sample output 3

2000000000

*/

int main1() {
    
    long long n, sum;
    
    cin >> n >> sum;
    
    for(long long i = 0; i < n; i++){
        char ch;
        cin >> ch;
        if(ch == 'o'){
            sum++;
        } else if(sum > 0){
            sum--;
        }
    }
    
    cout << sum;

    return 0;
}

/*

Sample input 1

3 0
xox

Sample output 1

0

Sample input 2

20 199999
oooooooooxoooooooooo

Sample output 2

200017

Sample input 3

20 10
xxxxxxxxxxxxxxxxxxxx

Sample output 3

0

*/