#include <iostream>
#include <vector>
using  namespace std; 




    vector <int> two_sum_func( vector<int> nums , int target){
        int sum = 0;
        vector <int>  vec;
        int x = 0;
        for(int i=0 ; i< nums.size();){
            sum += nums[x];
            if(sum == target){
                cout << "target found"<< endl;
                vec.push_back(i);
                vec.push_back(x);
                return vec;
                break;
            }if(x == nums.size()-1){
                i++;
                x=0;
            }
            sum = nums[i];
            x++;
        }
        return {};
    }
int main(){
    vector <int> numss ={6,3,7,6,7};
      int target = 9;
     vector <int> ans = two_sum_func(numss , target);
     cout << ans[0] <<","<< ans[1];
    }





    