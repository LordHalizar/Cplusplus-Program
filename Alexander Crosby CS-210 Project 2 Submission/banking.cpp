/*
* Alexander Ryan Crosby
* CS - 210 Programming Languages
* October 5th, 2025
* 5 - 3 Project Two Submission
*
* AIRGEAD BANKING APP:
* Banking application meant to aid in teaching high school students the concepts of fiscal responsibility.
* This application allows users to input an initial investment, a monthly deposit amount, an annual interest
* rate, and the number of years of initial investment. From this data, the program will create two data tables
* to show the user how they expect to see their investments grow, with or without the monthly deposits, and encourage
* them to try out different inputs for comparison.
*/

#include "banking.h"

/* Sets initialInvestment value*/
void Banking::setInitialInvestment(double initialInvestment)
{
	this->InitialInvestment = initialInvestment;
	this->BeginningBalance = initialInvestment;
}

/* Gets initialInvestment value*/
double Banking::getInitialInvestment() const
{
	return this->InitialInvestment;
}

/* Sets monthlyDeposit value*/
void Banking::setMonthlyDeposit(double monthlyDeposit)
{
	this->MonthlyDesposit = monthlyDeposit;
}

/* Gets monthlyDeposit value*/
double Banking::getMonthlyDeposit() const
{
	return this->MonthlyDesposit;
}

/* Sets interestRate value*/
void Banking::setInterestRate(double interestRate)
{
	this->InterestRate = interestRate;
}

/* Gets interestRate value*/
double Banking::getInterestRate() const
{
	return this->InterestRate;
}

/* Sets months value*/
void Banking::setMonths(int months)
{
	this->Months = months;
}

/* Gets months value*/
int Banking::getMonths() const
{
	return this->Months;
}

/* Sets years value*/
void Banking::setYears(int years)
{
	this->Years = years;
	setMonths(Years * 12);
}

/* Gets years value*/
int Banking::getYears() const
{
	return this->Years;
}

/* Checks if integer is higher than minimum allowed value for input entry */
bool Banking::goodInt(int lowest, int value)
{	
	if (value < lowest) {
		return false;
	}
	else {
		return true;
	}
}

/* Checks is doulbe is higher than minmum allowed value for input entry */
bool Banking::goodDouble(double lowest, double value)
{
	if (value < lowest) {
		return false;
	}
	else {
		return true;
	}
}

/* Centers and formats the entered text */
string Banking::centerText(string text, int length, char fill)
{
	int textLength = text.length();
	string centeredText = "";

	if (textLength >= length) {
		return text;
	}
	else {
		int charsNeeded = (length - textLength);
		int paddingNeeded = (charsNeeded / 2);
		string leftPadding = string(paddingNeeded, fill);
		string rightPadding = leftPadding;
		centeredText = (leftPadding + text + rightPadding);

		if (charsNeeded % 2 != 0) {
			centeredText.insert(0, 1, fill);
		}

		return (centeredText);
	}
}
/* Clears the screen for when program displays update */
void Banking::clearScreen()
{
	cout << "\033[2J\033[1;1H"; // clears the screen
}

/* Primary function for both printing user input menu, asking for user entries, and updating the input menu with entered user values */
void Banking::printDataInput()
{
	int inputsEntered = 0;
	char fill = '*';
	int menuWidth = centerText(" Data Input ", 30, fill).length();
	
	string inputInvestment = "";
	string inputDeposit = "";
	string inputInterest = "";
	string inputYears = "";

	string prompt = "";

	do {
		clearScreen();

		for (int i = 0; i < menuWidth; i++) {
			cout << fill;
		}
		cout << endl;
		cout << centerText(" Data Input ", 30, fill) << endl;
		
		if (inputsEntered >= 1) { // If first entry is entered, input menu will display $ together with user input
			cout << "Initial Investment Amount: $" << inputInvestment << endl;
		}
		else {
			cout << "Initial Investment Amount: " << inputInvestment << endl;
		}
		
		if (inputsEntered >= 2) { // If second entry is entered, input menu will display $ together with user input
			cout << "Monthly Deposit: $" << inputDeposit << endl;
		}
		else {
			cout << "Monthly Deposit: " << inputDeposit << endl;
		}
		
		if (inputsEntered >= 3) { // If third entry is entered, input menu will display % together with user input
			cout << "Annual Interest: " << inputInterest << "%" << endl;
		}
		else {
			cout << "Annual Interest: " << inputInterest << endl;
		}

		cout << "Number of Years: " << inputYears << endl;

		switch (inputsEntered) {
			case 0: // inputInvestment
				prompt = "Enter Initial Investment: ";
				cout << prompt;
				cin >> inputInvestment;
				/* Loop that checks if entry is both a valid double and is above minimum allowed value */
				do {
					if (!CanBeDouble(inputInvestment)) {
						cout << "Incorrect input - try again." << endl;
						cout << prompt;
						cin >> inputInvestment;
					}
					else if (!goodDouble(0, stod(inputInvestment))) {
						cout << "Incorrect input - value must be higher than 0." << endl;
						cout << prompt;
						cin >> inputInvestment;
					}
				} while (!CanBeDouble(inputInvestment) || !goodDouble(0, stod(inputInvestment))); // Exits loop if entry meets requirements
				setInitialInvestment(stod(inputInvestment));
				inputsEntered++;
				continue;
			case 1: // inputDeposit
				prompt = "Enter Monthly Deposit: ";
				cout << prompt;
				cin >> inputDeposit;
				/* Loop that checks if entry is both a valid double and is above minimum allowed value */
				do {
					if (!CanBeDouble(inputDeposit)) {
						cout << "Incorrect input - try again." << endl;
						cout << prompt;
						cin >> inputDeposit;
					}
					else if (!goodDouble(0, stod(inputDeposit))) {
						cout << "Incorrect input - value must be higher than 0." << endl;
						cout << prompt;
						cin >> inputDeposit;
					}
				} while (!CanBeDouble(inputDeposit) || !goodDouble(0, stod(inputDeposit))); // Exits loop if entry meets requirements
				setMonthlyDeposit(stod(inputDeposit));
				inputsEntered++;
				continue;
			case 2: // inputInterest
				prompt = "Enter Annual Interest: ";
				cout << prompt;
				cin >> inputInterest;
				/* Loop that checks if entry is both a valid double and is above minimum allowed value */
				do {
					if (!CanBeDouble(inputInterest)) {
						cout << "Incorrect input - try again." << endl;
						cout << prompt;
						cin >> inputInterest;
					}
					else if (!goodDouble(0, stod(inputInterest))) {
						cout << "Incorrect input - value must be higher than 0." << endl;
						cout << prompt;
						cin >> inputInterest;
					}
				} while (!CanBeDouble(inputInterest) || !goodDouble(0, stod(inputInterest))); // Exits loop if entry meets requirements
				setInterestRate(stod(inputInterest));
				inputsEntered++;
				continue;
			case 3: //inputYears
				prompt = "Enter Number of Years: ";
				cout << prompt;
				cin >> inputYears;
				/* Loop that checks if entry is both a valid integer and is above minimum allowed value */
				do {
					if (!CanBeInt(inputYears)) {
						cout << "Incorrect input - try again." << endl;
						cout << prompt;
						cin >> inputYears;
					}
					else if (!goodInt(0, stoi(inputYears))) {
						cout << "Incorrect input - value must be higher than 0." << endl;
						cout << prompt;
						cin >> inputYears;
					}
				} while (!CanBeInt(inputYears) || !goodInt(0, stoi(inputYears))); // Exits loop if entry meets requirements
				setYears(stoi(inputYears));
				inputsEntered++;
				continue;
			case 4: // Press any key to continue...
				prompt = "Press any key to continue... ";
				cout << prompt;
				cin.ignore();
				cin.get();
				inputsEntered++;
			default:
				if (inputsEntered != 5) { // Temporary fix. Was unable to find out how to properly break away from loop without incrementing conditional parameter
					cout << "An error has occurred. This should not be here..." << endl;
				}
		}
	} while (inputsEntered <= 4);
}

