#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
	int z;
public:
	void SetX(int new_x) {
		x = new_x;
	}
	int GetX() {
		return x;
	}

	void SetY(int new_y) {
		y = new_y;
	}
	int GetY() {
		return y;
	}

	void SetZ(int new_z) {
		z = new_z;
	}
	int GetZ() {
		return z;
	}
};

int main() {

}