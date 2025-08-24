#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ADDING AN INTEGER ON EVERY INDEX OF LIST

    // for(int i = 0; i < numbers.size(); i++ ){
    //     auto it =numbers.begin();
    // advance(it, i);
    // *it = *it + 2;
    //     cout << *it<< ",";
    // }

    // REMOVING DUPLICATES;
    bool check;
     list<int> numbers = {1, 2, 3 ,4, 1, 2,2,2,2,1};
    for (int i = 0; i < numbers.size(); )
    {
        auto iti = numbers.begin();
        advance(iti, i);
        check = false;
        for (int j = i + 1; j < numbers.size();)
        {
            auto itj = numbers.begin();
            advance(itj, j);
            if (*iti == *itj)
            {
                 check = true;
            numbers.erase(itj);
    
        }
        else{
            j++;
        }
    }
    if(check){
        numbers.erase(iti);
    }else{
        i++;
        }
}
    for(int i : numbers){
        cout << i <<",";
    }



}