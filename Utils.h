// ************************************************************
// File:        Utils.h
// Assignment:  Clayfield College Year 8 Robotics - Monopoly
// Author:  		Jennifer Lollback
// Date:				08/11/2018
// ************************************************************



// Helper function to generate a random number
int GetRandom(int min, int max)
{
	srand(nSysTime);  // generate seed for rand() from current system time

	int randomNumber = min + random(max - min);

	return randomNumber;
}

// Roll Dice
int RollDice()
{
	return GetRandom(2, 12);
}


// Helper function to display text on EV3 LCD
void DisplayLines(string *lineOne, string* lineTwo, string *lineThree, int amount)
{
	displayCenteredBigTextLine(1, "Monopoly Solo");
	drawLine(0, 100, 180, 100);
	displayBigTextLine(5, *lineOne);
	displayBigTextLine(7, *lineTwo);
	displayBigTextLine(9, *lineThree);

	if (amount < 0)
	{
		displayBigTextLine(11, "Lose $%u", abs(amount)); // absolute (abs) removes the sign (+ or -) from the integer
		setLEDColor(ledRedFlash);
		wait1Msec(2000);
		setLEDColor(ledOff);
	}

	if (amount == 0)
	{
		displayBigTextLine(11, "");

	}

	if (amount > 0)
	{
		displayBigTextLine(11, "Earn $%u", amount);
		setLEDColor(ledGreenFlash);
		wait1Msec(2000);
		setLEDColor(ledOff);
	}
}
