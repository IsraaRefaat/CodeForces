#include <iostream>
#include "algorithm"
using namespace std;


int main() {


    long n;
    long cub[101];

    cin>>n;

    for(int i=0;i!=n;i++)
        cin>>cub[i];

    sort(cub , cub+n);

    for(int i=0;i!=n;i++)
        cout<<cub[i]<<endl;




    return 0;
}
