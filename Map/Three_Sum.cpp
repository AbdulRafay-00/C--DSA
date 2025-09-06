#include<iostream>
#include <vector>
#include<map>
using namespace std;

int main(){
    vector<int> vec = { 2,3,2,7,8,2};
    int target = 17;
    bool check = true;
    multimap <int, int> m ={};
    for(int i  = 0 ; i < vec.size(); i++){

        for (int j = i+1; j < vec.size() ; j++)
        {
            int two_sum = vec[i] + vec[j];
            int fina = target -two_sum;
            // cout << vec[j]<<endl ;
            if(m.find(fina) != m.end() ){
                cout<< "sum equal to targe are: "<<endl;
                cout<< vec[i] << "+" << vec[j]<< "+"<< fina;
                check = false;
            }
        }
        m.insert({vec[i], i });
        if (!check) break;
    
        
    }
    
}