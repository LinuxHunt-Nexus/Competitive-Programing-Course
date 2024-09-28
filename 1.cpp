#include<bits/stdc++.h>

using namespace std;

int sum(int n)
{
    int digit_sum=0;
    while (n)
    {
        digit_sum = digit_sum + n%10;
        n=n/10;
        /* code */
    }
    return digit_sum;
}

int main() {
     int a, b;
     cin>>a >> b;
     cout << sum(a) + sum(b);
    
}
