// The program will allow the user to input: 
// the name, total hours played, price, and personal rating from 1-5 stars for 5 video games.
// The user will then recieve a result of: 
// all average game hours, total money spent, average game ratings and some feedback.

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    string gameName;
    int gameHours, gameRate, averageHours, totalRate;
    float gamePrice, totalMoney, averageRate;
    int counter{5}; // Initialization

	// Prompts user to enter following information
    cout << "Enter the following information for 5 different video games.";

    // Create a function to display results
    void displayResults() {
        cout << "Average hours played: " << averageHours << " hours";
        cout << "Total money spent: $" << totalMoney;
        cout << "Average game ratings: " << averageRate;
    }

    // Prompts user to enter following Informaion
	// Loops 5 times
    do(counter > 0) { // Test
        
        // Prompts user to enter name of the video game
		cout << "What is the name of this video game?: ";
		cin >> gameName;

		// Prompts user to enter total hours played on the game
		// Loops until Input is Positive
        do() {
            cout << "How many total hours have you played?: ";
            cin >> gameHours;
            if gameHours < 0 {
                cout << "Error: Enter a valid number that is not negative.";
            }while gameHours < 0;
        }

        // Prompts user to enter price of the game
		// Loops until Input is Positive
        do() {
            cout << "What is the price of the video game?: $";
            cin >> gamePrice;
            if gamePrice < 0 {
                cout << "Error: Enter a valid number that is not negative.";
            }while gamePrice < 0;
        }

        // Prompts user to enter personal game rating
		// Loops until input is ranged from 1-5
        do() {
            cout <<
            cin >> 
            if gameRate < 0 || gameRate > 5 {
                cout << "Error: Enter a valid number that ranges from 1-5.";
            }while gameRate < 0 || gameRate > 5;
        }

        // All variables will update every loop
        counter = counter - 1; // Update
        averageHours = averageHours + gameHours;
        totalMoney = totalMoney + gamePrice;
        totalRate = totalRate + gameRate;
    }

    // Set and calculate the average rate into a percentage
    averageRate = totalRate / 5;

    // Display results
    displayResults();

    // Outputs feedback with if statements
    if averageRate >= 4 && averageRate <= 5 {
        cout << "Wow! Some of these video games must be fun to play!";
    }
    else {
        if averageRate > 3 && averageRate < 4 {
            cout << "Not bad! Some of these video games must be pretty decent!";
        }
        else {
            if averageRate > 0 && averageRate < 3 {
                cout << "Ouch! Some of these video games must not be fun.";
            }
            else {
                cout << "Error.";
            }
        }
    }

    return 0;
}