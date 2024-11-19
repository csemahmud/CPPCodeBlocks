#include <bits/stdc++.h>
using namespace std;

int main() {

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
        char ch;
        cin >> ch;
        
			if(i == j){
				cout << ch;
			}
		}
    }
    
    return 0;
}

/*

Sample input 1

ant
obe
rec

Sample output 1

abc

Sample input 2

edu
cat
ion

Sample output 2

ean

*/

int main1() {

    int decimal_input;
    string hex_representation = "";

    cin >> decimal_input;

    if (decimal_input == 0) {
        hex_representation = "0";
    } else {
        int remainder;
        char hex_characters[] = {'0', '1', '2', '3', '4', '5', '6', '7', 
                                 '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

        while (decimal_input > 0) {
            remainder = decimal_input % 16;
            hex_representation = hex_characters[remainder] + hex_representation;
            decimal_input /= 16;
        }
    }
    
    if(hex_representation.length() < 2){
        hex_representation = "0" + hex_representation;
    }
        
    
    cout <<  hex_representation << endl;

    return 0;
}

/*

Sample input 1

99

Sample output 1

63

Sample input 2

12

Sample output 2

0C

Sample input 3

0

Sample output 3

00

Sample input 3

255

Sample output 3

FF


*/