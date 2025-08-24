#include <iostream>
#include <vector>
using namespace std;
 int main(){
    vector <int> vec ={4,5,6,7,1,0,2,3};
    // time complexcity for binarry search  o(LogN) 
    // so normal binary search wont work here
    // .sort time complexcity = o(NLogN)
    //Using Both Sort and Binary Search increase your time complexcity = O(NLogN)
    int st = 0;
    int end = vec.size() - 1;
    // cout << st << ","<< end << ",";
    int target =0;
    while(st <= end){
        int mid = st + ((end - st) / 2);

        if(vec[mid] == target){
            cout<< "mid found on index:" << mid;
            break;
        }
        if(vec[st] < vec[mid]){// left side of list sorted
            if(target < vec[mid] && target >= vec[st]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{// right side of list sorted
            if(target > vec[mid] && target <= vec[end] ){
                st = mid + 1 ;
            }else{
                end = mid -1 ;
            }

        }
    }

}