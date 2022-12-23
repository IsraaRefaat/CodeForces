#include <iostream>
using namespace std;

int  main()
{
    int n;
    cin>>n;
    int out=0;
    int sum=0;

    for(int i=0; i<n; i++)
    {
       int x;
       cin>>x;
       if(sum+x<0)
           out++;
       else
           sum+=x;
    }

    cout<<out;

    return 0;
}
