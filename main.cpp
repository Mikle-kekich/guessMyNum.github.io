//Игра Guess my Number
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int main() {
	
	srand(static_cast<unsigned int>(time(0)));
	int SecretNum = rand() % 100 + 1;//случайное число в диапозоне от 1 до 100
	int tries = 0;
	int guess;
	cout << "\t Welcome to guess my number\n";
	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;
		if (guess > SecretNum) {
			cout << "Too high! \n";
		}
		else if (guess < SecretNum) {
			cout << "Too low! \n";
		}
		else {
			cout << "Yeah,that it!!! You got it in " << tries << " guesses!\n";
		}
	} while (guess != SecretNum);
	return 0;
}