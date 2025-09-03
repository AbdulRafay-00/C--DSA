#include <iostream>
#include <unordered_map>
#include <vector>
using  namespace std;
int main(){
    vector <int> vec = {3,6,9,8,1};
    int target =12;
    unordered_map <int, int> pai ={};
    for(int i = 0 ; i < vec.size(); i++ ){
        int var =  target - vec[i];
        cout << var<< endl;
        if(pai.find(var) != pai.end()){
            // cout << "is present" << endl;
            cout << "Pair found: " << vec[i] << " + " << var
            << " = " << target << endl;
            cout << "Indices: " << pai[var] << " , " << i << endl;
            
        } 
        pai[vec[i]]= i;
    }
}
 /*sudo output
 first var = 9;
 add 3 in map
 sectond var = 6 ;
 add 6 in map;
 third var = 3;
 found three in map
