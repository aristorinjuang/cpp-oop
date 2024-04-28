#include <iostream>

using namespace std;

class Animal {
	public:
		string name;
		int feets;
		bool hasPaws;

		void print() {
			cout << name << " has " << feets << " feets." << endl;
			if (hasPaws) {
				cout << name << " has paws." << endl;
			}
		}
};

int main() {
	Animal cat;

	cat.name = "Cat";
	cat.feets = 4;
	cat.hasPaws = false;

	cat.print();

	Animal dog;

	dog.name = "Dog";
	dog.feets = 4;
	dog.hasPaws = true;

	dog.print();
}