/*ѕользователь вводит прибыль фирмы за год (12 мес€цев).
«атем пользователь вводит диапазон (например, 3 и 6 Ч поиск
между 3-м и 6-м мес€цем). Ќеобходимо определить мес€ц,
в котором прибыль была максимальна и мес€ц, в котором
прибыль была минимальна с учетом выбранного диапазона.*/
#include <iostream>
using namespace std;
int main()
{
	int const n = 12;
	int profit[n];
	int start, end, minPrMonth, maxPrMonth;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter your profit for " << i + 1;
		cout << " month:\n";
		cin >> profit[i];
	}
	cout << "Enter the start of the range "
		"interested for you:\n";
	cin >> start;
	cout << "Enter the end of the range interested "
		"for you:\n";
	cin >> end;
	minPrMonth = start - 1;
	maxPrMonth = start - 1;
	for (int i = start; i <= end - 1; i++)
	{
		if (profit[i] > profit[maxPrMonth])
		{
			maxPrMonth = i;
		}
		if (profit[i] < profit[minPrMonth])
		{
			minPrMonth = i;
		}
		cout << "You got the min. profit in "
			<< minPrMonth + 1 << " month.\n";
		cout << "You got the max. profit in "
			<< maxPrMonth + 1 << " month.\n";
		return 0;
	}
}