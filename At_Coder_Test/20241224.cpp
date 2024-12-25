#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;
    int lower = 0, upper = 0;
    for(int i = 0; i < str.length(); i++){
        if((str[i] >= 'A')&&(str[i] <= 'Z')){
            upper++; 
        } else if((str[i] >= 'a')&&(str[i] <= 'z')){
            lower++;
        }
    }

    if(upper > lower){
        for(int i = 0; i < str.length(); i++){
          cout << (char)toupper(str[i]);
        }
    } else {
        for(int i = 0; i < str.length(); i++){
          cout << (char)tolower(str[i]);
        }
    }

    return 0;
}

int main1() {

    int n, m;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        if(m >= h){
            m -= h;
        } else {
            cout << i;
            return 0;
        }
    }

    cout << n;
    return 0;
}