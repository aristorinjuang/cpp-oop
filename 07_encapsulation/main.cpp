#include <iostream>
#include <vector>

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
	protected:
		string name;
		int feets;
		bool hasPaws;

	public:
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

		Monster(string name, int feets, bool hasPaws, vector<string> abilities) {
			this->name = name;
			this->feets = feets;
			this->hasPaws = hasPaws;
			this->abilities = abilities;
		}

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

// g++ -std=c++11 main.cpp -o main && ./main
int main() {
	Monster dragon("Dragon", 4, true, {"Nuclear blast", "Ice smoke"});

	dragon.print();

	return 0;
}
