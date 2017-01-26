#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

class Book
{
public:
	Book(const string& title)
	{
		m_title = title;
		m_checkedIn = false;
	}

	void CheckIn()
	{
		cout << "Checked in \"" << m_title << "\"" << endl;
		m_checkedIn = true;
	}

private:
	string m_title;
	bool m_checkedIn;
};

int main()
{
	stack<Book> bookDrop;
	bookDrop.push(Book("The Wrong Side of Goodbye"));
	bookDrop.push(Book("No Man's Land"));
	bookDrop.push(Book("The Whistler"));
	bookDrop.push(Book("A Dog's Purpose"));
	bookDrop.push(Book("Crash and Burn"));
	bookDrop.push(Book("Two By Two"));

	vector<Book> bookPool;

	while (!bookDrop.empty())
	{
		bookDrop.top().CheckIn();
		bookPool.push_back(bookDrop.top());
		bookDrop.pop();
	}

	return 0;
}