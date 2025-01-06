#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  
  cin >> n;
  
    string str;

    cin >> str;

    bool flag = true;

    for(int i = 0; i < n - 1; i++){
        if(str[i] == str[i+1]){
            flag = false;
        }
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

6
MFMFMF

Sample output 1

Yes

Sample input 2

9
FMFMMFMFM

Sample output 2

No

Sample input 3

1
F

Sample output 3

Yes

*/