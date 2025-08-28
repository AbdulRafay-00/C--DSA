// #include <iostream>
// #include <vector>
// using namespace std;
//  void merg_Function(vector<int>& ve , vector <int>& vec2){
//     int n = ve.size();
//     ve.erase(ve.end()-3 , ve.end());
//     cout << "befor change"<< endl;
//     for(int i : ve){
//         cout<< i;

//     }
//     cout <<endl;
//      for(int i = 0; i < vec2.size(); i++){
//          ve.push_back(vec2[i]);
//          n--;
         
//         }
//         cout << "after change"<< endl;
//         for(int i : ve){
//             cout<< i;

//         }

//  }


//  void merg_func2(vector<int> vec , vector <int> vec2){
//     int vec_non_zero = 0;
//     for(int i = 0; i< vec.size(); i++){
//     if(vec[i] == 0){
//                 break;
//     }
//     vec_non_zero ++;  
//     }
//     int j = vec2.size()-1;
//     int i = vec.size()-1;
//     cout<<

//     // while (j >= 0 )
//     // {
//     //     cout << "in if loop"<< endl;
// //     if(vec[vec_non_zero] > vec2[j]){
// //         cout << "in lllllllllllllllllllllllllllllllllllllllll loop"<< endl;
//             //         vec[i] = vec2[j];
//     //         vec_non_zero--;
//     //         i--;
//     //         j--;

//     //     }
//     // }
    
//     for(int i :vec){
//         cout<< i;
//     }

//  }

// int main(){
//     vector <int> vec = {1,2,3,0,0,0};
//     vector <int> vec2 = {2,4,5};
//     merg_func2(vec , vec2);
// }





#include <iostream>
#include <vector>
using namespace std;
 void merg_Function(vector<int>& ve , vector <int>& vec2){
    int n = ve.size();
    ve.erase(ve.end()-3 , ve.end());
    cout << "befor change"<< endl;
    for(int i : ve){
        cout<< i;

    }
    cout <<endl;
     for(int i = 0; i < vec2.size(); i++){
         ve.push_back(vec2[i]);
         n--;
         
        }
        cout << "after change"<< endl;
        for(int i : ve){
            cout<< i;

        }

 }


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
            int temp = vec[vec_non_zero];
            vec[vec_non_zero] =vec2[j];
            vec[i] = temp;
            vec_non_zero--;
            i--;
            j--;            
        }else{
            vec[i] = vec2[j];
            i--;
            j--;
            


        }
    }

    
    for(int i :vec){
        cout<< i;
    }}

    int main(){
    vector <int> vec = {1,2,3,0,0,0};
    vector <int> vec2 = {2,4,5};
    merg_func2(vec , vec2);
}