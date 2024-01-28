//#include<iostream>
//#include<string>
//#include<ctime>
//using namespace std;
//
//void Function(string M[3][3],int d, bool flag)
//{
//	if (flag == false)
//	{
//		if (d == 1)
//		{
//			if (M[0][1] == '1')
//			{
//
//			}
//		}
//		else if (d == 2)
//		{
//			M[0][1] = 'x';
//		}
//	}
//}
//
//int main()
//{
//	string map[3][3] = { "1","2","3","4","5","6","7","8","9"};
//	cout << "     |   |\n   ";
//	cout << map[0][0] << " | " << map[0][1] << " | " << map[0][2] << endl;
////	cout << "   |   |\n ";
//	cout << "  ---     --- \n   ";
//	cout <<map[1][0] << " | " << map[1][1] << " | " << map[1][2] << "\n";
//	//cout << "     |   |\n ";
//	//cout << "    |   |\n ";
//	cout << "  ---     --- \n   ";
//	cout << map[2][0] << " | " << map[2][1] << " | " << map[2][2] << "\n";
//	cout << "     |   |\n ";
//	int digit;
//	char token = '0';   // false ---> player 1's turn : true ---> player 2's turn
//	int temp = time(0);
//	srand(temp);
//	int turn = rand() % 2;
//	if (turn == 0)
//	{
//		cout << "Player 1 will have the first turn\n";
//	}
//	else if (turn == 1)
//	{
//		cout << "Player 2 will have the first turn\n";
//		token = 'x';
//	}
//
//	cout << "Enter your turn: ";
//	cin >> digit;
//	Function(map,digit, changeTurn);
//	
//
//
//}