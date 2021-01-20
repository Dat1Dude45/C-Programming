#include <iostream>
#include <string>
#include <ctime>		    // for seeding random numbers 			srand()
#include <cstdlib>		    // for generating random numbers		rand()
#include <unistd.h>		    // for sleep() function

using namespace std;

string userName;        //placement for strings

int main() {
if(true) {		    //introduce player, ask for username
	
	

    cout << "\nWelcome player!!\n" << "Enter your username.\n";
    cin >> userName;
    cout << "Hello " << userName << "!!\n" << "Welcome to Adventure Game 1!!\n\n";


	}

	

if(true) {		    // Start the game turn by turn, notifying the amount of points blocked or damaged by
		int block = 0;        //placement for integers
		int attack = 0;
		int health = 10;
		int turns = 0;
		
		unsigned int timerSeconds = 2;
		unsigned int encounterSec = 4;
		srand(time(0));

		cout << "While walking on a trail, you have encountered a troll. He has a large club and looks aggressive, and he won't let you out of the forest without a fight!\n\n";
		sleep(encounterSec);

		do {
			
			sleep(timerSeconds); 		    // 2 second interval between turns
		
			turns++;		//Turns adds one per loop
			cout << "Turn " << turns << "\n";

				
				attack = (rand() % 4) + 0;	    	// random numbers between 0 - 4 for both block and attack
				block = (rand() % 4) + 0;
				
						
					if(block >= attack) {
								cout << "You have successfully blocked the attack!\n";
								cout << block << " block!\n\n";
								}
								
					else {
						health -= attack;		    // lose health if block is less than attack
							cout << "You have been stabbed!!\n";
							cout << attack << " damage!\n\n";
							}
					
		}while(health > 0 && turns < 4);

			if(health > 0){
				cout << "Congratulations! You have survived your first fight!!\n\n";
			
			if(health <= 7){
				cout << "But your health is low and currently at: " << health << ", you need to see a doctor!!\n\n";
				}
			}
			else if(health == 0) {
				cout << "YOU'RE DEAD!!\n\n";
				}
			
				
			
			


	string answer;
	bool debug = true;

	cout << "\nWould you like to see the debug? (Yes/No)\n";
	cin >> answer;
	
	if(answer == "Yes" || answer == "yes" || answer == "yeah" || answer == "yea") { 
		cout << "Sweet, lemme show you real quick...\n";

		if(debug){
			cout << "health " << health << "\n";
			
			cout << "turns " << turns << "\n";
			cout << "attack " << attack << "\n";
			cout << "block " << block << "\n";
			cout << "timerSeconds " << timerSeconds << "\n";
			}

	}
		else{
			cout << "Ahww okay, nevermind.";
			}

	

	
	}
}
