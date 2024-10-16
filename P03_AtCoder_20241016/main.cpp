#include <bits/stdc++.h>
using namespace std;

///* Author : KHAN MAHMUDUL HASAN CSE BD JP */

int main() {
    int w, b;
    cin >> w;
    cin >> b;
    int length = w + b;

    string s = "wbwbwwbwbwbw";

    while (s.length() < length + 15) {
        s += s;
    }

    for (int i = 0; i <= s.length() - length; i++) {

        int count_w = 0;
        int count_b = 0;

        string sub = s.substr(i, length);
        for (int j = 0; j < sub.length(); j++) {

            if (sub[j] == 'w') {

                count_w++;

            } else {

                count_b++;

            }
        }
        if (count_w == w && count_b == b) {

            cout << "Yes" << endl;
            return 0;

        }
    }
    cout << "No" << endl;
    return 0;
}

/*

Sample input 1

3 2

Sample output 1

Yes

Sample input 2

3 0

Sample output 2

No

Sample input 3

92 66

Sample output 3

Yes

*/

int main1()
{
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    for(int i = 1; i < n; i++){
        int next;
        cin >> next;
        cout << (prev*next);
        if(i < (n-1)){
            cout << " ";
        }
        prev = next;
    }
    return 0;
}

/*

Sample input 1

3
3 4 6

Sample output 1

12 24

Sample input 2

5
22 75 26 45 72

Sample output 2

1650 1950 1170 3240

*/

