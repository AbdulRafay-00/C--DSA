#include<iostream>
#include <vector>
using namespace std;
void Mountain_search(vector <int>arr){
   int st = 1;
  int end = arr.size()-2;
  while(st <= end ){
    int mid = st + ((end - st)/2);
    if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1] ){
        cout<<"Element Found On Index: "<<mid<<endl<< "VAlue is "<<arr[mid];
        break;
    }
    if(arr[mid] <= arr[mid + 1]){
        st = mid + 1;
    }else{
        end = mid -1;
    }
  }

}
int main(){
    vector<int> arr={5,6,7,8,9,2,1};
    Mountain_search(arr);
}