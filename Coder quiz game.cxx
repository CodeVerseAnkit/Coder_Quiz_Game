#include <iostream>
using namespace std;
// <----- Coder Quiz Game ----->
// Author: Ankit
// Date: 5_7_2025
// Project: Coder Quiz Game
// Description: It is coding quiz game for coders

// -----> UI
void user_interface()
{
	cout << "  <--------------- CODER QUIZ GAME --------------->\n"
		 << endl;
	cout << "          😃WELCOME TO CODER Quiz GAME😀          \n          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\n\n   1.How to play                       2.High Score\n\n                     _____________\n                    |             |\n                    |  3.[START]  |\n                    |             |\n                     —————————————\n\n   4.About                             5.Exit\n\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"
		 << endl;
}
// -----> 1.How to play
void how_to_play()
{
	cout << "            Welcome To Coder Quiz Game\n"
		 << endl;
	cout << "   To play This Game:-\n  => Enter the 3 in the main manu to start the game.\n  => Enter the 2 in the main manu to check your\n     latest high score.\n\n   Rules of this game:-\n  1) When you start the game,A question will appear\n     on your screen with multiple choice option,\n     you have to choose the correct one.\n  2) If you choose the correct option,you earn 5\n     points and then the next question will appear\n     on your screen.\n  3) Remember you earn 5 points each time when\n     you choose the correct option.\n  4) If your answer is incorrect, then you are\n     not eligible for the next question and game\n     ends here with your final score.\n  5) Have a good day🙏😀 \n"
		 << endl;
	char back;
	do
	{ // loop to handle user input
		cout << "  => Back to main menu(y/n): ";
		cin >> back;
		cout << endl;
		if (back == 'y' || back == 'Y')
		{
			break;
		}

	} while (back != 'y' || back != 'Y');
}
// -----> 2.High Score
void high_score(int s)
{ // To show high score function
	int score = s;

	cout << "  <--------------- CODER QUIZ GAME --------------->\n"
		 << endl;
	cout << " =>Your Latest high Score: " << score << endl;
	cout << "\n                 🤩Nice job🤩" << endl
		 << "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		 << endl;
	char back;
	do
	{ // loop to handle user input
		cout << "  => Back to main menu(y/n): ";
		cin >> back;
		cout << endl;
		if (back == 'y' || back == 'Y')
		{
			break;
		}

	} while (back != 'y' || back != 'Y');
}

// -----> 3.Start
void start()
{
	cout << "  <--------------- CODER QUIZ GAME --------------->\n"
		 << endl;
	cout << "          😃WELCOME TO CODER Quiz GAME😀\n"
		 << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "  Game Loading... Please wait..." << endl;
	}
	cout << "  Game Loaded successfully 😃\n";
	char ready;
	do
	{ // loop to handle user input
		cout << "  Are you ready to play (y): ";
		cin >> ready;
		cout << endl;
		if (ready == 'y' || ready == 'Y')
		{
			cout << "   Nice🤩\n   All the best👍👍\n"
				 << endl;
			break;
		}
		else
		{
			cout << "  Please Enter (y/n) 🙏" << endl;
		}
	} while (ready != 'y' || ready != 'Y');
}

// -----> Questions
// -----> Q1
bool q1()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Here the first question ⬇️\n"
		 << endl;
	cout << "   Q1. Who is the creator of C++?\n     a) Dennis Ritchie         b) Bjarne Stroustrup  \n     c) James Gosling          d) Guido van Rossum \n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'b' || ans == 'B')
		{
			return true;
		}
		else if (ans == 'a' || ans == 'A' || ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'b' || ans != 'B');
}

// -----> Q2
bool q2()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:2 ⬇️\n"
		 << endl;
	cout << "   Q2. What is the correct file extension\n       for C++ files?\n     a) .cp                    b) .cpp  \n     c) .cpl                   d) .ccx\n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'b' || ans == 'B')
		{
			return true;
		}
		else if (ans == 'a' || ans == 'A' || ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'b' || ans != 'B');
}

// -----> Q3
bool q3()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:3 ⬇️\n"
		 << endl;
	cout << "   Q3. Which of the following is a correct\n       data type in C++?\n     a) digit                  b) real \n     c) num                    d) int \n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'd' || ans == 'D')
		{
			return true;
		}
		else if (ans == 'a' || ans == 'A' || ans == 'c' || ans == 'C' || ans == 'b' || ans == 'B')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'd' || ans != 'D');
}

// -----> Q4
bool q4()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:4 ⬇️\n"
		 << endl;
	cout << "   Q4. Which symbol is used to denote a\n       preprocessor directive?\n     a) @                      b) $\n     c) #                     d) %\n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'c' || ans == 'C')
		{
			return true;
		}
		else if (ans == 'a' || ans == 'A' || ans == 'd' || ans == 'D' || ans == 'b' || ans == 'B')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'c' || ans != 'C');
}

// -----> Q5
bool q5()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:5 ⬇️\n"
		 << endl;
	cout << "   Q5. What does OOP stand for?\n      a) Object Oriented Programming  \n      b) Operational Output Processing\n      c) Object Overriding Process\n      d) Optional Object Protocol\n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'a' || ans == 'A')
		{
			return true;
		}
		else if (ans == 'c' || ans == 'C' || ans == 'd' || ans == 'D' || ans == 'b' || ans == 'B')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'a' || ans != 'A');
}

