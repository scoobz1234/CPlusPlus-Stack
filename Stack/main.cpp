#include <iostream>
#include "MyStack.cpp"

using namespace std;
void Run();

int main() {

	Run();
	return 0;
}

void Run() {

	int size = 0;
	cout << "Please indicate the size of the array" << endl;
	cin >> size;
	while (!cin) {
		cout << "Please enter a valid integer value!" << endl;
		cin.clear();
		cin.ignore();
		cin >> size;
	}

	MyStack<int> stack(size);

	bool run = true;

	while (run) {
		int choice = 0;
		int c = 0;
		system("CLS");
		cout << "Select from the following list: -1 to exit" << endl;
		cout <<
			"(1) Add to Stack\n" <<
			"(2) Remove from Stack\n" <<
			"(3) Peek top of Stack\n" <<
			"(4) Print Stack" << endl;
		cout << "--> ";
		cin >> choice;

		switch (choice) {
		case 1:
			system("CLS");
			cout << "enter a value to add to the stack:\n--> ";
			cin >> c;
			stack.Push(c);
			system("PAUSE");
			break;
		case 2:
			system("CLS");
			stack.Pop();
			system("PAUSE");
			break;
		case 3:
			system("CLS");
			stack.Peek();
			system("PAUSE");
			break;
		case 4:
			system("CLS");
			cout << "-- START OF STACK --" << endl;
			stack.Print();
			cout << "-- END OF STACK --" << endl;
			system("PAUSE");
			break;
		case -1:
			run = false;
			break;
		default:
			cout << "Please enter a valid choice..." << endl;
			cin.clear();
			cin.ignore();
			break;
		}
	}
}