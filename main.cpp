//James Robertson
//Miller TTh 0900
#include <iostream>
#include <stack>

int postFix(std::string inputString);

int main() {
	std::string input = "";
	std::cout << "Please enter a postfix expression as a string" << std::endl;
	std::getline(std::cin,input);
	std:: cout << "\n" << postFix(input);
}

int postFix(std::string inputString){
	std::stack<int> *theStack = new std::stack<int>();

	for(int i = 0; i < inputString.size(); i++){
		const char * currentChar = inputString[i];
		if(inputString[i] == '+' ||
		   inputString[i] == '-' ||
		   inputString[i] == '*' ||
		   inputString[i] == '/'){

		}
		else{
			theStack->push(std::atoi(currentChar));
		}
	}
}