// -----> Q6
bool q6()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:6 ⬇️\n"
		 << endl;
	cout << "   Q6. Which of the following is not a loop in C++?\n     a) for                 b) while\n     c) do                  d) repeat  \n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'd' || ans == 'D')
		{
			return true;
		}
		else if (ans == 'c' || ans == 'C' || ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'd' || ans != 'D');
}

// -----> Q7
bool q7()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:7 ⬇️\n"
		 << endl;
	cout << "   Q7. Which keyword is used to create a \n       class in C++?\n     a) object               b) define\n     c) class               d) new\n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'c' || ans == 'C')
		{
			return true;
		}
		else if (ans == 'd' || ans == 'D' || ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'c' || ans != 'C');
}

// -----> Q8
bool q8()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:8 ⬇️\n"
		 << endl;
	cout << "   Q8. Which operator is used for 'AND' \n       operation in C++?\n     a) &&                 b) ||\n     c) &|                  d) ++\n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'a' || ans == 'A')
		{
			return true;
		}
		else if (ans == 'd' || ans == 'D' || ans == 'c' || ans == 'C' || ans == 'b' || ans == 'B')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'a' || ans != 'A');
}

// -----> Q9
bool q9()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:9 ⬇️\n"
		 << endl;
	cout << "   Q9. What is the output of cout << 4 + 3 * 2;?\n     a) 14                  b) 10  \n     c) 16                  d) 12\n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'b' || ans == 'B')
		{
			return true;
		}
		else if (ans == 'd' || ans == 'D' || ans == 'c' || ans == 'C' || ans == 'a' || ans == 'A')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'b' || ans != 'B');
}

// -----> Q10
bool q10()
{
	char ans;
	cout << "\n  --------------------------------------------------\n\n   Question no:10 ⬇️\n"
		 << endl;
	cout << "   Q10. Which of the following is a correct\n        way to take input in C++?\n     a) input()               b) get()\n     c) cin >>               d) scanf()\n"
		 << endl;
	do
	{
		cout << "   Your Answer: ";
		cin >> ans;
		if (ans == 'c' || ans == 'C')
		{
			return true;
		}
		else if (ans == 'd' || ans == 'D' || ans == 'b' || ans == 'B' || ans == 'a' || ans == 'A')
		{
			return false;
		}
		else
		{
			cout << "   Please Enter Available Option " << endl;
		}
	} while (ans != 'c' || ans != 'C');
}

// -----> Answer checking
int answer_check()
{
	int score = 0;
	if (q1())
	{ // q1

		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    Good Job 👏\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl;
		cout << "\n                    Better Luck Next Time😊\n"
			 << endl;
		return score;
	}
	if (q2())
	{ // q2
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    🤩Nice\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl;
		cout << "\n                    Better Luck Next Time😊\n"
			 << endl;
		return score;
	}
	if (q3())
	{ // q3
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    Good Job 👏\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl
			 << endl;
		return score;
	}
	if (q4())
	{ // q4
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    wow 🤩\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl
			 << endl;
		return score;
	}
	if (q5())
	{ // q5
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    Great 😊\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl
			 << endl;
		return score;
	}
	if (q6())
	{ // q6
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    you are so good 💯\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl
			 << endl;
		return score;
	}
	if (q7())
	{ // q7
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    super 🙌\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl
			 << endl;
		return score;
	}
	if (q8())
	{ // q8
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    Excellent👏\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl
			 << endl;
		return score;
	}
	if (q9())
	{ // q9
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Current Score: " << score << endl;
		cout << "\n                    Great 🙌\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl
			 << endl;
		return score;
	}
	if (q10())
	{ // q10
		score += 5;
		cout << "   Correct Answer ✅\n   You earn 5 points🥳\n   Your Final Score: " << score << endl;
		cout << "\n   You are too good\n   wow 🤩 you set a new record.\n"
			 << endl;
	}
	else
	{
		cout << "   Wrong Answer ❌\n     Your total Score: " << score << endl
			 << endl;
		return score;
	}
	return score;
}
void about_game(); // only declaration

// -----> Main function()
int main()
{
	int input; // store user input
	int score = 0;
	int highscore = 0;
	do
	{
		user_interface();
		do
		{ // this loop print a message if user give input that are not available.
			cout << "   Your Input: ";
			cin >> input;
			cout << endl;
			if (input <= 0 || input > 5)
			{
				cout << " Please give available input" << endl;
			}
		} while (input <= 0 || input > 5); // -----> switch cases
		switch (input)
		{
		case 1:
			how_to_play();
			break;
		case 2:
			high_score(highscore);
			break;
		case 3:
			start();
			score = answer_check();
			if (score > highscore)
			{ // update high score
				highscore = score;
			}
			break;
		case 4:
			about_game();
			break;
		case 5:
			cout << "  🙏Thanks for visit... " << endl;
			cout << "  Exiting Coder Quiz Game... \n"
				 << endl;
			break;
		default:
			cout << "  Please give available input" << endl;
		}
	} while (input != 5);
	return 0;
}

// -----> 4.About
void about_game()
{
	cout << "          <----- Coder Quiz Game ----->\n\n   Made by: Ankit\n   Date of publish: 5_7_2025\n   Game: Coder Quiz Game\n   Special Thanks to:chatgpt\n   About Game: It is a console based quiz game\n   especially for coders who wants to enhance\n   their coding skill.\n"
		 << endl;
	cout << "          🙏Thanks for downloading this game🙏          \n          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		 << endl;
	char back;
	do
	{
		cout << "  => Back to main menu(y/n): ";
		cin >> back;
		cout << endl;
		if (back == 'y' || back == 'Y')
		{
			break;
		}
	} while (back != 'y' || back != 'Y');
}