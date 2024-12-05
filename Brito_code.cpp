// The program will allow the user to input: 
// the name, total hours played, price, and personal rating from 1-5 stars for 5 video games.
// The user will then recieve a result of: 
// total game hours, average game hours, total money spent, average game ratings and some feedback.

#include <iostream>
#include <string>
using namespace std;

// Declare arrays that store game data
const int gameNum = 10; // Number of games
string gameNames[gameNum];
float gameHours[gameNum];
float gamePrices[gameNum];
float gameRatings[gameNum];

// Declare variables for overall statistics
float totalHours = 0.0;
float totalMoney = 0.0;
float totalRate = 0.0;
float averageHours = 0.0;
float averageRate = 0.0;

// Void function to display results
void displayResults() {
    cout << "Total hours played: " << totalHours << " hours" << endl;
    cout << "Average hours played: " << averageHours << " hours" << endl;
    cout << "Total money spent: $" << totalMoney << endl;
    cout << "Average game ratings: " << averageRate << "%" << endl;
}

// Value-returning function to calculate average hours played
float calculateAverageHours(){
    return totalHours / gameNum;
}

// Pass-by-reference function to calculate and update average rate
void updateAverageRate(float &averageRate){
    averageRate = totalRate / gameNum;
}

// Main program starts
int main() {
	// Prompts user to enter following information
    cout << "Enter the following information for 10 different video games." << endl;

    // Prompts user to enter following information for 10 games
	// Loops 10 times
    for (int i = 0; i < gameNum; ++i) {
        
        // Outputs what game the user is currently inputting information on
        cout << "Game " << (i + 1) << ":" << endl;

        // Prompts user to enter name of the video game
		cout << "What is the name of this video game?: ";
		cin >> gameNames[i];

		// Prompts user to enter total hours played on the game
		// Loops until Input is Positive
        do {
            cout << "How many total hours have you played?: ";
            cin >> gameHours[i];
            if (gameHours[i] < 0) {
                 cout << "Error: Enter a valid number that is not negative." << endl;
            }
        } while (gameHours[i] < 0);
       
        // Prompts user to enter price of the game
		// Loops until Input is Positive
        do {
            cout << "What is the price of the video game?: $";
            cin >> gamePrices[i];
            if (gamePrices[i] < 0) {
                 cout << "Error: Enter a valid number that is not negative." << endl;
            }
        } while (gamePrices[i] < 0);

        // Prompts user to enter personal game rating
		// Loops until input is ranged from 1-5
        do {
            cout << "What would you rate this game from a scale of 1-5 stars?: ";
            cin >> gameRatings[i];
            if (gameRatings[i] < 1.0 || gameRatings[i] > 5.0) {
                 cout << "Error: Enter a valid number that ranges from 1-5." << endl;
            }
        } while (gameRatings[i] < 1.0 || gameRatings[i] > 5.0);

        // All variables will update every loop
        totalHours +=  gameHours[i];
        totalMoney +=  gamePrices[i];
        totalRate += gameRatings[i];
    }

    // Calculate the average game hours
    averageHours = calculateAverageHours();

    // Update the average rate
    updateAverageRate(averageRate);

    // Display results
    displayResults();

    // Declare category variable
    int category;

    // Assigns category with if statements
    if (averageRate >= 4.0 && averageRate <= 5.0) {
        category = 1;
    }
    else {
        if (averageRate >= 3.0 && averageRate < 4.0) {
            category = 2;
        }
        else {
            if (averageRate >= 0 && averageRate < 3.0) {
                category = 3;
            }
            else {
                category = 4;
            }
        }
    }

    // Outputs feedback with switch statements
    switch(category){
        case 1:
            cout << "Wow! Some of these video games must be fun to play!" << endl;
        break;
        case 2:
            cout << "Not bad! Some of these video games must be pretty decent!" << endl;
        break;
        case 3:
            cout << "Ouch! Some of these video games must not be fun." << endl;
        break;
        default:
            cout << "Error." << endl;
        break;
    }

    return 0;
}