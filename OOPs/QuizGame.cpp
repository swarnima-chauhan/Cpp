#include <iostream>
#include <string>
using namespace std;

class Question
{
private:
    string questionText;
    string options[4];
    int correctOption;

public:
    Question()
    {
        questionText = "";
        correctOption = 0;
    }

    void setQuestion(string q, string o1, string o2, string o3, string o4, int correct)
    {
        questionText = q;
        options[0] = o1;
        options[1] = o2;
        options[2] = o3;
        options[3] = o4;
        correctOption = correct;
    }

    void ask(int &score)
    {
        cout << "\n"
             << questionText << "\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << "." << options[i] << endl;
        }

        int userAnswer;
        cout << "Your Answer (1-4) :";
        cin >> userAnswer;

        if (userAnswer == correctOption)
        {
            cout << " Correct!\n";
            score++;
        }
        else
        {
            cout << "Wrong! Correct answer was: " << correctOption << "." << options[correctOption - 1] << "\n";
        }
    }
};

int main()
{
    Question quiz[5];
    int score = 0;

    quiz[0].setQuestion("What is the capital of India?", "Mumbai", "Delhi", "Kolkata", "Chennai", 2);
    quiz[1].setQuestion("Who is known as the father of C++?", "Dennis Ritchie", "James Gosling", "Bjarne Stroustrup", "Steve Jobs", 3);
    quiz[2].setQuestion("What is the result of 5 * 6?", "30", "25", "20", "35", 1);
    quiz[3].setQuestion("Which planet is known as the Red Planet?", "Earth", "Mars", "Jupiter", "Venus", 2);
    quiz[4].setQuestion("Which is the largest ocean on Earth?", "Atlantic", "Indian", "Arctic", "Pacific", 4);

    cout << "🎉 Welcome to the Quiz Game 🎉\n";
    cout << "Answer the following questions:\n";

    for (int i = 0; i < 5; i++)
    {
        quiz[i].ask(score);
    }

    cout << "\n🎯 Quiz Complete!\n";
    cout << "You scored " << score << " out of 5.\n";

    if (score == 5)
        cout << "🏆 Excellent!\n";
    else if (score >= 3)
        cout << "👍 Good Job!\n";
    else
        cout << "📘 Better luck next time.\n";

    return 0;
}