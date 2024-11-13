#include <bits/stdc++.h>
using namespace std;

int main() {
    
    unsigned long long n, maxPC;
    
    cin >> n;
    
    maxPC = 1;
    
    unsigned long long cube = 1;
    
    for(unsigned long long i = 1; (cube = i*i*i) <= n; i++){
        bool flag = true;
        string str = to_string(cube);
        for(unsigned long long j = 0; j <= (str.length()/2); j++){
            if(str[j] != str[str.length()-1-j]){
                flag = false;
                break;
            }
        }
        if(flag){
            maxPC = cube;
        }
    }
    
    cout << maxPC;

    return 0;
}

/*

Sample input 1

345

Sample output 1

343

Sample input 2

6

Sample output 2

1

Sample input 3

123456789012345

Sample output 3

1334996994331

*/

int main2() {
    
    int n;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int a;
            cin >> a;
            if(a == 1){
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*

Sample input 1

4
0 1 1 0
1 0 0 1
1 0 0 0
0 1 0 0

Sample output 1

2 3
1 4
1
2

Sample input 2

2
0 0
0 0

Sample output 2



Sample input 3

5
0 1 0 1 1
1 0 0 1 0
0 0 0 0 1
1 1 0 0 1
1 0 1 1 0

Sample output 3

2 4 5
1 4
5
1 2 5
1 3 4

*/

int main1() {
    
    int a;
    int b;
    
    cin >> a >> b;
    
    for(int i = 0; i < 10; i++){
        if(i != (a+b)){
            cout << i;
            return 0;
        }
    }

    return 0;
}

/*

Sample input 1

2 5

Sample output 1

2

Sample input 2

0 0

Sample output 2

9

Sample input 3

7 1

Sample output 3

4

*/