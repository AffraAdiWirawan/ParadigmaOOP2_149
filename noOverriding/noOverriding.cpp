#include <iostream>

using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << " hallu saya function dari base class";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << " hallo saya fucntion dari derivec class";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}