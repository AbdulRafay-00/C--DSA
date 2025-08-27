#include <iostream>
#include <vector>
using namespace std;
 void merg_Function(vector<int>& ve , vector <int>& vec2){
    int n = ve.size();
    ve.erase(ve.end()-3 , ve.end());
    cout << "befor change"<< endl;
    for(int i : ve){
        cout<< i;

    }
    cout <<endl;
     for(int i = 0; i < vec2.size(); i++){
         ve.push_back(vec2[i]);
         n--;
         
        }
        cout << "after change"<< endl;
        for(int i : ve){
            cout<< i;

        }

 }

int main(){
    vector <int> vec = {1,2,3,0,0,0};
    vector <int> vec2 = {2,4,5};
    merg_Function(vec , vec2);
}