#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, q;
    cin >> n;
    bool teeth[n];
    for(int i = 0; i < n; i++){
        teeth[i] = false;
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        int num;
        cin >> num;
        
        teeth[num-1] = !teeth[num-1];
        
        if(teeth[num-1]){
            n--;
        } else {
            n++;
        }
    }
        
    cout << n;
    
    return 0;

}

/*

Sample input 1

30 6
2 9 18 27 18 9

Sample output 1

28

Sample input 2

1 7
1 1 1 1 1 1 1

Sample output 2

0

Sample input 3

9 20
9 5 1 2 2 2 8 9 2 1 6 2 6 5 8 7 8 5 9 8

Sample output 3

5

*/

int main1() {
    
    string s;
    cin >> s;
    
    int i, j, k;
    
    for(int x = 0; x < 6; x++){
        if(x == 3){
            i = (int)s[x] - 48;
        } else if(x == 4){
            j = (int)s[x] - 48;
        } else if(x == 5){
            k = (int)s[x] - 48;
        }
    }
    
    if(((i*100) + (j*10) + k) >= 350){
        cout << "No";
    } else if((i*100) + (j*10 + k) == 316) { 
        cout << "No";
    } else if((i*100) + (j*10 + k) == 0) {
        cout << "No";
    } 
    else {
        cout << "Yes";
    }
    
    return 0;

}

/*

Sample input 1

ABC349

Sample output 1

Yes

Sample input 2

ABC350

Sample output 2

No

Sample input 3

ABC316

Sample output 3

No

Sample input 4

ABC000

Sample output 4

No

*/