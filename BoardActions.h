// ************************************************************
// File:    		BoardActions.h
// Assignment:  Clayfield College Year 8 Robotics - Monopoly
// Author:  		Jennifer Lollback
// Date:				08/11/2018
// ************************************************************

// Setup the Monopoly Board
const int BOARD_POSITIONS = 14;
char* boardLayout[BOARD_POSITIONS];
void SetupBoard()
{
	boardLayout[0] = "Go";
	boardLayout[1] = "Ashburn";
	boardLayout[2] = "Radcliffe";
	boardLayout[3] = "Chance";
	boardLayout[4] = "Get 3 Infringements";
	boardLayout[5] = "Youngman";
	boardLayout[6] = "Chance";
	boardLayout[7] = "Henderson";
	boardLayout[8] = "Campbell";
	boardLayout[9] = "Chance";
	boardLayout[10] = "Lunch";
	boardLayout[11] = "Gibson";
	boardLayout[12] = "Eagle Junction Train Station";
	boardLayout[13] = "Chance";
}


// Structure to hold action and chance details
typedef struct action_data
{
	int amount;
	string *lineOne;
	string *lineTwo;
	string *lineThree;
}Action;


// Setup of actions
const int MAX_ACTIONS = 10;
Action gHouseActions[MAX_ACTIONS];
void SetupAction(int index, int amount, string *lineOne, string *lineTwo, string *lineThree)
{
	gHouseActions[index].amount = amount;
	gHouseActions[index].lineOne = lineOne;
	gHouseActions[index].lineTwo = lineTwo;
	gHouseActions[index].lineThree = lineThree;
}

void SetupActions()
{
    SetupAction(0, +100, "Your house", "lockers are", "the tidiest!");
    SetupAction(1, -100, "Taking bags", "to class? You", "know better.");
    SetupAction(2, -200, "You know not", "to leave your", "locker open.");
    SetupAction(3, +300, "Offering to", "clean lockers", "at lunch!");
    SetupAction(4, +200, "Cleaning up", "the litter of", "other people.");
    SetupAction(5, +100, "You become", "a peer mentor", "");
    SetupAction(6, +200, "You are a", "buddy to new", "students.");
    SetupAction(7, -150, "You've lost", "your hat,", "again.");
    SetupAction(8, -200, "Littering in", "the lockers! That", "isn't allowed.");
    SetupAction(9, +200, "You help out", "at the house", "tuckshop!");
}


// Setup of Chance
const int MAX_CHANCE = 10;
Action gChanceActions[MAX_CHANCE];
void SetupChance(int index, int amount, string *lineOne, string *lineTwo, string *lineThree)
{
	gChanceActions[index].amount = amount;
	gChanceActions[index].lineOne = lineOne;
	gChanceActions[index].lineTwo = lineTwo;
	gChanceActions[index].lineThree = lineThree;
}

void SetupChanceActions()
{
    SetupChance(0, +100, "Win a Lux", "Award!", "");
    SetupChance(1, -250, "Uh-oh! You", "forgot your", "ribbon!");
    SetupChance(2, -100, "Oops! You", "forgot your", "HPE uniform");
    SetupChance(3, +250, "Get a half", "pocket for", "sports.");
    SetupChance(4, +200, "Your team", "beats BGGS", "in your game.");
    SetupChance(5, +200, "You win a", "speaking", "contest! WOW!");
    SetupChance(6, +200, "You are", "chosen as", "house leader!");
    SetupChance(7, +200, "You perform", "well in your", "Maths exam!");
    SetupChance(8, +200, "You've lost", "your hat, yet", "again...");
    SetupChance(9, +200, "Your QG Team", "wins the", "premiership!");
}
