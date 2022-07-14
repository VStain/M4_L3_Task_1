#include <iostream>
using namespace std;

class Calculator
{
public:
	double add(double num1, double num2)
	{
		double value = 0.0;
		value = num1 + num2;
		return value;
	}
	double multiply(double num1, double num2)
	{
		double value = 0.0;
		value = num1 * num2;
		return value;
	}
	double subtract_1_2(double num1, double num2)
	{
		double value = 0.0;
		value = num1 - num2;
		return value;
	}
	double subtract_2_1(double num2, double num1)
	{
		double value = 0.0;
		value = num2 - num1;
		return value;
	}
	double divide_1_2(double num1, double num2)
	{
		double value = 0.0;
		value = num1 / num2;
		return value;
	}
	double divide_2_1(double num2, double num1)
	{
		double value = 0.0;
		value = num2 / num1;
		return value;
	}
	bool set_num1(double num1)
	{
		if (num1 == 0.0)
		{
			return false;
		}
		num1 = this->num1;
		return true;
	}
	bool set_num2(double num2)
	{
		if (num2 == 0.0)
		{
			return false;
		}
		num2 = this->num2;
		return true;
	}
	void Screen_output(double num1, double num2)
	{
		Calculator screen;
		cout << "num1 + num2 = " << screen.add(num1, num2) << endl;
		cout << "num1 - num2 = " << screen.subtract_1_2(num1, num2) << endl;
		cout << "num2 - num1 = " << screen.subtract_2_1(num2, num1) << endl;
		cout << "num1 * num2 = " << screen.multiply(num1, num2) << endl;
		cout << "num1 / num2 = " << screen.divide_1_2(num1, num2) << endl;
		cout << "num2 / num1 = " << screen.divide_2_1(num2, num1) << endl;
	}

private:
	double num1 = 0.0;
	double num2 = 0.0;
};



int main()
{
	setlocale(LC_ALL, "Ru");

	Calculator calculator;
	double num1 = 0.0;
	double num2 = 0.0;

	cout << "Введите num1: ";
	cin >> num1;
	calculator.set_num1(num1);
	cout << "Введите num2: ";
	cin >> num2;
	calculator.set_num2(num2);
	cout << endl;

	calculator.Screen_output(num1, num2);


	return 0;
}