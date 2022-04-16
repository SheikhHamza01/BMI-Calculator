#include<iostream>
using namespace std;
void main()
{
	float height, weight, bmi;
	cout << "Enter your wieght in kg"<<endl;
	cin >> weight;
	cout << "enter your height in feet"<<endl;
	cin >> height;
	bmi = weight / (height * height);
	cout << "Your BMI is " << bmi << endl;
	if (bmi > 25.0)
		cout << "You are overweight";
	else if (bmi < 25 && bmi>18.5)
		cout << "You are normal";
	else
		cout << "You are underweight";
}