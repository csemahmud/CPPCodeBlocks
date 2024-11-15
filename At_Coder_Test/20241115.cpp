#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	
	cin >> str;
	
	for(int i = 0; i < str.length(); i++){
	    if(str[i]  == ','){
	        cout << ' ';
	    } else {
	        cout << str[i];
	    }
	}

	return 0;
}

/*

Sample input 1

happy,newyear,enjoy

Sample output 1

happy newyear enjoy

Sample input 2

haiku,atcoder,tasks

Sample output 2

haiku atcoder tasks

Sample input 3

abcde,fghihgf,edcba

Sample output 3

abcde fghihgf edcba

*/

int main1() {

	int a, b;

	cin >> a >> b;

	if((a > 8)||(b > 8)) {
		cout << ":(";
	} else {
		cout << "Yay!";
	}

	return 0;
}

/*

Sample input 1

5 4

Sample output 1

Yay!

Sample input 2

8 8

Sample output 2

Yay!

Sample input 3

11 4

Sample output 3

:(

*/