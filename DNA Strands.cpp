/*******************************************************************************************

Print DNA like pattern using the given input N:
Constraints:4 <= N <= 40

i/p: 4
o/p:
-**
*--*
-**
*--*
-**

i/p: 8
o/p:
---**
--*--*
-*----*
*------*
-*----*
--*--*
---**
--*--*
-*----*
*------*
-*----*
--*--*
---**
--*--*
-*----*
*------*
-*----*
--*--*
---**
--*--*
-*----*
*------*
-*----*
--*--*
---**


**********************************************************************************************************/



#include <bits/stdc++.h>
 
using namespace std;

void DNAstrand(int n) 
{   
    int l = 0; 
    for(int i=(n/2)-1;i>-1;i--) {
        for(int j=0;j<i;j++) {
            cout << "-";
        }
        cout << "*";
        
        for(int j=0;j<l;j++) {
            cout << "-";
        }
        l+=2;
        cout << "*";
        
            cout << endl;
    }
    
    l = l-4;
    for(int i=0;i<(n/2)-2;i++) {
        for(int j=0;j<=i;j++) {
            cout << "-";
        }
        cout << "*";
        
        for(int j=0;j<l;j++){
            cout <<"-";
        }
        l-=2;
        cout << "*";
        cout << endl;
    }
    
}

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    
    int k = n/2;
    while(k--) DNAstrand(n);
    
    
    for(int j=0;j<(n/2)-1;j++) {
        cout << "-";
    }
    cout <<"*";
    cout <<"*";
}
