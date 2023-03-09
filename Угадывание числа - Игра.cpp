#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	restart:srand(time(NULL) + rand());
	char set_the_variant;
	short int score;
	char play_again_stat;
	short int input_guess;
	short int guessed_number = rand() % 10 + 1;
first:cout << "Hey! Try to guess the number for 1 - 10!" << endl;
	ans:cout << "Y or N: ";
	cin >> set_the_variant;
	cout << guessed_number << endl;
	switch (set_the_variant)
	{
	case 'Y': 
		cout << "Let's Go!" << endl; 
		new_try:cout << "Input a number (1-10): ";
		cin >> input_guess;
		if (input_guess == guessed_number)
		{
			cout << "Oh! You'r damn right!" << endl;
			goto ashabad;
			break;
		}

		if (input_guess != guessed_number)
		{
			cout << "You Lose.. Try again and try to win! " << endl;
			score = guessed_number - input_guess;
			if (score < 0)
			{
				score *= -1;
				cout << "Ты ошибся на " << score << " единиц." << endl;
			}
			else
				cout << "Ты ошибся на " << score << " единиц(ы)." << endl;;
			ashabad:cout << "Wanna play again(Y - N)? - ";
			cin >> play_again_stat;
			letstrayagan:switch (play_again_stat)
			{
			case 'Y': goto restart; break;
			case 'N': cout << "Goodbye, Amigo!" << endl; break;
			default: goto letstrayagan; break;
			}
		}
			
		break;
	
	
	case 'N': cout << "Oh, ok.. Bye, bro!" << endl; break;
	default: goto ans; break;
	}
	
}