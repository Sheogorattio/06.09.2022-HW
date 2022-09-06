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

	void Print() {
		cout << "x: " << x << "\ny: " << y << "\nz: " << z << endl;
	}
};

int main() {
	Point a;
	a.SetX(2);
	a.SetY(3);
	a.SetZ(4);
	a.Print();
	system("pause");
	system("cls");
}