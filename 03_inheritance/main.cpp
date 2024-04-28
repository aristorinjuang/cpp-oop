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
};

class Legend {
	public:
		string myth;
};

class Mythical: public Monster, public Legend {
	public:
		string story;
};

int main() {
	Mythical dragon;

	dragon.name = "Dragon";
	dragon.feets = 4;
	dragon.hasPaws = true;
	dragon.abilities.push_back("Nuclear blast");
	dragon.abilities.push_back("Ice smoke");
	dragon.myth = "Appears in the folklore.";
	dragon.story = "From the hidden world.";

	dragon.print();

	return 0;
}