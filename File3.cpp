#include <iostream>
#include <string>
#include <iomanip>

int main() {
	int rows;
	int whiteSpace;
	int stars;
	int width;
	std::string whiteSpaceString;
	std::string starString;


	std::cout << "Enter the number off rows" << std::endl;
	std::cin >> rows;
	width = rows * 2 - 1;

	for (int i = 0; i < rows; i++) {
		whiteSpaceString = "";
		starString = "";

		stars = i * 2 + 1;
		whiteSpace = width - stars;

		for (int j = 0; j < whiteSpace/2; j++) {
			whiteSpaceString = whiteSpaceString + ' ';
		}
		for (int j = 0; j < stars; j++) {
			starString = starString + '*';
		}

		std::cout << whiteSpaceString << starString << whiteSpaceString << std::endl;
	}

	for (int i = rows - 2; i >= 0; i--) {
		whiteSpaceString = "";
		starString = "";

		stars = i * 2 + 1;
		whiteSpace = width - stars;

		for (int j = 0; j < whiteSpace / 2; j++) {
			whiteSpaceString = whiteSpaceString + ' ';
		}
		for (int j = 0; j < stars; j++) {
			starString = starString + '*';
		}

		std::cout << whiteSpaceString << starString << whiteSpaceString << std::endl;
	}

	return -1;
}