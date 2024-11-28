#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;

    cin >> str;

    cout << str[0] << str.length()-2 << str[str.length()-1];

    return 0;
}

/*

Sample input 1

internationalization

Sample output 1

i18n

Sample input 2

smiles

Sample output 2

s4s

Sample input 3

xyz

Sample output 3

x1z

*/

int main1() {

    int n;

    cin >> n;
    bool flag = true;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a%2 == 0){
            if((a%3!=0)&&(a%5!=0)){
                flag = false;
            }
        }
    }

    if(flag){
        cout << "APPROVED";
    } else {
        cout << "DENIED";
    }

    return 0;
}

/*

Sample input 1

5
6 7 9 10 31

Sample output 1

APPROVED

Sample input 2

3
28 27 24

Sample output 2

DENIED

*/