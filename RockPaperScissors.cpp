#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int a,b;
char c;
void PlayerInput(){
	cout<<"Choose your action! 0 for Rock, 1 for Scissors and 2 for Paper!"<<endl;
	cout<<endl;
	cin >> a;
	cout<<endl;
}
void ComputerInputOutput(){
	cout<<"The computer chose ";
	if(b == 0){
		cout<<"Rock!"<<endl;
	}else if(b == 1){
		cout<<"Scissors!"<<endl;
	}else if(b == 2){
		cout<<"Paper!"<<endl;
	}
}
char WinCondition(){
	//player wins
	if(a == 0 && b == 1){
		return 'P';
	}else if(a == 1 && b == 2){
		return 'P';
	}else if(a == 2 && b == 0){
		return 'P';
	}
	//computer wins
	if(a == 0 && b == 2){
		return 'C';
	}else if(a == 1 && b == 0){
		return 'C';
	}else if(a == 2 && b == 1){
		return 'C';
	}
	return '/';
}
int main(){
	srand(time(NULL));
	b = rand() % 2;
	cout<<"Rock, Paper, Scissors!"<<endl;
	cout<<endl;
	while(1){
		PlayerInput();
		ComputerInputOutput();
		if(WinCondition() == 'P'){
			cout<<endl;
			cout<<"You win! Do you want to play again? y/n"<<endl;
			cin >> c;
			if(c == 'y'){
				system("cls");
				main();
			}else if(c == 'n'){
				cout<<endl;
				cout<<"Goodbye then!"<<endl;
				return 0;
			}
		} 
		if(WinCondition() == 'C'){
			cout<<endl;
			cout<<"The Computer won! Do you want your revenge? y/n"<<endl;
			cin >> c;
			if(c == 'y'){
				system("cls");
				main();
			}else if(c == 'n'){
				cout<<endl;
				cout<<"Goodbye then!"<<endl;
				return 0;
			}
		}
		if(WinCondition() == '/'){
			cout<<endl;
			cout<<"It's a draw!"<<endl;
			cout<<endl;
			cout<<"Do you want to try again? y/n"<<endl;
			cin >> c;
			if(c == 'y'){
				system("cls");
				main();
			}else if(c == 'n'){
				cout<<endl;
				cout<<"Goodbye then!"<<endl;
				return 0;
			}
		}
	}
	return 0;
}
