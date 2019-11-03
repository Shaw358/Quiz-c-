#pragma once
#include <string>
#include <vector>
#include <cctype>
using namespace std;

class Quiz
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
		for (int i = 0; i < customQuestions.size(); i++)
		{
			std::cout << customQuestions[indexer];
			indexer++;
		}
	}

};

