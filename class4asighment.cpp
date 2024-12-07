#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	
	int number;
	int response;
	int score = 0;
	
	srand(time(NULL));
	
	number = rand() %10 + 1;
	
	do {
		cout << "Enter your guess (1-10):  ";
		cin >> response;
		
		if (response > number){
			cout <<"that was too high!\n";
		}
		else if (response < number) {
			cout << "that was too lower!\n";
		}
		else {
			cout <<"congratulations\n";
		}
		score++;
		
	}while(number != response);

cout << "\nNumber is: " << number;
cout <<"\nguesses: " << score;

     cout << "\n";
     return 0;
 }