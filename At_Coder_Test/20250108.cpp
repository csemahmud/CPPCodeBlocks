#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a%k == 0){
            cout << (a/k) << " ";
        }
    }
    
    return 0;
   
}

/*

Sample input 1

5 2
2 5 6 7 10

Sample output 1

1 3 5

Sample input 2

3 1
3 4 7

Sample output 2

3 4 7

Sample input 3

5 10
50 51 54 60 65

Sample output 3

5 6

*/

int main1() {
   string aa;
   cin >> aa;
   aa += "$";
   int bb = aa.size(), cc = 256;
   vector<int> dd(bb), ee(bb), ff(bb), gg(bb), hh(bb);
   for (int i = 0; i < bb; i++) ff[i] = aa[i], hh[i] = i;
   for (int j = 1; j < bb; j <<= 1) {
       auto ii = [&](int kk) { return pair(ff[kk], kk + j < bb ? ff[kk + j] : -1); };
       sort(hh.begin(), hh.end(), [&](int kk, int ll) { return ii(kk) < ii(ll); });
       for (int kk = 0; kk < bb - 1; kk++) gg[kk + 1] = gg[kk] + (ii(hh[kk]) != ii(hh[kk + 1]));
       for (int kk = 0; kk < bb; kk++) ff[hh[kk]] = gg[kk];
   }
   vector<int> jj(bb), kk(bb);
   for (int ll = 0; ll < bb; ll++) jj[hh[ll]] = ll;
   int mm = 0;
   for (int nn = 0; nn < bb; nn++) {
       if (jj[nn] > 0) {
           int oo = hh[jj[nn] - 1];
           while (aa[nn + mm] == aa[oo + mm]) mm++;
           kk[jj[nn]] = mm;
           if (mm > 0) mm--;
       }
   }
   int pp = 0;
   for (int qq = 1; qq < bb; qq++) {
       int rr = bb - hh[qq] - 1;
       pp += rr - kk[qq];
   }
   cout << pp;
   return 0;
}

/*

Sample input 1

yay

Sample output 1

5

Sample input 2

aababc

Sample output 2

17

Sample input 3

abracadabra

Sample output 3

54

*/