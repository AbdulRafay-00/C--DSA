#include <bits/stdc++.h>
using namespace std;
// syntax of 2D list and how to print
int main() {
    list<list<int>> numbers = {{1, 2, 3}, {4, 5, 6}};
    // numbers.pop_back();           // it remove the whole list from last index
    // numbers.back().pop_back();    // remove the last element from last list
    // numbers.push_front({1});         // add a new list in front on 0 index  
   numbers.begin()->push_front(23);
    // numo.push_front(9); 

    for (auto innerList : numbers) {       // iterate over each inner list
        for (auto val : innerList) {       // iterate over each element of inner list
            cout << val << " ";
        }
        cout << endl; // new line after each inner list
    }
}
