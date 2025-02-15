#include <iostream>
#include <fstream>
#include <sstream>


int main() {
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;

	std::string sNum1;
	std::string sNum2;
	std::string text;

	int num1;
	int num2;
	int sum;


	inFile.open("data.csv");
	while (getline(inFile, currentLine)) {

		converter.clear();
		converter.str(currentLine);

		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');
		getline(converter, text, '.');

		converter.clear();
		converter.str(sNum1);
		converter >> num1;

		converter.clear();
		converter.str(sNum2);
		converter >> num2;
		

		sum = num1 + num2;


		for (int i = 0; i < sum; i++) {
			std::cout << text;
		}

		std::cout << std::endl;

		converter.clear();
		converter.str("");
	
	}

	inFile.close();
	return 0;

}


