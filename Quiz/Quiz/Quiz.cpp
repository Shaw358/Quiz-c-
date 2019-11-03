#include <iostream>
#include "Quiz.h"
#include <string>
#include "vector"
#include <cctype>


int main()
{
	Quiz quiz;
	std::string input;

	int choice;

	quiz.questions[0] = "When did World War 2 start?";
	quiz.questions[1] = "When did World War 2 end?";
	quiz.questions[2] = "When did the Soviet Union join the war (against Germany)?";
	quiz.questions[3] = "How many people died in World War 2";
	quiz.questions[4] = "When did the D-Day start?";

    std::cout << "Hello and welcome to this quick quiz about LIFE, EXISTENCE AND EVERYTHING! (but mainly about WW2! shhhh... don't tell Jesse!)\n";
	std::cout << "Are you ready? Y/N \n";

	quiz.setScore(0);

	while (true) 
	{
		std::cin >> input;
		if (input == "Y" || input == "y")
		{
			std::cout << "here we go\n";
			break;
		}
		else if (input == "N" || input == "n")
		{
			exit(0);
		}
		else if(input != "Y" || input != "y" || input != "N" || input != "n")
		{
			std::cout << "That wasn't an option... retard... Try again!" << std::endl;
		}
	}


	std::cout << quiz.questions[0] << std::endl;
	std::cout << "Answers: " << std::endl;
	std::cout << "1. 1937\n2. 1939\n3. 1944\n4. 1945" << std::endl;
	while (true) 
	{
		std::cin >> input;
		if (input == "1" || input == "2" || input == "3" || input == "4") 
		{
			choice = std::stoi(input);
			if (choice == 2)
			{
				std::cout << "Correct! The war started on the 1st of September with the invasion of Poland." << std::endl;
				quiz.setScore(1);
			}
			else
			{
				std::cout << "Wrong! The war started on the 1st of September in 1939 with the invasion of Poland." << std::endl;
			}
			break;
		}
		else 
		{
			std::cout << "Nah chief, that no number i ever heard off! Try again!" << std::endl;
		}	
	}
	

	std::cout << quiz.questions[1] << std::endl;
	std::cout << "Answers: " << std::endl;
	std::cout << "1. 1937\n2. 1939\n3. 1944\n4. 1945" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "1" || input == "2" || input == "3" || input == "4")
		{
			choice = std::stoi(input);
			if (choice == 4)
			{
				std::cout << "Correct! The war ended on the 2nd of September with the surrender of Japan." << std::endl;
				quiz.setScore(1);
			}
			else
			{
				std::cout << "Wrong! The war ended on the 2nd of September in 1945 with the surrender of Japan." << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "Nah chief, that no number i ever heard off! Try again!" << std::endl;
		}
	}

	

	std::cout << quiz.questions[2] << std::endl;
	std::cout << "Answers: " << std::endl;
	std::cout << "1. 1939\n2. 1940\n3. 1941\n4. 1942" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "1" || input == "2" || input == "3" || input == "4")
		{
			choice = std::stoi(input);
			if (choice == 3)
			{
				std::cout << "Correct! The Soviet Union entered the war on the 22nd of June when Germany invaded." << std::endl;
				quiz.setScore(1);
			}
			else
			{
			std::cout << "Wrong! The Soviet Union entered the war on the 22nd of June in 1941 when Germany invaded." << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "Nah chief, that no number i ever heard off! Try again!" << std::endl;
		}
	}


	std::cout << quiz.questions[3] << std::endl;
	std::cout << "Answers: " << std::endl;
	std::cout << "1. 10.000.000 - 20.000.000\n2. 70.000.000 - 85.000.000\n3. 45.000.000 - 60.000.00\n4. 90.000.000 - 100.000.000" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "1" || input == "2" || input == "3" || input == "4")
		{
			choice = std::stoi(input);
			if (choice == 2)
			{
				std::cout << "Correct! The war costed about 70.000.000 - 85.000.000 and is the deadliest conflict in human history." << std::endl;
				quiz.setScore(1);
			}
			else
			{
				std::cout << "Wrong! The war costed about 70.000.000 - 85.000.000 and is the deadliest conflict in human history." << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "Nah chief, that no number i ever heard off! Try again!" << std::endl;
		}
	}

	
	std::cout << quiz.questions[4] << std::endl;
	std::cout << "Answers: " << std::endl;
	std::cout << "1. 6th of June\n2. 22nd of June\n3. 1st of September\n4. 7th of December" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "1" || input == "2" || input == "3" || input == "4")
		{
			choice = std::stoi(input);
			if (choice == 1)
			{
				std::cout << "Correct! D-day would be the largest amphibious attack launched to this date." << std::endl;
				quiz.setScore(1);
			}
			else
			{
				std::cout << "Wrong! D-day would be the largest amphibious attack launched to this date." << std::endl;
			}
			break;
		}
		else
		{
			std::cout << "Nah chief, that no number i ever heard off! Try again!" << std::endl;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "" << std::endl;
	}

	if (quiz.getScore() <= 1)
	{
		std::cout << "*Angry Stalin noises*\nScore: " << quiz.getScore() << "/5";
	}
	else if (quiz.getScore() >= 2 && quiz.getScore() <= 3)
	{
		std::cout << "*Tripple chin Hirohito satisfiction noises*\nScore: " << quiz.getScore() << "/5";
	}
	else if (quiz.getScore() >= 4)
	{
		std::cout << "*Happy panzer noises*\nScore: " << quiz.getScore() << "/5";
	}

	for (int i = 0; i < 5; i++) 
	{
		std::cout << "" << std::endl;
	}

	std::cout << "Do you wish to add your own question?\nY/N" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "Y" || input == "y")
		{
			std::cout << "Okay!\n";
			break;
		}
		else if (input == "N" || input == "n")
		{
			std::cout << "thanks for playing...";
			exit(0);
		}
		else if (input != "Y" || input != "y" || input != "N" || input != "n")
		{
			std::cout << "That wasn't an option... retard... Try again!" << std::endl;
		}
	}

	int indexer = 0;
	while (true)
	{
		std::cout << "Add your question..." << std::endl;
		std::cin >> input;
		
		quiz.setQuestion(input);

		std::cout << "Do you wish to add another one? Y/N" << std::endl;
		std::cin >> input;
		if (input == "Y" || input == "y") 
		{
			std::cout << "Okay!" << std::endl;
		}
		else if (input == "N" || input == "n")
		{
			break;
		}

		if (indexer >= 4)
		{
			break;
		}
		indexer++;
	}

	indexer = 0;
	std::cout << "Questions added: " << std::endl;
	quiz.getQuestions();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
