#include <iostream>
#include "cmath"
#include "algorithm"
#include "string"
using namespace std;
 
 
int main() {
 
string a;
string b;
 
cin>>a>>b;
 
 
    transform(b.begin(),b.end(),b.begin(), ::tolower);
 
    transform(a.begin(), a.end(), a.begin(), ::tolower);
 
    int x = a.compare(b);
 
   cout<<x;
 
 
    return 0;
}
