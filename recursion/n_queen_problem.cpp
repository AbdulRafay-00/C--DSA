#include <iostream>
#include <vector>
using namespace std;

//if want to store 2d vector into 2d vector
// void push_ans(vector <vector<string>>& board, vector<vector<string>>& ans, int n){
//      vector<string> temp;
//     for (int i = 0; i < n; i++) {
//         string row = "";
//         for (int j = 0; j < n; j++) {
//             row += board[i][j];
//         }
//         temp.push_back(row);
//     }
//     ans.push_back(temp);
//     return;
// }


 
bool is_Safe(vector <vector<string>>& board, int n, int row, int col){
    // row check
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

void N_queen(vector <vector<string>>& board, vector<vector<vector<string>>>& ans , int n, int row ){
    if (row == n){
        ans.push_back(board);
        return;
    }
   
        for (int j = 0; j < n; j++)
        {
            if(is_Safe(board, n, row , j)){
                board[row][j] = "Q";
                N_queen(board, ans, n, row + 1);
                
                board[row][j] = ".";
            }
        }
        cout<<endl;
    
    
}

int main() {
    int n = 4;
    vector<vector<string>> board(n, vector<string>(n, ".")); 
    vector<vector<vector<string>>> ans; 
    int row= 0;
    N_queen(board, ans, n, row);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            for (int k = 0; k < ans[i][j].size(); k++)
            {
                /* code */
                cout << ans[i][j][k] ;
            }
            
            cout << endl;
        }
    }

}






