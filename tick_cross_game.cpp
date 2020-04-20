#include <iostream>
using namespace std;

int main(){

    int choice;
    char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};

    cout << "\n\t T i k   C r o s s   G a m e" << endl;
    cout << "\t  Player1[X]\t Player2[O]" <<endl;
    cout << endl;


    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
    cout << "\t\t\t\t_____|_____|_____\n";
    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
    cout << "\t\t\t\t_____|_____|_____\n";
    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
    cout << "\t\t\t\t     |     |     \n";

    cout<< "Player1 [X] turns: \t";
    cin>>choice;

    switch (choice)
    {
    case 1:
    board[0][0] = 'X';
        break;
    case 2:
    board[0][1] = 'X';
        break;
    case 3:
    board[0][2] = 'X';
        break;
    case 4:
    board[1][0] = 'X';
        break;
    case 5:
    board[1][1] = 'X';
        break;
    case 6:
    board[1][2] = 'X';
        break;
    case 7:
    board[2][0] = 'X';
        break;
    case 8:
    board[2][1] = 'X';
        break;
    case 9:
    board[2][2] = 'X';
        break;
    default:
    cout<<"Invalid input!";
        break;
    }


    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
    cout << "\t\t\t\t_____|_____|_____\n";
    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
    cout << "\t\t\t\t_____|_____|_____\n";
    cout << "\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
    cout << "\t\t\t\t     |     |     \n";


    char stop;
    cin>>stop;

}