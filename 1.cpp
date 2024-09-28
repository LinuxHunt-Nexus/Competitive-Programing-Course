#include<bits/stdc++.h>

using namespace std;

void increament(int n, int &n1)
{
    n++;
    n1++;
}

int main() {
     int a=2;
     int b=3;
     cout << a <<" " << b << endl;
     increament(a,b);
     cout << a <<" " << b << endl;
}
