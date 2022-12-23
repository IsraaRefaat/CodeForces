#include <iostream>
using namespace std;

int main(){

    int n;
    int x;
    int temp=0;
    int num_of_groups=0;
    cin>>n;



    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x!=temp)
            num_of_groups++;
        temp=x;
    }

    cout<<num_of_groups;

    return 0;
}