/* Prints out data table of investment/earnings information based on previous user entries.
*  Length of entries is determined by the number of years entered in by the user previously. 
*  Individual entries are given per month in each given year.
*/
void Banking::printDataTable()
{
	int y = 1;
	string yearText = "";

	/* menuWidth variable used to determine the standard width of the data table */
	int menuWidth = centerText("Balance and Interest Without Additional Monthly Deposits", 100, ' ').length();

	clearScreen();

	cout << centerText("Balance and Interest Without Additional Monthly Deposits", 100, ' ') << endl;
	for (int i = 0; i < menuWidth; i++) { // Prints top line of the data table
		cout << "=";
	}
	cout << endl;

	/* Basic format for table field */
	cout << right << setw(6) << "Month";
	cout << right << setw(20) << "Opening Amount";
	cout << right << setw(20) << "Deposited Amount";
	cout << right << setw(15) << "Total";
	cout << right << setw(15) << "Interest";
	cout << right << setw(20) << "Closing Balance";
	cout << endl;

	for (int i = 0; i < menuWidth; i++) {
		cout << "-";
	}
	cout << endl;

	for (int i = 1; i <= Months; i++) {

		CalcTotal(); // Calculate total
		CalcBalance(); // Calculate interest and closing balance

		/* Basic format for data table entry rows */
		cout << right << setw(6) << i;
		cout << right << setw(20) << fixed << setprecision(2) << BeginningBalance;
		cout << right << setw(20) << fixed << setprecision(2) << MonthlyDesposit;
		cout << right << setw(15) << fixed << setprecision(2) << Total;
		cout << right << setw(15) << fixed << setprecision(2) << Interest;
		cout << right << setw(20) << fixed << setprecision(2) << ClosingBalance;
		cout << endl;
		if (i % 12 == 0) { // Prints year divider line after every 12 months of entries
			yearText = " Year " + to_string(y) + " ";
			cout << centerText(yearText, 100, '*') << endl;
			y++;
		}

		UpdateBalances(); // Update beginning balance value as closing balance value for later entry iteration
	}
}

/* Overarching function used to run all necessary program functions together */
void Banking::runProgram()
{
	printDataInput();
	printDataTable();
}

/* Checks whether of not the tested value can be converted from a string into an integer */
bool Banking::CanBeInt(string value)
{	
	try {
		stoi(value);
		return true;
	}
	catch (const invalid_argument&) {
		return false;
	}
}

/* Checks whether of not the tested value can be converted from a string into a double */
bool Banking::CanBeDouble(string value)
{
	try {
		stoi(value);
		return true;
	}
	catch (const invalid_argument&) {
		return false;
	}
}

/* Calculates the total of the beginning balance and the Monthly deposit as set by the user */
void Banking::CalcTotal()
{
	Total = BeginningBalance + MonthlyDesposit;
}

/* Calculates the interest and closing balance as set by previous user entries */
void Banking::CalcBalance()
{
	Interest = (BeginningBalance + MonthlyDesposit) *((InterestRate / 100) / 12);
	ClosingBalance = (BeginningBalance + MonthlyDesposit + Interest);
}

/* Updates the beginning balance to equal the previously determined closing balance.
*  This is for later iteration of subsequent monthly data table entries.
*/
void Banking::UpdateBalances()
{
	BeginningBalance = ClosingBalance;
}
