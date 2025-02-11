#include <iostream>
#include <string>
using namespace std;

// Function Prototype
void ProgramGreeting();

int main() {

// Source File Header
  // Homework_3.cpp
  // Shreya Sareen, CISP 360
  // October 9, 2022

ProgramGreeting();
  
// Variable Declaration for Menu Options
 char c = 'C';
 char e = 'E';
 char i = 'I';
 char q = 'Q';
 char menuOption;

// Specification B3 - Date
 string date; // Variable Declaration
 cout << "Please enter today's date (format : month/day/year) \n";
  cin >> date;
  // white-space
  cout << "" << endl;
  
// Specification A1 - Alpha Menu
  cout << "MENU OPTIONS" << endl;
  cout << "--------------" << endl;
  cout << "Communications Failure : Please type C" << endl;
  cout << "Engine Failure : Please type E" << endl;
  cout << "In-Flight Icing : Please type I" << endl;
  cout << "Quit : Please type Q" << endl;
  cout << "" << endl;  // white-space
cout << "What is your emergency situation?" << endl;
cin >> menuOption;
  cout << "" << endl;  // white-space

// Specification A2 - Menu Input Validation
// Specification B1 - Menu Input Validation
  if (menuOption == 'C' || menuOption == 'E' || menuOption == 'I' || menuOption == 'Q'){}
    else {
      cout << "Error : invalid entry \n";
      cout << "Sorry, the value you entered is not a menu option. Please try running the program again to choose your emergency situation." << endl;
    }

// Quit Menu Option Message
  if(menuOption == 'Q'){
    cout << "You have quit the program." << endl;
  }
  // white-space
cout << "" << endl;
  
// Specification C1 - Communications Failure
  if(menuOption == 'C'){
cout << "COMMUNICATIONS FAILURE" << endl;
        cout << "------------------" << endl;

    cout << "Switch To Alternate Radio\n";
  // white-space
cout << "" << endl;}
  

// Specification C3 - In-Flight Icing Option  
  float amount_ice; // Variable Declaration
if(menuOption == 'I'){
    cout << "IN-FLIGHT ICING" << endl;
        cout << "------------------" << endl;

    cout << "What is the estimated amount of ice on the wings (Please enter a value from 0 mm to 10 mm) " << endl;
    cin >> amount_ice;}

    
	if (amount_ice <= 1) {
					cout << "Please use 5% power to energize the deicing boots on the wings." << endl;
          
				} else if (amount_ice >= 1 && amount_ice <= 5) {
					cout << "Please use 20% power to energize the deicing boots on the wings." << endl;
          
				} else if (amount_ice >= 5.1 && amount_ice <= 9) {
					cout << "Please use 65% power to energize the deicing boots on the wings." << endl;
          
				} else if (amount_ice >= 9.1 && amount_ice <= 10) {
					cout << "Please use 100% power to energize the deicing boots on the wings." << endl;
				}
			
  // Specification B2 - Icing Input Validation 
  
  else { if (amount_ice <= 0 && amount_ice > 10) {
				cout << "Error : the value you entered is invalid. Please enter a value between 0 and 10 mm. Aircraft will not fly with more than 10 mm of ice.\n";}

  // Specification C2 - Engine Failure Option
   if(menuOption == 'E'){
    cout << "ENGINE FAILURE \n";
    cout << "------------------" << endl;
    
			cout << "Are you airborne? (Please type Y or N): ";
			cin.get();}

			if (cin.get() == 'Y' || cin.get() == 'y') {
				cout << "Is the electrical system working? (Please type Y or N): ";
				cin.get();
				if (cin.get() == 'Y' || cin.get() == 'y') {
					cout << "Has the engine stopped running? (Please type Y or N): ";
					cin.get();
					if (cin.get() == 'Y' || cin.get() == 'y') {
						cout << "Are you over the mountains? (Please type Y or N): ";
						cin.get();
						if (cin.get() == 'Y' || cin.get() == 'y') {
							cout << "Are you flying at night? (Please type Y or N): ";
          cin.get();
							if (cin.get() == 'Y' || cin.get() == 'y') {
								cout << "Turn on the landing light and look out the window. Do you like what you see? (Y or N): ";
								cin.get();

								if (cin.get() == 'Y' || cin.get() == 'y') {
									cout << "Make emergency landing. \n";
								} else {
									cout << "Turn off the landing light. \n";
								}
							} else {
								cout << "Make emergency landing. \n";
							}
						} else {
							cout << "Are you over water? ";
					cin.get();

							if (cin.get() == 'Y' || cin.get() == 'y') {
								cout << "Inflate your life vest, make emergency landing. \n";
							} else {
								cout << "Make emergency landing on a road. \n";
							}
						}
					} else {
						cout << "Is the outside air temperature less than 32 degrees?\n";
						cin.get();
						cout << "\n";
						if (cin.get() == 'Y' || cin.get() == 'y') {
							cout << "Turn on carburator heat. \n";
						} else {
							cout << "Switch to other fuel tank. \n";
						}
					}
				} else {
					cout << "Turn on the Master Switch. \n";
				}
			} else {
				cout << "Have a drink and call a mechanic. \n";}
      
// white-space
cout << "" << endl;
  
  }}
// Specification A3 - One Function
   void ProgramGreeting(){
         cout << "Homework_3.cpp \n";
         cout << "Shreya Sareen, CISP 360 \n";
         cout << "October 9, 2022 \n";
// white-space
cout << "" << endl;
  cout << "Welcome! This program will help you troubleshoot a possible engine failure in an Aircraft." << endl;
// white-space
cout << "" << endl;
}