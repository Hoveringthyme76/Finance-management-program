#include <iostream>
#include <string>
#include <windows.h>  //Used to delay certain parts of the program for style, might mean this program is only usuable on Windows

using namespace std;
 
/*
Use these equations for the mananging money program. Remember to use strictly classes, with a few bits of procedural programming when needed. Also make sure to create a README.
That will help with clarity on this project. You can always try to create to program using only procedural stuff, but remember to keep in mind what the final result should look like.

1. (Net income): Net income = gross income - taxes - deductions  
2. (Monthly budget balance): Money left = income - (fixed expenses + variable expenses)
3. (50/30/20 budget rule): Income = 50%Needs + 30%Wants + 20%Savings
4. (Average monthly income): average mothly income = Hourly Wage * hours per week * 4.33
5. (Overtime pay): Overtime pay = 1.5 * Hourly Rate
6. (Debt payment time): Months to pay off = Total Debt/Monthly Payment
7. (Emergency fund target): Emergency Fund = 3 to 6 * Monthly Expenses
8. (Gas cost for driving): Trip cost = Miles/MPG * Gas Price
9. (Simple Interest): Interested dollars = Principle * Interest Rate * Time
10. (Cost per Use): Cost per use = Item Price/Times Used
11. (Runway, or month's left till your account reaches $0): Current cash/monthly burn rate(expenses in a month)

*/ 

void netIncome();           //calculates net income
void mBudgetBalance();      //calculates Monthly budget balance
void fifThrTwoBudgetRule(); //calculates total income when your using the 50/30/20 budget rule
void averageMonthlyIncome();//calculates averge monthly income
void overtimePay();         //calculates Overtime Pay
void debtPaymentTime();     //calculates Debt payment time
void emFundTarget();        //calculates Emergency fund target
void gasCost();             //calculates Gas cost for driving
void simpleInterest();      //calculates Simple Interest
void costPerUse();          //calculates Cost per Use
void runway();              //calculates Runway

void optionsAvailable();    //List's any options that are available, refer to the functions that calculate something in finances
void introduction();        //A message describing what the program does


int main()
{
     char userContinues = 'Y';
     introduction();

     while(userContinues != 'n' && userContinues != 'N')
     {
          optionsAvailable();
          cout << "\nWould you like to know anything else? (y/n)";
          cin >> userContinues;
     };

   return 0;
};

void introduction()
{
     cout << "--------------------------------------------------------------------------------" << endl;

     cout << "Hello and welcome too the free one of a kind program to manage your finances!\n"
          << "Before we start working on your bills or taxes, or any other financial related needs, \n"
          << "it is important to know how you use the following program properly.\n";

     Sleep(12000);

     cout << "--------------------------------------------------------------------------------" << endl;

     cout << "Although the primariy purpose of this program is to help with your finances,\n"
          << "some of the information provided can be searched up on any search engine, like google.\n"
          << "So be sure to take everything mentioned here, with a grain of salt.\n";

     Sleep(12000);

     cout << "--------------------------------------------------------------------------------" << endl;

     cout << "You will be provided with a list of options and will be asked clarifying questions.\n"
          << "This will include input options, which are shown in between (), that will be choosen if you\n"
          << "type it. Any other inputs, after :, will accept any decimal numbers typed in.\n";


     Sleep(12000);

     cout << "--------------------------------------------------------------------------------" << endl;

     cout << "The following options are available, with what you wish to find out";

     Sleep(5000);

     cout << " in 3 ";
     Sleep(1000);
     cout << " 2 ";
     Sleep(1000);
     cout << " 1." << endl;
     Sleep(500);
     cout << "--------------------------------------------------------------------------------" << endl;

};

