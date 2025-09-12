#include<iostream>
#include<vector>
using namespace std;

void sub_set_func (vector <int>& vec1, vector <int>& ans, int i ){
    // cout<< i <<endl;
    if (i == vec1.size())
    {
    // cout << "in func";
    // for(int i : ans ){
    //     // cout << i ;
    // }
    cout << endl;
    return;
}
ans.push_back(vec1[i]);
// For tracking the elements
// cout<< "on push func" << i << endl;
// cout << "{";
//     for(int i : ans ){
//         cout << i ;
//     }
//     cout << "}";
//     cout << endl;
sub_set_func(vec1, ans, i+1);
ans.pop_back();
// for tracking 
// cout<< "on pop func " << i << endl;
//     cout << "{";
//     for(int i : ans ){
//         cout << i ;
//     }
//     cout << "}";
//     cout << endl;
sub_set_func(vec1, ans, i+1);

}

int main(){
    vector <int> vec1 = {1,2,3};
    vector <int> ans = {};
    int i = 0;
    sub_set_func(vec1, ans, i);
 }