#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };

int main() {
    cout << "Tic-Tac-Toe Board:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}int choice;
cout << "Enter position (1-9) for X: ";
cin >> choice;
int row=(choice-1)/3, col=(choice-1)%3;
board[row][col] = 'X';

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << board[i][j] << " ";
    }
    cout << endl;
}int choice;
cout << "Enter position (1-9) for X: ";
cin >> choice;
int row=(choice-1)/3, col=(choice-1)%3;
board[row][col] = 'X';

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << board[i][j] << " ";
    }
    cout << endl;
}bool checkWin(){
    for(int i=0;i<3;i++)
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]) return true;
    for(int j=0;j<3;j++)
        if(board[0][j]==board[1][j] && board[1][j]==board[2][j]) return true;
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]) return true;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]) return true;
    return false;
}int player=1, moves=0;
while(moves<9){
    int choice;
    cout << "Player " << player << " move: ";
    cin >> choice;
    int row=(choice-1)/3, col=(choice-1)%3;
    board[row][col] = (player==1?'X':'O');
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cout << board[i][j] << " ";
        cout << endl;
    }
    if(checkWin()){
        cout << "Player " << player << " wins!\n";
        break;
    }
    player = 3-player; // switch player
    moves++;
}
if(moves==9) cout << "Draw!\n";