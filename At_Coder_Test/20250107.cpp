#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  
   string a;
   cin >> a;
   string b = "ZONe";
   int c = 0;
   
   for (int d = 0; d <= (a.size() - b.size()); d++) {
     
       if (a.substr(d, b.size()) == b) {
         
           c++;
           
       }
       
   }
   
   cout << c << endl;
   return 0;
   
}

/*

Sample input 1

abcdZONefghi

Sample output 1

1

Sample input 2

ZONeZONeZONe

Sample output 2

3

Sample input 3

helloAtZoner

Sample output 3

0

*/