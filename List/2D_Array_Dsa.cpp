#include "iostream"
#include "vector"
using namespace std;


void search(vector<vector<int>> ser){
    int i = 0;
   int st = 0;
   int end = ser[i].size()-1;
   int mid;
   int target = 2;
// cout<< ser[i][end];
    while (st <= end){
        cout << "in while loop" << endl;
        if(ser[i][end] < target){
            // cout << "in iff loop" << endl;
            i++;
            end = ser[i].size()-1;
        }else{
            
            mid = st + ((end - st) / 2);
            if(ser[i][mid] == target){
                cout <<"found element on"<< endl << i <<"," << mid;
            }
            if(target < ser[i][mid]){
                
                end= mid - 1;
                cout << "end has changed" << endl;

            }else{

                st = mid + 1;
            }
        }




    }

}
int main(){
    vector <vector<int>> vec = {{2,7,9},{11,15,19}, {21 , 30, 35}};
    search( vec );
}