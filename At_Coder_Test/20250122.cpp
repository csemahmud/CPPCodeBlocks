#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, counter;
    
    cin >> n;
    
    n*=2;
    
    int a[n];
    
    counter = 0;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if((i >= 2)&&(a[i] == a[i-2])){
            counter++;
        }
    }
        
    cout << counter;

    return 0;
}

/*

Sample input 1

3
1 2 1 3 2 3

Sample output 1

2

Sample input 2

2
1 1 2 2

Sample output 2

0

Sample input 3

4
4 3 2 3 2 1 4 1

Sample output 3

3

*/

int main1() {

    int n, counter = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string str;
        
        cin >> str;
        
        if(str[0] == 'T'){
            counter++;
        }
    }
        
    cout << counter;

    return 0;
}

/*

Sample input 1

3
Aoki
Takahashi
Takahashi

Sample output 1

2

Sample input 2

2
Aoki
Aoki

Sample output 2

0

Sample input 3

20
Aoki
Takahashi
Takahashi
Aoki
Aoki
Aoki
Aoki
Takahashi
Aoki
Aoki
Aoki
Takahashi
Takahashi
Aoki
Takahashi
Aoki
Aoki
Aoki
Aoki
Takahashi

Sample output 3

7

*/