#include <iostream>
using namespace std;
int main() {
  cin>>n>>h;
   int p;
   while(n-->=1){
       cin>>p;
       if(p <=h)
           count++;
       else
           count=count+2;
   }
 
   cout<<count;
 
    return 0;
}
