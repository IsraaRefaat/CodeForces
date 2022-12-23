#include <iostream>
#include "deque"
using namespace std;
int main() {
    int cards_num;
    deque<int>nums_of_cards;

    cin>>cards_num;

    int S_points=0;
    int D_points=0;

    for(int i=0;i<cards_num;i++)
    {
        int x;
        cin>>x;
        nums_of_cards.push_back(x);
    }

    bool flag= true;

    for(int i=0;i<cards_num;i++)
    {
        if(nums_of_cards[0]>nums_of_cards[nums_of_cards.size()-1])
        {
            if (flag)
                S_points+=nums_of_cards[0];
            else
                D_points+=nums_of_cards[0];
            nums_of_cards.pop_front();
        }
        else
        {
            if (flag)
                S_points+=nums_of_cards[nums_of_cards.size()-1];
            else
                D_points+=nums_of_cards[nums_of_cards.size()-1];

            nums_of_cards.pop_back();
        }

        if(flag)
            flag= false;
        else
            flag= true;
    }

    cout<<S_points<<" "<<D_points;

    return 0;
}
