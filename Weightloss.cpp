// Weightloss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int age;
        float weight;
        string name;
        float goal;
        int inches;
        int weeks;
        string sex;
void bmr() {


        if (sex == "female") {
                float hb1 = 655.1 + (4.35 * weight) + (4.7 * inches) - (4.7 * age);
                cout << "So you would need a minium of " << hb1 << " calories. ";
        }
        else if (sex == "male"){
                float hb2 = 66.47 + (6.24 * weight) + (12.7 * inches) - (4.7 * age);
                cout << "So you would need a minimum of " << hb2 << " calories. ";
        }
        else {
        cout << "Unable to compute exact calories \n ";
        }
}
void gbmr() {


        if (sex == "female") {
                float hb1 = 655.1 + (4.35 * goal) + (4.7 * inches) - (4.7 * age);
                cout << "So you would need a minium of  \n" << hb1 << " calories. ";
        }
        else if (sex == "male") {
                float hb2 = 66.47 + (6.24 * goal) + (12.7 * inches) - (4.7 * age);
                cout << "So you would need a minimum of \n" << hb2 << " calories. ";
        }
        else {
                cout << "Unable to compute exact calories \n ";
        }
}

int main()
{

  
  cout << "What is your name?\n";
        cin >> name;
        cout << "Hello " << name << ". I am going to ask you some important questions. Please answer them honestly\n";
        cout << "Are you Male or Female?";
        cin >> sex;
    cout << "What is your weight?\n";
        cin >> weight;
        cout << "What is your height in inches?\n ";
        cin >> inches;
        cout << "what is your age?";
        cin >> age;
        cout << " So " << name << ", you weigh " << weight << " pounds. \n";
        bmr();
        cout << "What is your goal weight?\n";
        cin >> goal;
        gbmr();
          float lb = weight - goal;
		  cout<< "  So your goal weight is " << goal << " pounds. That would mean you want to lose  "  << lb << "   pounds. Correct?";
}