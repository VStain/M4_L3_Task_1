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
		this->num1 = num1;
		return true;
	}
	bool set_num2(double num2)
	{
		if (num2 == 0.0)
		{
			return false;
		}
		this->num2 = num2;
		return true;
	}


private:
	double num1 = 0.0;
	double num2 = 0.0;
};

void Screen_output(double num1, double num2)
{
	Calculator screen;
	cout << endl << "num1 + num2 = " << screen.add(num1, num2) << endl;
	cout << "num1 - num2 = " << screen.subtract_1_2(num1, num2) << endl;
	cout << "num2 - num1 = " << screen.subtract_2_1(num2, num1) << endl;
	cout << "num1 * num2 = " << screen.multiply(num1, num2) << endl;
	cout << "num1 / num2 = " << screen.divide_1_2(num1, num2) << endl;
	cout << "num2 / num1 = " << screen.divide_2_1(num2, num1) << endl;
}



int main()
{
	setlocale(LC_ALL, "Ru");

	Calculator calculator;
	double num1 = 0.0;
	double num2 = 0.0;

	cout << "Введите num1: ";
	cin >> num1;
	while (!calculator.set_num1(num1))
	{
		cout << "Неправильный номер! Повторите ввод." << "!\n";
		cout << "Введите num1: ";
		cin >> num1;
	}

	do
	{
		cout << "Введите num2: ";
		cin >> num2;
		calculator.set_num1(num2);
		if (num2 == 0)
		{
			cout << "Неправильный номер! Повторите ввод." << endl;
			continue;
		}
	} while (!calculator.set_num1(num2));

	Screen_output(num1, num2);


	return 0;
}