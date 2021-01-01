#include <iostream>

using namespace std;

int main()
{
    int n=0, a=0, sum=0;

    for (int i=1; i<=100; i++)
    {
        n=i*i;
        a+=n;
        sum+=i;
    }

    cout<<(sum*sum)-a<<endl;

    return 0;
}
