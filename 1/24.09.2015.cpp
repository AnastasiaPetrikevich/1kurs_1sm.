# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	int choice;

	while (true)
	{
		
		
		cout << "Enter number from 1 to 10" << endl;
		cout << "If you want to have sum (1/1+1/2+1/3+...+1/n=) enter 1" << endl;
		cout << "If you want to have sum(2^n=) enter 2" << endl;
		cout << "sum((1 + 1 / 1 ^ 2)(1 + 1 / 2 ^ 2)...(1 + 1 / n ^ 2) = ) enter 3" << endl;
		cout << "Sum(1 / (1 * 2) - 1 / (2 * 3) + ... + (-1) ^ (n + 1) / (n*(n + 1) = ) enter 4" << endl;
		cout << "Sum(1 / 1^5 + 1 / 2^5 + 1 / 3^5 + ... + 1 / n^5=) enter 5" << endl;
		cout << "Sum(1 / 3^2) + 1 / 5^2 + ... + 1 / (2n+1)^2=) enter 6" << endl;
		cout << "Sum(-1/3 + 1/5 +...+ (-1)^n/(2n+1)) enter 7" << endl;
		cout << "Sum((1! / 1) + (2! / (1+1/2)) + ... + n!/(1+1/2+...+1/n) enter 8" << endl;
		cout << "Sum(sqrt(2+sqrt(2+...sqrt2))...)=) enter 9" << endl;
		cout << "Sum (1/sin1 + 1/(sin1+sin2) +...+1/(sin1+sin2+...+sin n)) enter 10" << endl;
		cin >> choice;
		if (choice >= 1 && choice <= 10)
		break;
	}
	
	{
		int n;
		cout << "Enter n: " << endl;
		while (true)
		{
			cin >> n;
			if (n > 0)
				break;
		}

		switch (choice)
		{
		case 1:

		{
			cout << "==1==" << endl;

			
			double sum = 0;
			for (int i = 1; i <= n; i++)
			{
				sum = sum + 1. / i;
			}
			cout << "sum: " << sum << endl;
			system("pause");
			break;
		}
		case 2:
		{
			cout << "==2==" << endl;

			cout << "sum: " << pow(2, n) << endl;
			system("pause");
			break;
		}
		case 3:
		{
			cout << "==3==" << endl;

			
			double sum = 0;
			for (int i = 1; i <= n; i++)
			{
				sum *= (1 + 1. / i*i);
			}
			cout << "sum: " << sum << endl;
			system("pause");
			break;
		}
		case 4:
		{
			cout << "==4==" << endl;

	
			double sum = 0;
			int t = 1;
			for (int i = 1; i <= n; i++)
			{
				sum = sum + t / (i*(i + 1));
				t = -t;
			}
			cout << "sum: " << sum << endl;
			system("pause");
			break;
		}

		case 5:
		{
			cout << "==5==" << endl;

			
			double sum = 0;
			for (int i = 1; i <= n; i++)
			{
				sum += 1. / (pow(i, 5));
			}
			cout << "sum:" << sum << endl;
			system("pause");
			break;
		}
		case 6:
		{
			cout << "==6==" << endl;

			double sum = 0;
			for (int i = 1; i <= n; i++)
			{
				sum += 1. / ((2 * i + 1) * (2 * i + 1));
			}
			cout << "sum: " << sum << endl;
			system("pause");
			break;
		}
		case 7:
		{
			cout << "==7==" << endl;

			
			double sum = 0;
			int t = -1;
			for (int i = 1; i <= n; i++)
			{
				sum = sum + t / (i * 2 + 1);
				t = -t;
			}
			cout << "sum: " << sum << endl;
			system("pause");
			break;
		}
		case 8:
		{
			cout << "==8==" << endl;

			
			double sum = 0, a = 1, b = 0;
			for (int i = 1; i = n - 1; i++)
			{
				a = a*i;
				b = b + 1. / i;
				sum = a / b;
			}
			cout << "sum: " << sum << endl;
			system("pause");
			break;
		}
		case 9:
		{
			cout << "==9==" << endl;

			
			double sum = sqrt(2);
			for (int i = 1; i = n - 1; i++)
			{
				sum = sqrt(2 + sum);
			}
			cout << "sum: " << sum << endl;
			system("pause");
			break;

		}
		case 10:
		{
			cout << "==10==";

			
			double sum = 0, denom = 0;
			for (int i = 1; i <= n; i++)
			{
				denom += sin(i);
				sum += 1. / denom;
			}
			system("pause");
			break;
		}
		default:
			cout << "There are not sum ¹ " << choice;
			cout << "Make right choise (from 1 to 10): ";
			break;
			return 0;
		}
	}
}