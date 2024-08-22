#include <iostream>

using namespace std;

double kub_num(double num_1)
{
	return num_1 * num_1 * num_1;
}

double big_num(double num_1, double num_2)
{
	if (num_1 > num_2)
	{
		return num_1;
	}
	else if (num_2 > num_1)
	{
		return num_2;
	}
	else
	{
		return num_1;
	}

}

double true_false(double num_1)
{
	if (num_1 < 0)
	{
		return false;
	}
	else if (num_1 > 0)
	{
		return true;
	}
	else if (num_1 == 0)
	{
		return true;
	}
}

double addition(double num_1, double num_2)
{
	return num_1 + num_2;
}

double cixma(int num_1, int num_2)
{
	return num_1 - num_2;
}

double vurma(int num_1, int num_2)
{
	return num_1 * num_2;
}

double bolme(int num_1, int num_2)
{
	return num_1 / num_2;
}

double claculator(int num_1, int num_2, char choice)
{
	if (choice == '+')
	{
		return addition(num_1,num_2);
	}
	else if (choice == '-')
	{
		return cixma(num_1, num_2);
	}
	else if (choice == '*')
	{
		return vurma(num_1,num_2);
	}
	else if (choice == '/')
	{
		return bolme(num_1,num_2);
	}
}

int sade_murekkeb(int num_1)
{
	if (num_1 % 2 != 0)
	{
		return true;
	}
	else if (num_1 == 2 && num_1 % 3 == 0 && num_1 % 5 == 0 && num_1 % 7 == 0)
	{
		return false;
	}
}


int main()
{
	cout << "=====================================";
	cout << "\n\n";
	cout << "Tap - 1";
	cout << "\n\n\n\n";

	double num_one;

	cout << "Enter numer : ";
	cin >> num_one;

	double answer_one = kub_num(num_one);
	cout << "Answer : " << answer_one;

	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "=====================================";
	cout << "\n\n";
	cout << "Tap - 2";
	cout << "\n\n\n\n";

	double num_two_;
	double num_two;

	cout << "Enter num one : ";
	cin >> num_two_;

	cout << "Enter num two : ";
	cin >> num_two;

	double answer_two = big_num(num_two_, num_two);
	cout << "Answer : " << answer_two;

	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "=====================================";
	cout << "\n\n";
	cout << "Tap - 3";
	cout << "\n\n\n\n";

	int num_three;

	cout << "Enter number : ";
	cin >> num_three;

	double answer_three = true_false(num_three);
	cout << "Answer : " << answer_three;

	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "=====================================";
	cout << "\n\n";
	cout << "Tap - 4";
	cout << "\n\n\n\n";

	double num_four_;
	double num_four;
	char chhoice;

	cout << "Enter number one : ";
	cin >> num_four_;

	cout << "Enter number two : ";
	cin >> num_four;

	cout << "Enter opperator : ";
	cin >> chhoice;

	cout << "\n\n";

	double answer_four = claculator(num_four, num_four_,chhoice);
	cout << "Num one : " << num_four_ << endl;
	cout << "Num two : " << num_four << endl;
	cout << "Opperator : " << chhoice << endl;
	cout << "Answer : " << answer_four << endl;

	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "=====================================";
	cout << "\n\n";
	cout << "Tap - 6";
	cout << "\n\n\n\n";

	int num_six;

	cout << "Enter number : ";
	cin >> num_six;

	int answer_six = sade_murekkeb(num_six);
	cout << "Answer : " << answer_six;

	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "=====================================";

}