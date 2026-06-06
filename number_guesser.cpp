#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int secret = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to Number Guesser!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100." << std::endl;
    std::cout << "Try to guess it." << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        if (!(std::cin >> guess)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a valid number." << std::endl;
            continue;
        }

        attempts++;

        if (guess < secret) {
            std::cout << "Too low. Try again." << std::endl;
        } else if (guess > secret) {
            std::cout << "Too high. Try again." << std::endl;
        } else {
            std::cout << "Correct! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}
