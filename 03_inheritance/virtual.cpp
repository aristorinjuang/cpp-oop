#include <iostream>

using namespace std;

class Animal {
	public:
		string description;
};

class Monster: public virtual Animal {

};

class Legend: public virtual Animal {

};

class Mythical: public Monster, public Legend {

};

int main() {
	Mythical dragon;

	dragon.description = "This should be no ambiguous.";

	return 0;
}