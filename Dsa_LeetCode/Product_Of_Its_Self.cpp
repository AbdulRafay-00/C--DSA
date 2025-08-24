#include <iostream>
#include <vector>
using namespace std; 
vector <int> productOfList(vector<int> nums);
int main(){
vector <int> vec = {1,2,3,4};
vector<int> result = productOfList(vec);
for(int i : result){
    cout << i<<", ";
}
}

vector <int> productOfList(vector <int> nums){
    int sum = 1;
    vector <int> ans ;
    for (int i = 0; i < nums.size(); i++){
        // cout << "this is i" <<i <<endl;
          for (int j = i+1; j < nums.size(); j++){
            // cout << "this is j" <<j <<endl;
              sum = sum * nums[j];
              cout<<"sum is"<<sum<<"and j"<< j <<"  "<<nums[j]<<endl;
            }
            ans.push_back(sum);
    sum = 1;
    }
    return ans;

};
