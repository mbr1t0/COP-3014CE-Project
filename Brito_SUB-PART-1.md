# Project Submission (Video Game Information)

[//]: <> (Basic markdown syntax can be found here -https://www.markdownguide.org/basic-syntax/)

[//]: <> (Copy this file and rename it based on the submission number, i.e., PART1.md. Remove all the comments and italisized text before submitting.)

In this project, I will create a program that gives video game information using C++. The program will allow the user to input the name, total hours played, price, and personal game rating from 1-5 stars for 10 video games. The user will then receive a result of total game hours, average game hours, total money spent, average game ratings, and some feedback.

## Table of Contents
1. [Statement of Independent Effort](#statement-of-independent-effort)
1. [Analysis of Specifications](#analysis-of-specifications)
    - [Main](#main)
1. [Pseudocode](#pseudocode)
1. [Flowchart](#flowchart)
1. [Test Cases](#test-cases)
1. [Code](#code)
1. [User Manual](#user-guide)
1. [References](#references)

## Statement of Independent Effort

I, ***[Miguel Brito]***, hereby certify that this is my original work completed with the assistance of the resources listed in the reference. I used these resources in the following areas: ***[Fundamental Data Types, Variables, Comments, Libraries, Output, Input, Pseudocode, Flowchart, Selection Statements, Iteration Statements, Counter Control Loop, Compound Operators, Switch Multiple-Selection Statements, Value Returning Functions, Void Functions, Pass By Reference Functions, Arrays]***.


## Analysis of Specifications

- I have chosen to use arrays to store game data. I am using arrays instead of vectors because it is simple and I know that the size will never change.
- The user will be prompted to enter the name of a game which will not be outputed.
- The user will be prompted to enter the total hours played of a game, then it will add all the inputs together and output the total hours played, and it will also divide the total by ten and output the average hours played inside a value returning function.
- The user will be prompted to enter the price of a game, then it will add all the inputs together and output the total money spent.
- The user will be prompted to enter a personal game rating of a game, then it will add all the inputs together, divide the total by ten, and output the average game ratings and feedback.

### Main

| Input | Process | Output |
| -------- | -------- | -------- |
| Game name | Prompts game name | None |
| Game hours | Promptes game hours and adds them together, and divides by ten inside a value returning function | Total hours played and average hours played |
| Game price | Prompts game price and adds them together | Total money spent |
| Game rate | Prompts game rate and adds them together then divides by ten | Average game ratings and feedback |


## Pseudocode

```text=
BEGIN
    // The program will allow the user to input: 
    // the name, total hours played, price, and personal rating from 1-5 stars for 10 video games.
    // The user will then recieve a result of: 
    // total game hours, average game hours, total money spent, average game ratings and some feedback.

    // Declare arrays that store game data
	DECLARE Integer gameNum = 10 // Number of games
	DECLARE String gameNames[gameNum] AS Array
	DECLARE Real gameHours[gameNum] AS Array
	DECLARE Real gamePrices[gameNum] AS Array
	DECLARE Real gameRatings[gameNum] AS Array

    // Declare variables for overall statistics
	DECLARE Real totalHours = 0.0
	DECLARE Real totalMoney = 0.0
	DECLARE Real totalRate = 0.0
	DECLARE Real averageHours = 0.0
	DECLARE Real averageRate = 0.0

	// Void function to display results
	FUNCTION displayResults()
		OUTPUT “Total hours played: “, totalHours, “ hours”
		OUTPUT  "Average hours played: “, averageHours, " hours"
		OUTPUT "Total money spent: $”, totalMoney
		OUTPUT "Average game ratings: “, averageRate, “%”
	END FUNCTION

	// Value-returning funciton to calculate average hours played
	FUNCTION calculateAverageHours()
		RETURN totalHours / gameNum
	END FUNCTION

	// Pass-by-reference function to calculate and update average rate
	FUNCTION updateAverageRate(averageRate)
		SET averageRate = totalRate / gameNum
	END FUNCTION

	// Main program starts
	// Prompts user to enter following information
	OUTPUT "Enter the following information for 10 different video games."
	
	// Prompts user to enter following information for 10 games
	// Loops 10 times
	FOR i = 0 TO gameNum - 1
		OUTPUT “Game “, i + 1, “:” 

		// Prompts user to enter name of the video game
		OUTPUT "What is the name of this video game?: "
		INPUT gameNames[i]

		// Prompts user to enter total hours played on the game
		// Loops until Input is Positive
		DO WHILE gameHours[i] < 0
			OUTPUT "How many total hours have you played?: "
			INPUT gameHours[i]
			IF gameHours[i] < 0 THEN
				OUTPUT "Error: Enter a valid number that is not negative."
			END IF
		END DO WHILE

		// Prompts user to enter price of the game
		// Loops until Input is Positive
		DO WHILE gamePrices[i] < 0
			OUTPUT "What is the price of the video game?: $"
			INPUT gamePrices[i]
			IF gamePrices[i] < 0 THEN
				OUTPUT "Error: Enter a valid number that is not negative."
			END IF
		END DO WHILE

		// Prompts user to enter personal game rating
		// Loops until input is ranged from 1-5
		DO WHILE gameRatings[i] < 1.0 OR gameRatings[i] > 5.0
			OUTPUT "What would you rate this game from a scale of 1-5 stars?: "
			INPUT gameRatings[i]
			IF gameRatings[i] < 1.0 OR gameRatings[i] > 5.0 THEN
				OUTPUT "Error: Enter a valid number that ranges from 1-5."
			END IF
		END DO WHILE
		
		// All variables will update every loop
		SET totalHours = totalHours + gameHours[i]
		SET totalMoney = totalMoney + gamePrices[i]
		SET totalRate = totalRate + gameRatings[i]
	END FOR

	// Calculate the average game hours
	SET averageHours = calculateAverageHours()

	// Update the average rate
	CALL updateAverageRate(averageRate)

	// Display results
	CALL displayResults()

	// Declare category variable
	DECLARE Integer category

	// Assigns category with if statements
	IF averageRate >= 4.0 AND averageRate <= 5.0 THEN 
		SET category = 1
	ELSE IF averageRate >= 3.0 AND averageRate < 4.0 THEN 
		SET category = 2
	ELSE IF averageRate >= 0 AND averageRate < 3.0 THEN 
		SET category = 3
	ELSE
		SET category = 4
	END IF

	// Outputs feedback with switch statements
	SWITCH category
		CASE 1:
			OUTPUT "Wow! Some of these video games must be fun to play!"
		BREAK
		CASE 2:
			OUTPUT "Not bad! Some of these video games must be pretty decent!"
		BREAK
		CASE 3:
			OUTPUT "Ouch! Some of these video games must not be fun."
		BREAK
		DEFAULT:
			OUTPUT "Error."
		BREAK
	END SWITCH
END
```

## Flowchart

[Flowchart](Brito_FLOWCHART.png)

[//]: <> (The syntax to add an image can be found here - https://www.markdownguide.org/basic-syntax/#images-1)

## Test Cases

|Case #|Case Description|Input|Condition gameRate < 1.0 OR <br/>gameRate > 5.0|Output|
|:---:|:---|:---|:---|:---|
|1|Rating that should be approved|gameRate = 1|False|Approved|
|2|Rating that should be approved (edge case)|gameRate = 5|False|Approved|
|3|Rating that should not be approved|gameRate = 10|True|Not Approved|
|4|Rating that should not be approved|gameRate = -1|True|Not Approved|
|5|Rating that should not be approved|gameRate = 5.1|True|Not Approved|


## Code

[Code](Brito_code.cpp) <br/>

## User Manual

[User Manual](Brito_GUIDE.md) <br/>
_Updated: **[12/5/2024]**_

## References

- Coote, Vanessa (2024, September 3) Chapter 2: Intro to C++ Programming
- Coote, Vanessa (2024, September 19) Chapter 3: Control Statements and Algorithm Development (Part 1)
- Coote, Vanessa (2024, October 15) Chatper 4: Control Statements (Part 2)
- Coote, Vanessa (2024, November 7) Chaptet 5: Functions and Intro to Function Templates
- Coote, Vanessa (2024, November 19) Chapter 6: Arrays, Vectors, Ranges, and Functional-Style Programming
