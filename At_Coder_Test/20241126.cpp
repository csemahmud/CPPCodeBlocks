#include <bits/stdc++.h>
using namespace std;

int main() {
  
  bool five1 = false;
  bool five2 = false;
  bool seven = false;
  
  int n;
  
  for(int i = 0; i < 3; i++){
    cin >> n;
    if(n == 5&&!five1){
      five1 = true;
    } else if(n == 5&&five1){
      five2 = true;
    } else if(n == 7){
      seven = true;
    }
  }
  
  if(five1&&five2&&seven){
    cout << "YES";
  } else {
    cout << "NO";
  }
    
    return 0;

}

/*

Sample input 1

5 5 7

Sample output 1

YES

Sample input 2

7 7 5

Sample output 2

NO

*/