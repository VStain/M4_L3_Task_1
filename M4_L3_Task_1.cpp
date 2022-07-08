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
		do
		{
			this->num1 = num1;
			if (num1 == 0)
			{
				cout << "Неверный ввод!" << endl;
			}
		} while (num1 != 0);
	}
	bool set_num2(double num2)
	{

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

	/*cout << "Введите num1: ";
	cin >> num1;
	cout << endl << "Введите num2: ";
	cin >> num2;*/

	cin >> calculator.set_num1;

	return 0;
}