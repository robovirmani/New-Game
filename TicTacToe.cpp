#include <iostream>
#include <cstdlib>
using namespace std;

char layout[10] = {'o','1','2','3','4','5','6','7','8','9'};

int wintest();
void frame();

int main()
{
	int player = 1,i,choice;

	char mark;
	do
	{
		frame();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && layout[1] == '1')

			layout[1] = mark;
		else if (choice == 2 && layout[2] == '2')

			layout[2] = mark;
		else if (choice == 3 && layout[3] == '3')

			layout[3] = mark;
		else if (choice == 4 && layout[4] == '4')

			layout[4] = mark;
		else if (choice == 5 && layout[5] == '5')

			layout[5] = mark;
		else if (choice == 6 && layout[6] == '6')

			layout[6] = mark;
		else if (choice == 7 && layout[7] == '7')

			layout[7] = mark;
		else if (choice == 8 && layout[8] == '8')

			layout[8] = mark;
		else if (choice == 9 && layout[9] == '9')

			layout[9] = mark;
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=wintest();

		player++;
	}while(i==-1);
	frame();
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}


int wintest()
{
	if (layout[1] == layout[2] && layout[2] == layout[3])

		return 1;
	else if (layout[4] == layout[5] && layout[5] == layout[6])

		return 1;
	else if (layout[7] == layout[8] && layout[8] == layout[9])

		return 1;
	else if (layout[1] == layout[4] && layout[4] == layout[7])

		return 1;
	else if (layout[2] == layout[5] && layout[5] == layout[8])

		return 1;
	else if (layout[3] == layout[6] && layout[6] == layout[9])

		return 1;
	else if (layout[1] == layout[5] && layout[5] == layout[9])

		return 1;
	else if (layout[3] == layout[5] && layout[5] == layout[7])

		return 1;
	else if (layout[1] != '1' && layout[2] != '2' && layout[3] != '3'
                    && layout[4] != '4' && layout[5] != '5' && layout[6] != '6'
                  && layout[7] != '7' && layout[8] != '8' && layout[9] != '9')

		return 0;
	else
		return -1;
}


void frame()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << layout[1] << "  |  " << layout[2] << "  |  " << layout[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << layout[4] << "  |  " << layout[5] << "  |  " << layout[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << layout[7] << "  |  " << layout[8] << "  |  " << layout[9] << endl;

	cout << "     |     |     " << endl << endl;
}
