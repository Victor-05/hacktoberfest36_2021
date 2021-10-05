#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int n,i,ok;
    ok=0;
    cin>>n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            ok=1;
            i=sqrt(n);
        }
    }
    if(n==0 || n==1)
        ok=1;
    if(ok==0)
        cout<<"Number "<<n<<" is prime";
        else
        cout<<"Number "<<n<<" is not prime";
    return 0;
}
