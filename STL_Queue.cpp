#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	float balance = 0.0;
	queue<float> transactions;

	transactions.push(100.00);
	transactions.push(-5.00);
	transactions.push(50.00);
	transactions.push(-20.00);

	while (!transactions.empty())
	{
		float amount = transactions.front();
		cout << amount << " pushed to account" << endl;
		balance += amount;
		transactions.pop();
	}
	cout << "Final balance: $" << balance << endl;

	return 0;
}