// Weightloss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int age;
	float weight;
	std::string name;
	float goal;
	int inches;
	int weeks;
	std::string sex;
void bmr() {
	
	
	if (sex == "female") {
		float hb1 = 655.1 + (4.35 * weight) + (4.7 * inches) - (4.7 * age);
		std::cout << "So you would need a minium of" << hb1 << " calories. ";
	}
	else if (sex == "male"){
		float hb2 = 66.47 + (6.24 * weight) + (12.7 * inches) - (4.7 * age);
		std::cout << "So you would need a minium of" << hb2 << " calories. ";
	}
	else {
	std::cout << "Unable to compute exact calories \n ";
	}
}
void gbmr() {


	if (sex == "female") {
		float hb1 = 655.1 + (4.35 * goal) + (4.7 * inches) - (4.7 * age);
		std::cout << "So you would need a minium of" << hb1 << " calories. ";
	}
	else if (sex == "male") {
		float hb2 = 66.47 + (6.24 * goal) + (12.7 * inches) - (4.7 * age);
		std::cout << "So you would need a minium of" << hb2 << " calories. ";
	}
	else {
		std::cout << "Unable to compute exact calories \n ";
	}
}






int main()
{



    std::cout << "What is your name?\n";
	std::cin >> name;
	std::cout << "Hello " << name << ". I am going to ask you some important questions. Please answer them honestly\n";
	std::cout << "Are you Male or Female?";
	std::cin >> sex;
    std::cout << "What is your weight?\n";
	std::cin >> weight;
	std::cout << "What is your height in inches?\n ";
	std::cin >> inches;
	std::cout << " So " << name << ", you weigh " << weight << " pounds. \n";
	bmr();
	std::cout << "What is your goal weight?\n";
	std::cin >> goal;
	std::cout<< "  So your goal weight is" << goal << " pounds. Realisticly, how many weeks do you want to take to reach your goal? Remember... you can't lose more than 2 pounds a week.\n";
	gbmr();
	
	std::cin >> weeks;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
