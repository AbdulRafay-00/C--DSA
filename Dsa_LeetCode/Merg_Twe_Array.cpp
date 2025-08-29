#include <iostream>
#include <vector>
using namespace std;
 void merg_func2(vector<int> vec , vector <int> vec2){
    int vec_non_zero = 0;
    for(int i = 0; i< vec.size(); i++){
    if(vec[i] == 0){
        vec_non_zero --;  
        break;
    }
    vec_non_zero ++;  
    }
    int j = vec2.size()-1;
    int i = vec.size()-1;
    cout<<vec[vec_non_zero+1]<< endl;
    cout<<vec2[j];

    while (j >= 0)
    {
        cout << "in if loop"<< endl;
        if(vec[vec_non_zero] > vec2[j]){
            cout << "in lllllllllllllllllllllllllllllllllllllllll loop"<< endl;
            // int temp = vec[vec_non_zero];
            // vec[vec_non_zero] =vec2[j];
            vec[i] =  vec[vec_non_zero];
            vec_non_zero--;           
        }else{
            vec[i] = vec2[j];
            j--;
        }
        i--;
    }

    
    for(int i :vec){
        cout<< i;
    }}

    int main(){
    vector <int> vec = {1,2,3,0,0,0};
    vector <int> vec2 = {1,4,5};
    merg_func2(vec , vec2);
}