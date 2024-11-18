#include <bits/stdc++.h>
using namespace std;

int main() {

	int a, b;
	
	cin >> a >> b;
	
	cout << a*b;

	return 0;
}

/*

Sample input 1

2 5

Sample output 1

10

Sample input 2

100 100

Sample output 2

10000

*/

int main1() {

	int a, b, c;
	
	cin >> a >> b >> c;
	
	if(a == b){
	    cout << c;
	}else if(a == c){
	    cout << b;
	}else if(b == c){
	    cout << a;
	}else {
	    cout << 0;
	}

	return 0;
}

/*

Sample input 1

2 5 2

Sample output 1

5

Sample input 2

4 5 6

Sample output 2

0

Sample input 3

1 1 1

Sample output 3

1

*/