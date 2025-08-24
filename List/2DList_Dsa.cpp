#include <bits/stdc++.h>
using namespace std;
// syntax of 2D list and how to print
int main() {
    list<list<int>> numbers [2][3] = {{1, 2, 3}, {4, 5, 6}};
    // How to print the list
    // for (auto innerList : numbers) {       // iterate over each inner list
    //     for (auto val : innerList) {       // iterate over each element of inner list
    //         cout << val << " ";
    //     }
    //     cout << endl; // new line after each inner list
    // }

    // Sum all the elements of list
   int sum1;
   int j=0;
    for(auto innerlist : numbers){
        for( auto extandList : innerlist){
            auto itj = innerlist.begin();
            advance(itj , j);
            cout << *itj << endl;
            sum1 = sum1 + *itj;
            j++;
        }
        j=0;
    }
    cout << "over all sum of list" << sum1;
}
