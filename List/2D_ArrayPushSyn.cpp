#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<vector<int>> vec1 = {{1,2,3},{1,2,3}};
    vector<vector<vector<int>>> sol;
    
    sol.push_back(vec1);

    for(int i = 0 ; i< sol.size(); i++){
        for (int j = 0; j < sol[i].size(); j++)
        {
            for (int k = 0; k < sol[i][j].size() ; k++)
            {
                cout<< sol[i][j][k];
            }
            cout << endl;
            
        }
    
    }
}