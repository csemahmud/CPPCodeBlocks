#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map<string, int> colorMap;
	string color;
	
	int n;
	
	cin >> n;
	
	for(auto it = 0; it < n; it++) {
		
		cin >> color;
		colorMap[color]++;
		
	}
	
	for(auto it = colorMap.cbegin(); it != colorMap.cend(); it++) {
		
		cout << it->first << " " << it->second  << "\n";
		
	}
    
    return 0;

}

/*

Sample input 1

3
red
black
red

Sample output 1

black 1
red 2

*/