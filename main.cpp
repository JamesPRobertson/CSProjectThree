//James Robertson
//Miller TTh 0900
#include <iostream>
#include <stack>

int postFix(std::string inputString);

int main() {
	std::string input = "";
	std::cout << "Please enter a postfix expression as a string" << std::endl;
	std::getline(std::cin,input);
	std:: cout <<  postFix(input);
}

int postFix(std::string inputString){
	std::stack<int> *theStack = new std::stack<int>();

	for(int i = 0; i < inputString.size(); i++){
		switch(inputString[i]){
			default:
				theStack->push((char)inputString[i] - '0');
				break;
			case '*': {
				int firstMulti = theStack->top();
				theStack->pop();
				int secondMulti = theStack->top();
				theStack->pop();

				theStack->push(firstMulti * secondMulti);
				break;
			}
			case '/': {
				int firstDiv = theStack->top();
				theStack->pop();
				int secondDiv = theStack->top();
				theStack->pop();

				theStack->push(firstDiv / secondDiv);
				break;
			}
			case '+': {
				int firstAdd = theStack->top();
				theStack->pop();
				int secondAdd = theStack->top();
				theStack->pop();

				theStack->push(firstAdd + secondAdd);
				break;
			}
			case '-': {
				int firstMin = theStack->top();
				theStack->pop();
				int secondMin = theStack->top();
				theStack->pop();

				theStack->push(firstMin - secondMin);
				break;
			}
		}
	}

	return theStack->top();
}