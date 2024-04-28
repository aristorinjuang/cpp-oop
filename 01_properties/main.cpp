#include <iostream>

using namespace std;

class Animal {
	public:
		string name;
		int feets;
		bool hasPaws;
};

int main() {
	Animal cat;

	cat.name = "Cat";
	cat.feets = 4;
	cat.hasPaws = false;

	cout << cat.name << " has " << cat.feets << " feets." << endl;
	if (cat.hasPaws) {
		cout << cat.name << " has paws." << endl;
	}

	Animal dog;

	dog.name = "Dog";
	dog.feets = 4;
	dog.hasPaws = true;

	cout << dog.name << " has " << dog.feets << " feets." << endl;
	if (dog.hasPaws) {
		cout << dog.name << " has paws." << endl;
	}

	return 0;
}