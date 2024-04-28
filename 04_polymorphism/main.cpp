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

class Monster: public Animal {
	public:
		vector<string> abilities;

		void print() {
			cout << name << " is a monster!!!" << endl;
			cout << name << " has:" << endl;

			for (string ability : abilities) {
				cout << "- " << ability << endl;
			}
		}
};

int main() {
	Monster dragon;

	dragon.name = "Dragon";
	dragon.feets = 4;
	dragon.hasPaws = true;
	dragon.abilities.push_back("Nuclear blast");
	dragon.abilities.push_back("Ice smoke");

	dragon.print();

	return 0;
}