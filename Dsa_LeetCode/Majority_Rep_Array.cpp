#include <iostream>
#include<vector>
using  namespace std;
void repeted_ele(vector<int> vec);
int main (){
    vector <int> vec = {7,2,3,4,7,2,7,2,2,1};
    repeted_ele(vec);
    
    
    
}

void repeted_ele(vector<int> vec){
    int rep_ele = 0;
   int Max_rep= 0;
   int ans;
    for(int i=0 ; i< vec.size();i++){
        rep_ele ++;
        for(int j=i+1 ; j < vec.size(); j++){
            if(vec[i] == vec[j]){
                rep_ele++;
            }
        }
        Max_rep = max(rep_ele , Max_rep);
        if(Max_rep == rep_ele){
            ans =vec[i];

        }
        rep_ele=0;

    }
    cout << "Maximum Repeat Element:"<< ans<<endl;
    cout << "Repetes: "<< Max_rep<<" times";

} 