#include<bits/stdc++.h>

using namespace std;

const int N=1e3+1;
int a[N][N];

void func()
{
    a[0][0]=5;
}
int main() {
     a[0][0]= 7;
     cout << a [0][0] << endl;
     func();
     cout << a [0][0] << endl;
}
