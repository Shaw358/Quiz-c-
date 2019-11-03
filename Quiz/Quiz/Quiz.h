#pragma once
#include <string>
#include <vector>
#include <cctype>
#include <list>

using namespace std;

class Quiz
{
private:
	int finalScore;
	std::list<string> customQuestions;
public:
	std::string questions[5];

	void setQuestion(std::string question)
	{
		customQuestions.insert(customQuestions.begin(), question);
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
		for (auto v : customQuestions)
			std::cout << v << "\n";
	}

};

