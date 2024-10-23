// C++ Program to print all permutations 
// of a string in sorted order. 
#include <bits/stdc++.h> 
using namespace std; 

int compareCharAB (const void *a, const void * b)  { 
    
    return ( *(char *)a - *(char *)b ); 
    
} 

void swapCharAB (char* a, char* b) { 
    
	char tmp = *a; 
	*a = *b; 
	*b = tmp;
	
} 

int findCeilValue (char str[], char first, int l, int h) { 
    
	int ceilIndex = l; 

	for (int i = l+1; i <= h; i++) {
	    
    	if (str[i] > first && str[i] < str[ceilIndex]) { 
    			ceilIndex = i; 
    	}
    	
	}

	return ceilIndex; 
	
} 

void viewKthPermutation ( char str[], unsigned long long k ) {
    
	int size = strlen(str); 

	qsort( str, size, sizeof( str[0] ), compareCharAB ); 

	bool isFinished = false; 
	unsigned long long counter = 1;
	while ( ! isFinished ) { 
	    if(counter == k){
    		cout << str << endl;
    		isFinished = true;
    		break;
	    } else {
	        counter++;
	    }

		int i; 
		for ( i = size - 2; i >= 0; i-- ) 
		if (str[i] < str[i+1]) 
			break; 

		if ( i == -1 ) {
			isFinished = true;
		} else { 
			int ceilIndex = findCeilValue( str, str[i], i + 1, size - 1 ); 

			swapCharAB( &str[i], &str[ceilIndex] ); 

			qsort( str + i + 1, size - i - 1, sizeof(str[0]), compareCharAB ); 
		} 
	} 
	
} 

int main() {
    
	char str[10];
	cin >> str;
	unsigned long long k;
	cin >> k;
	viewKthPermutation( str, k ); 
	return 0;
	
} 


 
/* Following function is needed for library function qsort(). Refer 
http://www.cplusplus.com/reference/clibrary/cstdlib/qsort/ */
int compare (const void *a, const void * b) 
{ return ( *(char *)a - *(char *)b ); } 
 
// A utility function two swap two characters a and b 
void swap (char* a, char* b) 
{ 
    char t = *a; 
    *a = *b; 
    *b = t; 
} 
 
// This function finds the index of the smallest character 
// which is greater than 'first' and is present in str[l..h] 
int findCeil (char str[], char first, int l, int h) 
{ 
    // initialize index of ceiling element 
    int ceilIndex = l; 
 
    // Now iterate through rest of the elements and find 
    // the smallest character greater than 'first' 
    for (int i = l+1; i <= h; i++) 
    if (str[i] > first && str[i] < str[ceilIndex]) 
            ceilIndex = i; 
 
    return ceilIndex; 
} 
 
// Print all permutations of str in sorted order 
void sortedPermutations ( char str[] ) 
{ 
    // Get size of string 
    int size = strlen(str); 
 
    // Sort the string in increasing order 
    qsort( str, size, sizeof( str[0] ), compare ); 
 
    // Print permutations one by one 
    bool isFinished = false; 
    while ( ! isFinished ) 
    { 
        // print this permutation 
        cout << str << endl; 
 
        // Find the rightmost character which is 
        // smaller than its next character. 
        // Let us call it 'first char' 
        int i; 
        for ( i = size - 2; i >= 0; --i ) 
        if (str[i] < str[i+1]) 
            break; 
 
        // If there is no such character, all are 
        // sorted in decreasing order, means we 
        // just printed the last permutation and we are done. 
        if ( i == -1 ) 
            isFinished = true; 
        else
        { 
            // Find the ceil of 'first char' in 
            // right of first character. 
            // Ceil of a character is the smallest 
            // character greater than it 
            int ceilIndex = findCeil( str, str[i], i + 1, size - 1 ); 
 
            // Swap first and second characters 
            swap( &str[i], &str[ceilIndex] ); 
 
            // Sort the string on right of 'first char' 
            qsort( str + i + 1, size - i - 1, sizeof(str[0]), compare ); 
        } 
    } 
} 
 
// Driver program to test above function 
int main3A() 
{ 
    char str[] = "ABCD"; 
    sortedPermutations( str ); 
    return 0; 
} 

/*

Sample input 1

aab 2

Sample output 1

aba

Sample input 2

baba 4

Sample output 2

baab

Sample input 3

ydxwacbz 40320

Sample output 3

zyxwdcba

*/

int main2() {
    
    unsigned long long num, n, k;
    
    cin >> n;
    k = 0;
    num = 2;
    
    while(num <= n){
        num*=2;
        k++;
    }
    
    cout << k;
    
    return 0;
}

/*

Sample input 1

6

Sample output 1

2

Sample input 2

1

Sample output 2

0

Sample input 3

1000000000000000000

Sample output 3

59

*/

int main1() {
    
    string str1 = "Hello,World!";
    string str2;
    getline(cin, str2);

    bool flag = true;
    if(str1.length() != str2.length()){
        flag = false;
    } else {
        for(int i = 0; i < str1.length(); i++){
            if(str1[i] != str2[i]){
                flag = false;
                break;
            }
        }
    }
    
    if(flag){
        cout << "AC";
    } else {
        cout << "WA";
    }
    
    return 0;
}

/*

Sample input 1

Hello,World!

Sample output 1

AC

Sample input 2

Hello,world!

Sample output 2

WA

Sample input 3

Hello!World!

Sample output 3

WA

*/