#include<iostream>
using namespace std;
int main()
{
	int index, player1_matches_won = 0, player2_matches_won = 0;
	int i[9];
	char value[9], player, option = 'y';
	cout << "\t\t\t\t\t\tTIC--TAC--TOE--GAME" << endl;
	cout << "\t\t\t\t\t\t  For Two Players" << endl;
	cout << "In the figure below each boxes indexes are mentioned:" << endl;
	for (int b = 0; b < 9; b++)
	{
		if (b == 2 || b == 5 || b == 8)
		{
			cout << b << endl;
			cout << "------------" << endl;
		}
		else
		{
			cout << b << " | ";
		}
	}
	cout << endl << "Here are some rules of Tick Toe Game:" << endl;
	cout << " If a player completes its row or column or diagnol first then he wins" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	while (option == 'y')
	{
		char won = 'n';
		for (int a = 0; a < 9; a++)
		{
			value[a] = ' ';
			i[a] = -1;
		}
		for (int turns = 1, c = 0; turns <= 9; turns++, c++)
		{
			if (won == 'n')
			{
				if (turns % 2 != 0)
				{
					cout << endl << "Player 1 (X) turn:" << endl;
					player = 'X';
				}
				else
				{
					cout << endl << "Player 2 (O) turn:" << endl;
					player = 'O';
				}
				cout << "Enter index:";
				cin >> index;
				for (int d = 0; d < 9; d++)
				{
					if (i[d] == index)
					{
						cout << endl << "You entered index that already entered before:" << endl;
						cout << "Enter index again:";
						cin >> index;
						d = 0;
					}
					else if (index > 8 || index < 0)
					{
						cout << endl << "You didnt enter index between 0 and 8:" << endl;
						cout << "Please enter index again:";
						cin >> index;
						d = 0;
					}
				}
				i[c] = index;
				value[index] = player;
				for (int x = 0; x < 9; x++)
				{
					if (x == 2 || x == 5 || x == 8)
					{
						cout << value[x] << endl;
						cout << "------------" << endl;
					}
					else {
						if (index == x)
						{
							cout << value[x] << " | ";
						}
						else
						{
							cout << value[x] << " | ";
						}
					}
				}
				if ((value[0] == value[1] && value[1] == value[2] && (value[0] == 'X' || value[0] == 'O'))
					|| (value[3] == value[4] && value[4] == value[5] && (value[3] == 'X' || value[3] == 'O'))
					|| (value[6] == value[7] && value[7] == value[8] && (value[6] == 'X' || value[6] == 'O'))
					|| (value[0] == value[3] && value[3] == value[6] && (value[0] == 'X' || value[0] == 'O'))
					|| (value[1] == value[4] && value[4] == value[7] && (value[1] == 'X' || value[1] == 'O'))
					|| (value[2] == value[5] && value[5] == value[8] && (value[2] == 'X' || value[2] == 'O'))
					|| (value[0] == value[4] && value[4] == value[8] && (value[0] == 'X' || value[0] == 'O'))
					|| (value[2] == value[4] && value[4] == value[6] && (value[2] == 'X' || value[2] == 'O')))
				{
					if (player == 'X')
					{
						cout << "Player 1 (X) has won the game" << endl;
						won = 'y';
						player1_matches_won++;
					}
					else
					{
						cout << "Player 2 (O) has won the game" << endl;
						won = 'y';
						player2_matches_won++;
					}
				}
			}
		}
		if (won == 'n')
		{
			cout << endl << "No player has won the match" << endl;
		}
		cout << endl << "Score board:" << endl;
		cout << endl << "Player 1 (X)\t\tPlayer 2 (O)" << endl;
		cout << player1_matches_won << "\t\t\t" << player2_matches_won << endl;
		cout << endl << "---------------------------------------------" << endl;
		cout << endl << "Do you want to play next round answer in y or n:";
		cin >> option;
		for (int e = 0; e <= 2; e++)
		{
			if (option != 'y' && option != 'n')
			{
				cout << endl << "You entered other than yes or no:" << endl;
				cout << "Do you want to play next round answer in y or n:";
				cin >> option;
				e = 0;
			}
		}
	}
	cout << endl << "\t\t\t\t--------------------------------" << endl;
	cout << "\t\t\t\t|      Thanks For Playing      |" << endl;
	cout << "\t\t\t\t--------------------------------" << endl;
	return 0;
}
