#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Break The Sequence
    vector <int > vec ={1,2,3,4,5,6,10,8};
    for(int i=0 ; i< vec.size()-1; i++)
    {
        auto initial= vec.begin();
        advance(initial , i);
        int x = i+1;
        if( *initial + 1 != vec[x]){
            cout << i<<")" << *initial << " == " << vec[x]<<"in break"<< endl;
            cout<< vec[x]<<" Sequence Break";
            break;
        }
    }
}