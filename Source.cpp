#include<iostream>
using namespace std;

class Engine {
protected:
	double Heat{};
	double Work{};
	double Efficiency{};
	virtual void GetEfficiency() = 0;
};
class IcEngine :public Engine {//Internal combustion engine class

};

class PetrolEngine :public IcEngine {//petrol engine class
public:
	void GetEfficiency() {
		if (Heat >= Work) {
			Efficiency = Work / Heat;
			cout << "Efficiency of Petrol engine=" << Efficiency;
		}
		else
		{
			cout << "Incorrect Entry";
		}
	}
	PetrolEngine() { //constructor
		cout << "Enter the Heat input of the Petrol engine: ";
		cin >> Heat;
		cout << "Enter the Work output of the Petrol engine: ";
		cin >> Work;
	}
};

class DieselEngine :public IcEngine {//diesel engine class
public:
	void GetEfficiency() {
		if (Heat >= Work) {
			Efficiency = Work / Heat;
			cout << "Efficiency of Diesel engine=" << Efficiency;
		}
		else
		{
			cout << "Incorrect Entry";
		}
	}
	DieselEngine() { //constructor
		cout << "Enter the Heat input of the Diesel engine: ";
		cin >> Heat;
		cout << "Enter the Work output of the Diesel engine: ";
		cin >> Work;
	}
};

class EcEngine :public Engine {//External combustion engine class

};

class SteamEngine :public EcEngine {//steam engine class
public:
	void GetEfficiency() {
		if (Heat >= Work) {
			Efficiency = Work / Heat;
			cout << "Efficiency of Steam engine=" << Efficiency;
		}
		else
		{
			cout << "Incorrect Entry";
		}
	}
	SteamEngine() { //constructor
		cout << "Enter the Heat input of the Steam engine: ";
		cin >> Heat;
		cout << "Enter the Work output of the Steam engine: ";
		cin >> Work;
	}
};


int main() {
	int Selection;
	cout << "Enter 1 for Petrol engine." << endl
		 << "Enter 2 for Diesel engine." << endl
		 << "Enter 3 for Steam engine." << endl;
	cin >> Selection;
	switch (Selection) {
	case 1: {PetrolEngine pet;
			pet.GetEfficiency();
			break; }
	case 2: {DieselEngine die;
			die.GetEfficiency();
			break; }
	case 3: {SteamEngine ste;
			ste.GetEfficiency();
			break; }
	default:cout << "Invalid entry!!";
			break;
	}
	return 0;
}