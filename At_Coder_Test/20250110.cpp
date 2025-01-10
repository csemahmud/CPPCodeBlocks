#include <bits/stdc++.h>
using namespace std;

int main() {

    string str1, str2, str3;

    cin >> str1;
    cin >> str2;

    str3 = str1;

    for(int x = 0; x < str1.length(); x++){
      
      str3[0] = str1[str1.length() - 1];
  
      for(int i = 0; i < str1.length() - 1; i++){
          str3[i+1] = str1[i];
      }
  
      if(str3 == str2){
          cout << "Yes";
          return 0;
      }
      
      str1 = str3;

    }

    cout << "No";
    
    return 0;
   
}

/*

Sample input 1

kyoto
tokyo

Sample output 1

Yes

Sample input 2

abc
arc

Sample output 2

No

Sample input 3

aaaaaaaaaaaaaaab
aaaaaaaaaaaaaaab

Sample output 3

Yes


*/