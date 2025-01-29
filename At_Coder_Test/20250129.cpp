#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, t, a;
    
    cin >> n >> t >> a;
    
    int x = n - (a + t);
    
    if(t > (a + x)){
        cout << "Yes";
        return 0;
    }else if(a > (t + x)){
        cout << "Yes";
        return 0;
    }
    
    cout << "No";
    
    return 0;
}

/*

Sample input 1

7 4 2

Sample output 1

Yes

Sample input 2

99 12 48

Sample output 2

No

*/