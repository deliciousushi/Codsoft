#include<iostream>
using namespace std;
void initializeBoard(char board[3][3]);
void displayBoard(const char board[3][3]);
bool gameWin(const char board[3][3], char player);
bool checkDraw(char board[3][3]);
bool isMoveValid(char board[3][3], int i, int j);
void switchPlayer(char& currentPlayer);

void initializeBoard(char board[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]=' ';
        }
        cout<<endl;
    }
}
void displayBoard(const char board[3][3]){
    for(int i=0;i<3;i++){
        cout<<" | ";
        for(int j=0;j<3;j++){
            cout<<board[i][j]<<" | ";
        }
        cout<<endl;
    }
}
bool gameWin(const char board[3][3], char player){
    for(int i=0;i<3;i++){
        if((board[i][0]==player&&board[i][1]==player&&board[i][2]==player)||(board[0][i]==player&&board[1][i]==player&&board[2][i]==player)||(board[0][0]==player&&board[1][1]==player&&board[2][2]==player)||(board[0][2]==player&&board[1][1]==player&&board[2][0]==player)){
            return true;
        }
    }
    return false;
}
bool checkDraw(char board[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==' ')
                return false;
        }
    }
    return true;
}
bool isMoveValid(char board[3][3], int i, int j){
    if(i>=0&&i<3&&j>=0&&j<3&&board[i][j]==' '){
        return true;
    }
    else
        return false;
}
void switchPlayer(char& currentPlayer){
    if(currentPlayer=='X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
    
}

int main(){
    char board[3][3];
    char currentPlayer = 'X';//X starts the game
    bool gameWon = false;
    bool gameDraw = false;
    int i,j;
    char playAgain = 'y';//initializing
    cout<< "Welcome to the game of Tic-Tac-Toe!"<<endl;
    
    while (playAgain=='y'||playAgain=='Y'){
        initializeBoard(board);
        gameWon = false;
        gameDraw = false;
        currentPlayer = 'X';
        while (!gameWon && !gameDraw){
            displayBoard(board);
            cout<<"Player"<< currentPlayer<<" enter your move (row & column): ";
            cin>>i>>j;
            if(!isMoveValid(board,i,j)){
                cout<<"Invalid move! Try again(row & column): ";
                cin>>i>>j;
                }
            board[i][j] = currentPlayer;
            gameWon = gameWin(board, currentPlayer);
            gameDraw = checkDraw(board);
            if (!gameWon && !gameDraw) {
                switchPlayer(currentPlayer);
            }
        }
        displayBoard(board);// Display final board state

        if (gameWon) {
            cout<<"Player "<<currentPlayer<<" won!"<<endl;
        } else {
            cout<<"It's a draw!"<<endl;
        }
        cout<<"Do you want to play again?(y/n): ";
        cin>>playAgain;
    }
    cout<<"Thank you for playing with us!";
    return 0;
}
