#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
	int z;
public:
	Point() {
		x = 0;
		y = 0;
		z = 0;
	}
	Point(int X, int Y, int Z) {
		x = X;
		y = Y;
		z = Z;
	}

	void Input(float new_x, float new_y, float new_z) {
		x = new_x;
		y = new_y;
		z = new_z;
	}
};

int main() {

}