# Project Submission (Video Game Information)

[//]: <> (Basic markdown syntax can be found here -https://www.markdownguide.org/basic-syntax/)

[//]: <> (Copy this file and rename it based on the submission number, i.e., PART1.md. Remove all the comments and italisized text before submitting.)

In this project, I will create a program that gives video game information using C++. The program will allow the user to input the name, total hours played, price, and personal game rating from 1-5 stars for 5 video games. The user will then receive a result of average game hours, total money spent, average game ratings, and some feedback.

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

I, ***[Miguel Brito]***, hereby certify that this is my original work completed with the assistance of the resources listed in the reference. I used these resources in the following areas: ***[Fundamental Data Types, Variables, Comments, Libraries, Output, Input, Pseudocode, Flowchart, Selection Statements, Iteration Statements, Counter Control Loop, Compound Operators, Switch Multiple-Selection Statements]***.


## Analysis of Specifications

- The user will be prompted to enter the name of a game which will not be outputed.
- The user will be prompted to enter the total hours played of a game, then it will add all the inputs together and output the average hours played.
- The user will be prompted to enter the price of a game, then it will add all the inputs together and output the total money spent.
- The user will be prompted to enter a personal game rating of a game, then it will add all the inputs together, divide the total by five, and output the average game ratings and feedback.

### Main

| Input | Process | Output |
| -------- | -------- | -------- |
| Game name | Prompts game name | None |
| Game hours | Promptes game hours and adds them together | Average hours played |
| Game price | Prompts game price and adds them together | Total money spent |
| Game rate | Prompts game rate and adds them together then divides by five | Average game ratings and feedback |


## Pseudocode

```text=
BEGIN
    // The program will allow the user to input: 
    // the name, total hours played, price, and personal rating from 1-5 stars for 5 video games.
    // The user will then recieve a result of: 
    // all average game hours, total money spent, average game ratings and some feedback.

    // Declare variables
	DECLARE String gameName
	DECLARE Real gameHours, gamePrice, gameRate, averageHours, totalMoney, totalRate, averageRate
	DECLARE Integer counter = 5 // Initialization

	// Create a function to display results
	FUNCTION displayResults
		OUTPUT  "Average hours played: " + averageHours + " hours"
		OUTPUT "Total money spent: $" + totalMoney
		OUTPUT "Average game ratings: " + averageRate

	// Prompts user to enter following information
	OUTPUT "Enter the following information for 5 different video games."
	
	// Prompts user to enter following Informaion
	// Loops 5 times
	WHILE counter > 0 // Test
	
		// Prompts user to enter name of the video game
		OUTPUT "What is the name of this video game?: "
		INPUT gameName

		// Prompts user to enter total hours played on the game
		// Loops until Input is Positive
		DO
			OUTPUT "How many total hours have you played?: "
			INPUT gameHours
			IF gameHours < 0 THEN
				OUTPUT "Error: Enter a valid number that is not negative."
			END IF
		WHILE gameHours < 0

		// Prompts user to enter price of the game
		// Loops until Input is Positive
		DO 
			OUTPUT "What is the price of the video game?: $"
			INPUT gamePrice
			IF gamePrice < 0 THEN
				OUTPUT "Error: Enter a valid number that is not negative."
			END IF
		WHILE gamePrice < 0

		// Prompts user to enter personal game rating
		// Loops until input is ranged from 1-5
		DO
			OUTPUT "What would you rate this game from a scale of 1-5 stars?: "
			INPUT gameRate
			IF gameRate < 0.0 OR gameRate > 5.0 THEN
				OUTPUT "Error: Enter a valid number that ranges from 1-5."
			END IF
		WHILE gameRate < 0.0 OR gameRate > 5.0
		
		// All variables will update every loop
		SET counter = counter - 1 // Update
		SET averageHours = averageHours + gameHours
		SET totalMoney = totalMoney + gamePrice
		SET totalRate = totalRate + gameRate

	// Set and calculate the average rate into a percentage
	SET averageRate = totalRate / 5.0

	// Display results
	CALL displayResults

	// Outputs feedback with if statements
	IF averageRate >= 4.0 AND averageRate <= 5.0 THEN 
		OUTPUT "Wow! Some of these video games must be fun to play!"
	END IF
	ELSE
		IF averageRate > 3.0 AND averageRate < 4.0 THEN 
			OUTPUT "Not bad! Some of these video games must be pretty decent!"
		END IF
		ELSE
			IF averageRate > 0 AND averageRate < 3.0 THEN 
				OUTPUT "Ouch! Some of these video games must not be fun."
			END IF
			ELSE
				OUTPUT "Error."
			END ELSE
		END ELSE
	END ELSE

END
```

## Flowchart

[Flowchart](Brito_FLOWCHART.png)

[//]: <> (The syntax to add an image can be found here - https://www.markdownguide.org/basic-syntax/#images-1)

## Test Cases

|Case #|Case Description|Input|Condition gameRate < 0.0 OR <br/>gameRate > 5.0|Output|
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
_Updated: **[10/12/2024]**_

## References

- Coote, Vanessa (2024, September 3) Chapter 2: Intro to C++ Programming
- Coote, Vanessa (2024, September 19) Chapter 3: Control Statements and Algorithm Development (Part 1)
- Coote, Vanessa (2024, October 15) Chatper 4: Control Statements (Part 2)
