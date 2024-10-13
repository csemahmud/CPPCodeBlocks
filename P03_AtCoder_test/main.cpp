#include <bits/stdc++.h>
using namespace std;

///* Author : KHAN MAHMUDUL HASAN CSE BD JP */

int main() {

    int num_a, num_b;
    cin >> num_a >> num_b;
    cin.ignore();
    string str, ans;
    getline(cin, str);

    string str_pattern = "\\d{" + to_string(num_a) + "}-\\d{" + to_string(num_b) + "}";
    regex regPtrn(str_pattern);

    if (regex_search(str, regPtrn)) {

        ans = "Yes";

    } else {

        ans = "No";
    }

    cout << ans << endl;

    return 0;

}

/*

Sample input 1

3 4
269-6650

Sample output 1

Yes

Sample input 2

1 1
---

Sample output 2

No

Sample input 3

1 2
7444

Sample output 3

No

*/
