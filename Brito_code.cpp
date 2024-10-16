// The program will allow the user to input: 
// the name, total hours played, price, and personal rating from 1-5 stars for 5 video games.
// The user will then recieve a result of: 
// all average game hours, total money spent, average game ratings and some feedback.

#include <iostream>
using namespace std;

// Declare variables
string gameName;
float gameHours, gamePrice, gameRate, averageHours, totalMoney, totalRate, averageRate;
int counter{5}; // Initialization

// Create a function to display results
void displayResults() {
    cout << "Average hours played: " << averageHours << " hours" << endl;
    cout << "Total money spent: $" << totalMoney << endl;
    cout << "Average game ratings: " << averageRate << endl;
}

int main() {
	// Prompts user to enter following information
    cout << "Enter the following information for 5 different video games." << endl;

    // Prompts user to enter following Informaion
	// Loops 5 times
    while (counter > 0) { // Test
        
        // Prompts user to enter name of the video game
		cout << "What is the name of this video game?: ";
		cin >> gameName;

		// Prompts user to enter total hours played on the game
		// Loops until Input is Positive
        do {
            cout << "How many total hours have you played?: ";
            cin >> gameHours;
            if (gameHours < 0) {
                 cout << "Error: Enter a valid number that is not negative." << endl;
            }
        } while (gameHours < 0);
       
        // Prompts user to enter price of the game
		// Loops until Input is Positive
        do {
            cout << "What is the price of the video game?: $";
            cin >> gamePrice;
            if (gamePrice < 0) {
                 cout << "Error: Enter a valid number that is not negative." << endl;
            }
        } while (gamePrice < 0);

        // Prompts user to enter personal game rating
		// Loops until input is ranged from 1-5
        do {
            cout << "What would you rate this game from a scale of 1-5 stars?: ";
            cin >> gameRate;
            if (gameRate < 0.0 || gameRate > 5.0) {
                 cout << "Error: Enter a valid number that ranges from 1-5." << endl;
            }
        } while (gameRate < 0.0 || gameRate > 5.0);

        // All variables will update every loop
        counter -= 1; // Update
        averageHours = averageHours + gameHours;
        totalMoney = totalMoney + gamePrice;
        totalRate = totalRate + gameRate;
    }

    // Set and calculate the average rate into a percentage
    averageRate = totalRate / 5.0;

    // Display results
    displayResults();

    // Outputs feedback with if statements
    if (averageRate >= 4.0 && averageRate <= 5.0) {
        cout << "Wow! Some of these video games must be fun to play!" << endl;
    }
    else {
        if (averageRate > 3.0 && averageRate < 4.0) {
            cout << "Not bad! Some of these video games must be pretty decent!" << endl;
        }
        else {
            if (averageRate > 0 && averageRate < 3.0) {
                cout << "Ouch! Some of these video games must not be fun." << endl;
            }
            else {
                cout << "Error." << enld;
            }
        }
    }

    return 0;
}