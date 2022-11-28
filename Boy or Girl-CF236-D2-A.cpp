#include <bits/stdc++.h>
using namespace std;

// Program to count the number of
// unique characters in a string
int cntDistinct(string str)
{
    // Set to store unique characters
    // in the given string
    unordered_set<char> s;  /* The Unordered_set allows only unique keys, for duplicate keys unordered_multiset should be used.*/

    // Loop to traverse the string
    for (int i = 0; i < str.size(); i++) {

        // Insert current character
        // into the set
        s.insert(str[i]);
    }

    // Return Answer
    return s.size();
}

// Driver Code
int main()
{
    string str;
    cin>>str;
    int numOfD= cntDistinct(str);

    if(numOfD%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
