#include <iostream>
#include <string>
#include <windows.h>
using namespace std;



int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 112);
	cout << endl;
	cout << "*************************************" << endl;
	cout << "Universidad Catolica San Pablo" << endl;
	cout << "Escuela Profesional de Ciencia de la Computacion" << endl;
	cout << "Ciencia de la Computacion I _ CCOMP 2.1" << endl;
	cout << "Alain Freiker Mullisaca Rivera" << endl;
	cout << "*************************************" << endl;
	cout << endl;
	cout << endl;

	//BOARD 
	SetConsoleTextAttribute(hConsole, 7);
	char p1 = '1';
	SetConsoleTextAttribute(hConsole, 8);
	char p2 = '2';
	SetConsoleTextAttribute(hConsole, 9);
	char p3 = '3';
	SetConsoleTextAttribute(hConsole, 10);
	char p4 = '4';
	SetConsoleTextAttribute(hConsole, 11);
	char p5 = '5';
	SetConsoleTextAttribute(hConsole, 12);
	char p6 = '6';
	SetConsoleTextAttribute(hConsole, 13);
	char p7 = '7';
	SetConsoleTextAttribute(hConsole, 10);
	char p8 = '8';
	SetConsoleTextAttribute(hConsole, 10);
	char p9 = '9';


	//Players 

	int currentPlayer{1};
	char sign1{'x'};
	char sign2{'o'};
	char sign{'X'};
	int position{0};
	int controller{-1};
	//-1 game in progress
	//1 there's a winner
	//0 draw
	int count{0};

	
	

	cout << "TIC TAE TOE GAME" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Enter the sign of player 1: ";


	cin >> sign1;
	cout << "Enter the sign of player 2: ";


	cin >> sign2;

	cout << endl;

	cout << endl;


	while (controller == -1){

		cout << endl;
		cout << "   " << "|" << "   " << "|" << "   " << endl;
		cout << " " << p1 << " " << "|" << " " << p2 << " " << "|" << " " << p3 << " " << endl;
		cout << "___" << "|" << "___" << "|" << "___" << endl;
		cout << "   " << "|" << "   " << "|" << "   " << endl;
		cout << " " << p4 << " " << "|" << " " << p5 << " " << "|" << " " << p6 << " " << endl;
		cout << "___" << "|" << "___" << "|" << "___" << endl;
		cout << "   " << "|" << "   " << "|" << "   " << endl;
		cout << " " << p7 << " " << "|" << " " << p8 << " " << "|" << " " << p9 << " " << endl;
		cout << "   " << "|" << "   " << "|" << "   " << endl;
		cout << endl;

		count = count + 1;

		if (count % 2 == 1){
			currentPlayer = 1;
			SetConsoleTextAttribute(hConsole, 4);
			sign = sign1;
		} else if (count % 2 == 0) {
			currentPlayer = 2;
			SetConsoleTextAttribute(hConsole, 2);
			sign = sign2;
		}
    	SetConsoleTextAttribute(hConsole, 112);
		cout << "player" << currentPlayer <<" enter a position from 1 to 9: ";
		cin >> position;

		//checkin the position

		if (position == 1 && p1 == '1'){
			p1 = sign;
		} else if (position == 2 && p2 == '2'){
			p2 = sign;
		} else if (position == 3 && p3 == '3'){
			p3 = sign;
		} else if (position == 4 && p4 == '4'){
			p4 = sign;
		} else if (position == 5 && p5 == '5'){
			p5 = sign;
		} else if (position == 6 && p6 == '6'){
			p6 = sign;
		} else if (position == 7 && p7 == '7'){
			p7 = sign;
		} else if (position == 8 && p8 == '8'){
			p8 = sign;
		} else if (position == 9 && p9 == '9'){
			p9 = sign;
		} else {
			cout << "Unallowed movement!!!";
			count -= 1;
		}


		//Checking if there's a winner 

		if (p1 == p2 && p2 == p3){
			controller = 1;
			break;
		} else if (p4 == p5 && p5 == p6){
			controller = 1;
			break;
		} else if (p7 == p8 && p8 == p9){
			controller = 1;
			break;
		} else if (p1 == p4 && p4 == p7){
			controller = 1;
			break;
		} else if (p2 == p5 && p5 == p8){
			controller = 1;
			break;
		} else if (p3 == p6 && p6 == p9){
			controller = 1;
			break;
		} else if (p1 == p5 && p5 == p9){
			controller = 1;
			break;
		} else if (p3 == p5 && p5 == p7){
			controller = 1;
			break;
		} else if (p1 != '1' && p2 != '2' && p3 != '3' && p4 != '4' && p5 != '5' && p6 != '6' && p7 != '7' && p8 != '8' && p9 != '9'){
			controller = 0;
			break;
		} else {
			controller == -1;
		}

	}

	if (controller == 1){
		cout << endl;
		cout << "player" << currentPlayer << " you won!" << endl;
		cout << endl;
	} else if (controller == 0){
		cout << endl;
		cout << "It's a draw!!!" << endl;
		cout << endl;
	}

	cout << endl;
	cout << "FINAL BOARD: RESULTS" << endl;
	cout << endl;
	cout << "   " << "|" << "   " << "|" << "   " << endl;
	cout << " " << p1 << " " << "|" << " " << p2 << " " << "|" << " " << p3 << " " << endl;
	cout << "___" << "|" << "___" << "|" << "___" << endl;
	cout << "   " << "|" << "   " << "|" << "   " << endl;
	cout << " " << p4 << " " << "|" << " " << p5 << " " << "|" << " " << p6 << " " << endl;
	cout << "___" << "|" << "___" << "|" << "___" << endl;
	cout << "   " << "|" << "   " << "|" << "   " << endl;
	cout << " " << p7 << " " << "|" << " " << p8 << " " << "|" << " " << p9 << " " << endl;
	cout << "   " << "|" << "   " << "|" << "   " << endl;
	cout << endl;


	return 0;
}