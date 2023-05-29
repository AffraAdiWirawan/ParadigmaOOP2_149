#include <iostream>

using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << " hallu saya function dari base class";
	}
};