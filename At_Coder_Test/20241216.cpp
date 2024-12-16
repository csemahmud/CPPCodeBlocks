#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    string str;
    cin >> str;
    char ch = str[str.length() - 1];
    bool flag = true;
    map<string, int> aMap;
    aMap[str]++;

    for(int i = 1; (i < n)&&flag; i++){
        cin >> str;
        if(str[0] != ch){
            flag = false;
            break;
        }
        aMap[str]++;
        if(aMap[str] > 1){
            flag = false;
            break;
        }
        ch = str[str.length() - 1];
    }

    if(flag){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}

/*

Sample input 1

4
hoge
english
hoge
enigma

Sample output 1

No

Sample input 2

9
basic
c
cpp
php
python
nadesico
ocaml
lua
assembly

Sample output 2

Yes

Sample input 3

8
a
aa
aaa
aaaa
aaaaa
aaaaaa
aaa
aaaaaaa

Sample output 3

No

Sample input 4

3
abc
arc
agc

Sample output 4

No

*/