void optionsAvailable()
{

     int options;
     cout << "--------------------------------------------------------------------------------" << endl;

     cout << "Finance options:\n";

     cout << "--------------------------------------------------------------------------------" << endl;

     cout << "(1) Net income\n"
          << "(2) Monthly budget balance\n"
          << "(3) 50/30/20 budget rule\n"
          << "(4) Hourly pay conversion\n"
          << "(5) Overtime pay\n"
          << "(6) Debt payment time\n"
          << "(7) Emergency fund target\n"
          << "(8) Gas cost for driving\n"
          << "(9) Simple Interest\n"
          << "(10) Cost per Use\n"
          << "(11) Runway \n";
     
     cout << "--------------------------------------------------------------------------------" << endl;

     while(options < 1 || options > 11) 
     {
          cin >> options;
     };

     if(options == 1)
     {
          netIncome();
     }
     else if(options == 2)
     {
          mBudgetBalance();
     }
     else if(options == 3)
     {
          fifThrTwoBudgetRule();
     }
     else if(options == 4)
     {
          averageMonthlyIncome();
     }
     else if(options == 5)
     {
          overtimePay();
     }
     else if(options == 6)
     {
          debtPaymentTime();
     }
     else if(options == 7)
     {
          emFundTarget(); 
     }
     else if(options == 8)
     {
          gasCost();
     }
     else if(options == 9)
     {
          simpleInterest();
     }
     else if(options == 10)
     {
          costPerUse();
     }
     else if(options == 11)
     {
          runway();
     };
};


void netIncome()
{
     //(Net income): Net income = gross income - taxes - deductions

     float grossIncome, taxes, deductions;
     float netIncome;

     cout << "First, please put in your gross income: ";
     cin >> grossIncome;

     cout << "Next, please put in the taxes you have: ";
     cin >> taxes;

     cout << "Finaly input any additional deductions you made: ";
     cin >> deductions;

     netIncome = grossIncome - taxes - deductions;
     cout << "Your total net income is " << netIncome << "." << endl;

};

void mBudgetBalance()
{
     //Money left from monthly balance = income - (fixed expenses + variable expenses)

     float fixedExpenses, income, varExpenses;
     float moneyLeft;

     cout << "First, please put in your current income: ";
     cin >> income;

     cout << "Next, please place your fixed expenses: ";
     cin >> fixedExpenses;

     cout << "Now, place in your varied expenses: ";
     cin >> varExpenses;

     moneyLeft = income - (fixedExpenses + varExpenses);
     cout << "Your total budget which occurs monthly is " << moneyLeft << "." << endl;
};

void fifThrTwoBudgetRule()
{
     //Income = 50%Needs + 30%Wants + 20%Savings

     float needs, wants, savings;
     float fiftyThirtyTwentyIncome;

     cout << "First, enter the value that covers 50% of your needs: ";
     cin >> needs;

     cout << "Next, please place your fixed expenses: ";
     cin >> wants;

     cout << "Now, place in your varied expenses: ";
     cin >> savings;

     fiftyThirtyTwentyIncome = needs + wants + savings;
     cout << "Your total budget which occurs monthly is " << fiftyThirtyTwentyIncome << "." << endl;
};

void averageMonthlyIncome()
{
     //Average monthly income = Hourly Wage * hours per week * 4.33

     char complement[7] = {'A', 'm', 'a', 'z', 'i', 'n', 'g'};

     float hourWage, hrPerWeek;
     float aveMonthly;

     cout << "Hi this is the playful version of me! Pop quiz, how much do you make in an hour?\n";

     for (int i = 0; i < 3; i++)
     {
          Sleep(2000); //This sleep for some reason causes the program to act up. This should be a good way to test if you can not just make a simple program for practice
          cout << ".";
     }

     Sleep(5000);
     cout << "Oh right, here you go: ";
     cin >> hourWage;

     for (int i = 0; i < 2; i++)
     {
          cout << "Lovely, ";
          Sleep(1000);
     }

     cout << "Lovely! " << "\nNow how many hours do you usually work on? : ";
     cin >> hrPerWeek;

     for (int i = 0; i < 7; i++)
     {
          Sleep(100);
          cout << complement[i];
     }
     Sleep(5000);

     aveMonthly = hourWage * hrPerWeek * 4.33;
     cout << "\nAnd the amount of average monthly income is ";
     Sleep(7000);
     cout << aveMonthly << " Dollars!\n";
     Sleep(5000);

     cout << "Thank you and good night! Playful program out!" << endl;
}

