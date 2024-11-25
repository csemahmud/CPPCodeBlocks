#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map<string, int> map;
	string str;
	
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		
		cin >> str;
		map[str]++;
		
	}

    cout << "AC x " << map["AC"] << endl;
    cout << "WA x " << map["WA"] << endl;
    cout << "TLE x " << map["TLE"] << endl;
    cout << "RE x " << map["RE"] << endl;
    
    return 0;

}

/*

Sample input 1

6
AC
TLE
AC
AC
WA
TLE

Sample output 1

AC x 3
WA x 1
TLE x 2
RE x 0

Sample input 2

10
AC
AC
AC
AC
AC
AC
AC
AC
AC
AC

Sample output 2

AC x 10
WA x 0
TLE x 0
RE x 0

*/

int main1() {

    string str;

    for(int i = 0; i < 3; i++){
        cin >> str[i];
    }

    bool flag = true;
    for(int i = 0; i < 3; i++){
        char ch;
        cin >> ch;
        if(ch != str[2 - i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}

/*

Sample input 1

pot
top

Sample output 1

YES

Sample input 2

tab
bet

Sample output 2

NO

Sample input 3

eye
eel

Sample output 3

NO

*/