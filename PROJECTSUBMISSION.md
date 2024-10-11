# Project Submission (Video Game Information)

[//]: <> (Basic markdown syntax can be found here -https://www.markdownguide.org/basic-syntax/)

[//]: <> (Copy this file and rename it based on the submission number, i.e., PART1.md. Remove all the comments and italisized text before submitting.)

_Describe what the requirements are for the project._

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

I, ***[Miguel Brito]***, hereby certify that is my original work completed without the assistance of anyone or
any outside resources.


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
	DECLARE Real counter = 5 // Initialization

	// Prompts user to enter following information
	OUTPUT "Enter the following information for 5 different video games."

	// Create a function to display results
	FUNCTION displayResults
		OUTPUT  "Average hours played: " + averageHours + " hours"
		OUTPUT "Total money spent: $" + totalMoney
		OUTPUT "Average game ratings: " + averageRate
	
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
			IF gameRate < 0 OR gameRate > 5 THEN
				OUTPUT "Error: Enter a valid number that ranges from 1-5."
			END IF
		WHILE gameRate < 0 OR gameRate > 5
		
		// All variables will update every loop
		SET counter = counter - 1 // Update
		SET averageHours = averageHours + gameHours
		SET totalMoney = totalMoney + gamePrice
		SET totalRate = totalRate + gameRate

	// Set and calculate the average rate into a percentage
	SET averageRate = totalRate / 5

	// Display results
	CALL displayResults

	// Outputs feedback with if statements
	IF averageRate >= 4 AND averageRate <= 5 THEN 
		OUTPUT "Wow! Some of these video games must be fun to play!"
	END IF
	ELSE
		IF averageRate > 3 AND averageRate < 4 THEN 
			OUTPUT "Not bad! Some of these video games must be pretty decent!"
		END IF
		ELSE
			IF averageRate > 0 AND averageRate < 3 THEN 
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

_Paste flowchart image here. Note that the image has to uploaded to your repository and then a link added here_

[//]: <> (The syntax to add an image can be found here - https://www.markdownguide.org/basic-syntax/#images-1)

## Test Cases

_Test cases should include edge cases (values near the upper and lower bounds of the allowed values), and acceptable and unacceptable values. Produce at least 5 unique cases._

**Example (remove from submission)**

| Case # | Case Description | Input | Condition (gameRate < 0 || gameRate > 5) | Output |
|:---:|:---|:---|:---:|:---|
| 1 | Rating that should be approved | gameRate = 1 | False | Approved |
| 2 | Rating that should be approved (edge case)| gameRate = 5| False | Approved |
| 3 | Rating that should not be approved | gameRate = 10 | True | Not Approved |


## Code

[Code](code.cpp) <br/>

## User Manual

[User Manual](GUIDE.md) <br/>
_Updated: **[10/10/2024]**_

## References

There were no references used in this project.
