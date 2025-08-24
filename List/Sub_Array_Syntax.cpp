#include <iostream>

#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5};
    // all possible sub array of array
    for (int start=0 ; start<vec.size(); start++){
        for(int end = start ; end< vec.size() ; end++){
            for (int k = start; k <= end; k++)
            {
                cout << vec[k];
            }
            cout << " ";
        }
        cout << endl;

    }
}