#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;

//Function for displaying the Instructions
void displayInstructions() {
    system("cls");
    cout << endl;
    cout << endl;
    cout << "************Welcome to the Number Guessing Game*************" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "Try to guess the number. I will give you feedback after each guess." << endl;
    cout << "Press any key to go back to the main menu." << endl;
    _getch(); 
}

// function for displaying main menu
void mainMenu()
{
    system("cls");
    cout << "Number Guessing Game" << endl;
    cout << "1. See Instructions" << endl;
    cout << "2. Start Game" << endl;
    cout << "3. Quit" << endl;
}

// function for generating the random numbers
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Main function
void NumberGuessingGame()
{
    system("cls");
    int secretNumber = generateRandomNumber(1, 100);

    while (true) {

        int guess;
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == secretNumber) {
            cout << "Congratulations! You've guessed the number" << endl;
            break;
        }
        if (guess < secretNumber) {
            cout << "Too low! Enter a large number." << endl;
            continue;
        }
        if (guess > secretNumber) {
            cout << "Too high! Enter a small number." << endl;
            continue;
        }
        
    }
    cout << "Press any key to go back to the main menu." << endl;
    _getch(); 
}

int main()
{
    while (true) {
        mainMenu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
       // cin.ignore();

        switch (choice) {
        case 1:
            displayInstructions();
            break;
        case 2:
            NumberGuessingGame();
            break;
        case 3:
            cout << "Thanks for playing. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please select a valid option.Press any key to again enter your option!" << endl;
            _getch();
            
        }
    }

    return 0;
}

    


