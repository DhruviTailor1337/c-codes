#include<iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'x';
int row,column;
bool draw = false;

void display_board(){
	
	system("cls");  //to remove previous board.
	cout<<"\n\n\t\tTICK CROSS GAME";
	cout<<"\n\n\tPlayer1 [x]\n\tPlayer2 [o]\n\n\n";
	
	cout<<"\t     |     |     \n";
	cout<<"\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t_____|_____|_____\n";
	cout<<"\t     |     |     \n";
	cout<<"\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\t_____|_____|_____\n";
	cout<<"\t     |     |     \n";
	cout<<"\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
	cout<<"\t     |     |     \n";
}

void player_turn(){
	int choice;
	
	if(turn == 'x')
	cout<<"\n\tplayer1 [x] turn:";
	if(turn == 'o')
	cout<<"\n\tplayer2 [o] turn:";
	
	cin>>choice;
	
	switch(choice){
		case 1: row=0; column=0; break;
		case 2: row=0; column=1; break;
		case 3: row=0; column=2; break;
		case 4: row=1; column=0; break;
		case 5: row=1; column=1; break;
		case 6: row=1; column=2; break;
		case 7: row=2; column=0; break;
		case 8: row=2; column=1; break;
		case 9: row=2; column=2; break;
		default:
			cout<<"invalid choice!!\n";
			break;
	}
	
	if(turn == 'x' && board[row][column]!= 'x' && board[row][column]!='o' ){
		board[row][column] = 'x';
		turn='o';
	}
		
	else if(turn == 'o'&& board[row][column]!= 'x' && board[row][column]!='o' ){
		board[row][column] = 'o';
		turn='x';
	}
	else{
		cout<<"box already filed!!\nplease try again!!\n\n";
		player_turn();
	}
	display_board();
}

bool game_over(){
	//win
	
	//for row and column
	for(int i=0;i<3;i++)
	if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
	return false;
	
	//for diagonal
	if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][0] == board[2][0])
	return false;
	
	//if there is any box that is not filled then game remain continue
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	if(board[i][j] != 'x' && board[i][j] != 'o')
	return true;
	
	//game draw
	draw = true;
	return false;
}


main(){
	
	
	while(game_over()){
	
	display_board();
	player_turn();
	game_over();
}

if(turn == 'x' && draw == false)
cout<<"\nplayer2 [o] wins!!  CONGRATULATIONS\n";

else if(turn == 'o' && draw == false)
cout<<"player1 [x] wins!!  CONGRATULATIONS\n";

else 
cout<<"game draw!!!\n";
}
