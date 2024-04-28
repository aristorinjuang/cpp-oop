#include <iostream>

using namespace std;

class Properties {
	public:
		virtual void setName(string name) = 0;
		virtual string getName() = 0;
		virtual void setFeets(int feets) = 0;
		virtual int getFeets() = 0;
		virtual void setHasPaws(bool hasPaws) = 0;
		virtual bool getHasPaws() = 0;
};

class Animal: public Properties {
	public:
		string name;
		int feets;
		bool hasPaws;

		void setName(string name) {
			this->name = name;
		}

		string getName() {
			return name;
		}

		void setFeet(int feets) {
			this->feets = feets;
		}

		int getFeet() {
			return feets;
		}

		void setHasPaws(bool hasPaws) {
			this->hasPaws = hasPaws;
		}

		bool getHasPaws() {
			return hasPaws;
		}

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

		void setName(string name) override {
			this->name = name;
		}

		string getName() override {
			return name;
		}

		void setFeets(int feets) override {
			this->feets = feets;
		}

		int getFeets() override {
			return feets;
		}

		void setHasPaws(bool hasPaws) override {
			this->hasPaws = hasPaws;
		}

		bool getHasPaws() override {
			return hasPaws;
		}

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