void overtimePay()
{
     //Overtime pay = 1.5 * Hourly Rate

     float hourlyRate;
     float overtime;
     string sarcasiticComment[] = {"I ", "suppose, ", "I ", "can ", "do ", "that. "};

     cout << "Hello.";
     Sleep(2000);

     cout << " Bored version of the program is here.\n";
     Sleep(2000);

     cout << "So you want your overtime pay value?\n";
     Sleep(2000);

     cout << "Fine.\n";
     Sleep(2000);

     int whileI = 0;
     while(whileI != 6)
     {
          cout << sarcasiticComment[whileI];
          whileI++;
          Sleep(1000);
     };

     cout << "\nWhat is your hourly rate? Aka hourly pay: ";
     cin >> hourlyRate;

     if(hourlyRate <= 12.00)
     {
          cout << "Minimum wage, huh? Been there, keep it up.\n";
          Sleep(2000);
     }
     else
     {
          cout << "Ok, ok. At least the overtime pay will be good enough.\n";
          Sleep(2000);
     }


     overtime = 1.5 * hourlyRate;
     cout << "Your overtime pay is $" << overtime << endl;
     Sleep(2000);

}

void debtPaymentTime()
{
     //Months to pay off = Total Debt/Monthly Payment

     float totalDebt, monthlyPay;
     int monthsLeft;

     cout << "Debts are due, how much debt do you have?: ";
     cin >> totalDebt;

     cout << "You have a monthly pay, what is it?: ";
     cin >> monthlyPay;

     monthsLeft = totalDebt / monthlyPay;
     cout << "You have around " << monthsLeft << " months left to pay your debt.\n";

     Sleep(7000);
     cout << "Well, what are you waiting for? Deal with it!";
     Sleep(2000);

}

void emFundTarget()
{
     //Emergency Fund = 3 to 6 * Monthly Expenses
     float monthExpense;
     int monthsInEm;
     float emFund;

     cout << "What are your monthly expenses: ";
     cin >> monthExpense;

     cout << "How many months would you like to plan in your emergency fund?\n(3 or 6)";
     cin >> monthsInEm;

     emFund = monthsInEm * monthExpense;
     cout << "Your current emergency fund that lasts for " << monthsInEm << " months is: " << emFund;
     Sleep(2000); 
}

void gasCost()
{
     //Trip cost = Miles/MPG * Gas Price per gallon

     float gasPrice, milesPerGallon;
     int miles;
     float tripCost;

     cout << "What is the amount of miles you traveled?: ";
     cin >> miles;

     cout << "What is the amount of miles can you travel per gallon?: ";
     cin >> milesPerGallon;

     cout << "And finally, how much is the current gas price?: ";
     cin >> gasPrice;

     tripCost = (miles / milesPerGallon) * gasPrice;
     cout << "The total trip costed you " << tripCost << endl;
     Sleep(2000);
}

void simpleInterest()
{
     //Interest = Principle * Interest Rate * Time

     float principle, interestRate, time;
     float simpleInterest;

     cout << "Please enter how much of the original sum of money was borrowed, or invested: ";
     cin >> principle;

     cout << "Now please enter your annual interest rate: ";
     cin >> interestRate;

     cout << "Now enter the duration of time where the money was borrowed or invested in years: ";
     cin >> time;

     simpleInterest = principle * interestRate * time;
     cout << "Your total amount of interest charged on a loan or an earned deposit is " << simpleInterest << endl;
     Sleep(2000);
}

void costPerUse()
{
     //Cost per use = Item Price/Times Used

     float itemPrice;
     int timesUsed;
     float costPerUse;

     cout << "What was the item's price?: ";
     cin >> itemPrice;

     cout << "Good. Now how many times did you use this item?: ";
     cin >> timesUsed;

     costPerUse = itemPrice / timesUsed;
     cout << "The total cost every time you use the item your using is " << costPerUse << endl;
     Sleep(2000);
}

void runway()
{
     //Runway = Current cash/monthly burn rate(expenses in a month)

     float currentCash, expensePerMonth;
     float runway;

     cout << "How much cash do you currently have on you?: ";
     cin >> currentCash;

     cout << "How much of that is used on expenses per month?: ";
     cin >> expensePerMonth;

     runway = currentCash / expensePerMonth;
     cout << "Your total runway cost is " << runway << endl;
     Sleep(2000);
}
