#include <iostream>

using namespace std;

class Animal {
	public:
		void print();
};

class Monster: public Animal {
	public:
		void print() {
			cout << "Monster is a part of animal." << endl;
		}
};

class Mythical: public Animal {
	public:
		void print() {
			cout << "Mythical is a part of animal." << endl;
		}
};

int main() {
	Monster monster;
	Mythical mythical;

	monster.print();
	mythical.print();

	return 0;
}