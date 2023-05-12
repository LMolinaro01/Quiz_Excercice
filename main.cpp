#include <iostream>

using namespace std;

int main()
{
	int score = 0 ;
	
	int choice;
	
	cout << "Luffy loves more: " << "\n\n";
	
	cout << "1. Cats" << endl;
	cout << "2. Food" << endl;
	cout << "3. Fight" << endl;
	cout << "4. Read a book" << endl;
	
	cout << endl << "Write the Answer (number) : ";
	
	cin >> choice;
	
	if (choice == 2)
	{
		score++;
		cout << endl << "Correct! Your Score: "<< score << endl;
	}
	else
	{
		cout << endl << "Incorret :( , Your Score: " << score << endl;
	}
	
	cout << endl;
	
	cout << "Leorio loves: " << "\n\n";
	
	cout << "1. Chocolate" << endl;
	cout << "2. Lolipop" << endl;
	cout << "3. Money" << endl;
	cout << "4. Cookies" << endl;

	cout << endl << "Write the Answer: ";
	
	cin >> choice;
	
	if (choice ==3)
	{
		score++;
		cout << endl << "Correct! Your Score: "<< score << endl;
	}
	else
	{
		cout << endl << "Incorret :( , Your Score: " << score << endl;
	}
	
	cout << endl;
	
	cout << "Creepers are afraid of: " << "\n\n";
	
	cout << "1. Cats" << endl;
	cout << "2. Pigs" << endl;
	cout << "3. Wolfs" << endl;
	cout << "4. Endermans" << endl;
	
	cout << endl << "Write the Answer: ";
	
	cin >> choice;
	
	if (choice ==1)
	{
		score++;
		cout << endl << "Correct! Your Score: "<< score << endl;
	}
	else
	{
		cout << endl << "Incorret :( , Your Score: " << score << endl;
	}

	cout << endl << "--------------Game Over--------------" << "\n\n"; //pulei 2 linhas com o "\n\n"
	
	system ("pause");

	return 0;
}
