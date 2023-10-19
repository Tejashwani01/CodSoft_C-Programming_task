#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int random_number, answer, attempt = 0;
    random_number = rand() % 100 + 1;
    cout << "\n \n";
    cout << "\t\t\t\t *********************************************** \n";
    cout << "\t\t\t\t\t Welcome to Number Guessing Game \n";
    cout << "\t\t\t\t *********************************************** \n";
    cout << "\n In this game you have to enter any number between 1 to 100. Let's see in how many attempts, you guess the correct answer.";
    cout << "\n\n \t\t\t\t\t\t All the best :)";
    while (answer != random_number)
    {
        cout << "\n \n";
        cout << "Enter guessed number : ";
        cin >> answer;
        attempt += 1;
        if (answer == random_number)
        {
            cout << "\n \t Congratulations!!!";
            cout << "\n You have guessed it right in " << attempt << " attempts";
        }
        else if (answer < random_number)
        {
            cout << "\n Oops your guess is too low :(";
            cout << "\n Try again!!";
        }
        else if (answer > random_number)
        {
            cout << "\n Oops your guess is too high :(";
            cout << "\n Try again!!";
        }
    }
}