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

#pragma once
#ifndef BANKING_H
#define BANKING_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Banking {
	public:
		Banking() = default; //default constructor to initialize variables

		void setInitialInvestment(double initialInvestment);
		double getInitialInvestment() const;
		void setMonthlyDeposit(double monthlyDeposit);
		double getMonthlyDeposit() const;
		void setInterestRate(double interestRate);
		double getInterestRate() const;
		void setMonths(int years);
		int getMonths() const;
		void setYears(int years);
		int getYears() const;
		bool goodInt(int lowest, int value);
		bool goodDouble(double lowest, double value);
		string centerText(string text, int length, char fill);
		void clearScreen();
		void printDataInput();
		void printDataTable();
		void runProgram();
	private:
		double InitialInvestment = 0.0;
		double MonthlyDesposit = 0.0;
		double Total = 0.0;
		double InterestRate = 0.0;
		double Interest = 0.0;
		double BeginningBalance = 0.0;
		double ClosingBalance = 0.0;
		int Months = 0;
		int Years = 0;

		bool CanBeInt(string value);
		bool CanBeDouble(string value);

		void CalcTotal();
		void CalcBalance();
		void UpdateBalances();
};

#endif // BANKING

