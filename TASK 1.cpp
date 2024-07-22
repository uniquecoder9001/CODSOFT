//      TASK 1 :- NUMBER GUESSING GAME

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    cout << "Enter your guess limit: ";
    int limit; 
    cin >> limit;
    srand( time(0) ^ clock() );
    const int num = rand() % limit;
    
    while(true) 
    {
        cout << "Enter your guess: ";
        int guess;
        cin >> guess;
        if(guess < num)
        {
            cout << "Your guess is too small, please try again...\n";
            continue;
        }
        else  if (guess > num)
        {
            cout << "Your guess is too large, please try again...\n";
            continue;
        }
        else
        {
            cout << "You have guessed correctly!\n";
            break;
        }
    }
    return 0;
}