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

     list<int> numbers = {2, 4, 6, 8,  2, 10, 2};
    for (int i = 0; i < numbers.size(); i++)
    {
        
        auto iti = numbers.begin();
        advance(iti, i);
        // cout << *iti<<" i, ";
        // cout << endl;
        for (int j = i + 1; j < numbers.size();)
        {
            auto itj = numbers.begin();
            advance(itj, j);
            // cout << "," << *itj << endl;
            if (*iti == *itj)
            {
                // cout << " erase was" << *itj << endl;
             itj = numbers.erase(itj);
            }
            else{
                j++;
            }
    }
}
    for(int i : numbers){
        cout << i <<",";
    }



}