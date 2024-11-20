#include <bits/stdc++.h>
using namespace std;

int main() {

    long long x;
    
    cin >> x;
    
    if(x%10 == 0){
        cout << x/10;
    } else if(x < 0) {
        cout << x/10;
    } else {
        cout << (x/10) + 1;
    }
    
    return 0;
}

/*

Sample input 1

27

Sample output 1

3

Sample input 2

-13

Sample output 2

-1

Sample input 3

40

Sample output 3

4

Sample input 4

-20

Sample output 4

-2

Sample input 5

123456789123456789

Sample output 5

12345678912345679

*/

int main1() {

    string str;
    
    bool flag = true;
    
    cin >> str;
    if(str[0] != '<'){
        flag = false;
    }
    for(int i = 1; i < str.length() - 1; i++){
        if(str[i] != '='){
            flag = false;
        }
    }
    if(str[str.length() - 1] != '>'){
        flag = false;
    }
    
    if(flag){
        cout <<  "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}

/*

Sample input 1

<====>

Sample output 1

Yes

Sample input 2

==>

Sample output 2

No

Sample input 3

<>>

Sample output 3

No

*/