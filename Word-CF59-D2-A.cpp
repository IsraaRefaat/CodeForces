#include "iostream"
#include "algorithm"
using namespace std;

int main(){

    string word;
    cin>>word;

    //our code will depend on the ASCII
    int low=0;
    int up=0;

    for(int i=0; i<word.size();i++)
    {
        if(word[i]>=65 && word[i]<=90)
            up++;
        else
            low++;
    }

    if(low>up) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout << word;
    }
    else if (up>low)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        cout<<word;
    }
    else
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout << word;
    }
    return 0;
}
