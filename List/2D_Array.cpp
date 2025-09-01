#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <vector<int>> vec = {{11,2,3},{4,5,6},{7,8,9}};
    // individual print syntex
    // cout<<vec[0][0];
    // full print 
    int sum=0 ,sum2=0;
    for(int i = 0; i < vec.size(); i++){
        for (int j = 0; j < vec[i].size(); j++)
        {
            // cout<< vec[i][j]<<", ";
            sum += vec[i][j];
            
        }
        if(sum> sum2){
            sum2 = sum;
        }
        cout<<endl<<sum;
        sum =0;
        
    }
    cout<<"greatest sum: "<<sum2;
}