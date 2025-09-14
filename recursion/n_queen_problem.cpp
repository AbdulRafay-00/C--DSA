// #include <iostream>
// #include <vector>
// using namespace std;


// void push_ans(vector <vector<string>>& board, vector<vector<string>>& ans, int n){
//     vector<string> temp;
//     for(int i =0 ; i<n ; i++){
//         for (int j = 0; j < n; j++)
//         {
//             temp.push_back(board[j]);

//         }
//         ans.push_back(temp);

        
//     }
// }


 
// bool is_Safe(vector <vector<string>>& board, vector<vector<string>>& ans , int n, int row, int col){
//     // row check
//     // check column
//     for (int i = 0; i < row; i++) {
//         if (board[i][col] == "Q") return false;
//     }

//     // check upper-left diagonal
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
//         if (board[i][j] == "Q") return false;
//     }

//     // check upper-right diagonal
//     for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
//         if (board[i][j] == "Q") return false;
//     }

//     return true;


// }

// void N_queen(vector <vector<string>>& board, vector<vector<string>>& ans , int n, int row ){
//     if (row == n){
//         push_ans(board , ans, n);
//         return;
//     }
   
//         for (int j = 0; j < n; j++)
//         {
//             if(is_Safe(board, ans, n, row , j)){
//                 board[row][j] = "Q";
//                 N_queen(board, ans, n, row + 1);
                
//                 board[row][j] = ",";
//             }else{

//             }
//         }
//         cout<<endl;
    
    
// }

// int main() {
//     int n = 4;
//     vector<vector<string>> board(n, vector<string>(n, ".")); // 4x4 filled with "."
//     vector<vector<string>> ans; // this will hold solutions later
//     int row= 0;
//     N_queen(board, ans, n, row);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

// }









//     // // upper left
    
//     //      for (int o = row ;o < 0 ; o--)
//     // {
//     //     if(board[row+1][col-1] == "Q"){
//     //         return false; 
//     //         break;
//     //     }
//     // }
//     // //lower rigtt

//     //        for (int p = row ;p < n ; p++)
//     // {
//     //     if(board[row-1][col+1] == "Q"){
//     //         return false; 
//     //         break;
//     //     }
//     // }









//  gpt code

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void push_ans(vector<vector<string>>& board, vector<vector<string>>& ans, int n) {
    vector<string> temp;
    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j < n; j++) {
            row += board[i][j];
        }
        temp.push_back(row);
    }
    ans.push_back(temp);
}

bool is_Safe(vector<vector<string>>& board, int n, int row, int col) {
    // check column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == "Q") return false;
    }
    // check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == "Q") return false;
    }
    // check upper-right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == "Q") return false;
    }
    return true;
}

void N_queen(vector<vector<string>>& board, vector<vector<string>>& ans, int n, int row) {
    if (row == n) {
        push_ans(board, ans, n);
        return;
    }

    for (int j = 0; j < n; j++) {
        if (is_Safe(board, n, row, j)) {
            board[row][j] = "Q";
            N_queen(board, ans, n, row + 1);
            board[row][j] = "."; // backtrack
        }
    }
}

int main() {
    int n = 4;
    vector<vector<string>> board(n, vector<string>(n, "."));
    vector<vector<string>> ans; // each solution is a vector<string> (rows)

    N_queen(board, ans, n, 0);

    // print all solutions
    int sol = 1;
    for (auto& solution : ans) {
        cout << "Solution " << sol++ << ":\n";
        for (auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
}
