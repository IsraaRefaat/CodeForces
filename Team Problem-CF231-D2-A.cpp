#include <iostream>
using namespace std;


int main() {

int n , x , count , sum=0;

cin>>n;

for(int i=0; i<n; i++)
{
    count=0;

    for(int j=0; j<3; j++)
    {
        cin>>x;

        if(x)
            count++;
    }
    if(count>=2)
        sum++;

}

cout<<sum;
    return 0;
}
