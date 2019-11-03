#pragma once
#include <string>
#include <vector>
#include <cctype>
using namespace std;

class QuizStats
{
private:
	int finalScore;
public:
	std::string questions[5];

	std::vector<string> customQuestions;

	void setQuestion(std::string question)
	{
		customQuestions.push_back(question);
	}

	void setScore(int score)
	{
		finalScore += score;
	}

	int getScore()
	{
		return (finalScore);
	}

	void getQuestions()
	{
		int indexer;
		indexer = 0;
		for (int i = 0; i < sizeof(customQuestions); i++)
		{
			std::cout << customQuestions[indexer] << std::endl;
			indexer++;
		}
	}

};

