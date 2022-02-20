#include "Triangle.h"
#include <iostream>

int main()
{
	int x0 = 0, y0 = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	std::cout << "Write firsts coordinates: \n";
	std::cin >> x0 >> y0;
	std::cout << "Write seconds coordinates: \n";
	std::cin >> x1 >> y1;
	std::cout << "Write thirds coordinates: \n";
	std::cin >> x2 >> y2;

	Point A(x0, y0), B(x1, y1), C(x2, y2);
	Triangle tr1(A, B, C);
	int a = 0;

	std::cout << "Switch: \n";

	std::cout << "		1: Perimetr\n";
	std::cout << "		2: Square\n";
	std::cout << "		3: Height\n";
	std::cout << "		4: Angle\n";
	std::cout << "		5: Radius\n";
	std::cout << "		6: Similar\n";
	std::cin >> a;

	switch (a)
	{
	case 1:
		std::cout << tr1.GetPerimetr();
		break;

	case 2:
		std::cout << tr1.GetSquare();
		break;

	case 3:
		int b;
		std::cout << "turn V height 1, 2, 3: \n";
		std::cin >> b;
		std::cout << tr1.GetHeight(b);
		break;

	case 4:
		std::cout << tr1.GetAngel();
		break;

	case 5:
		std::cout << tr1.GetRadius();
		break;

	case 6:

		int xx0 = 0, yy0 = 0, xx1 = 0, yy1 = 0, xx2 = 0, yy2 = 0;

		std::cout << "Write firsts coordinates: \n";
		std::cin >> xx0 >> yy0;
		std::cout << "Write seconds coordinates: \n";
		std::cin >> xx1 >> yy1;
		std::cout << "Write thirds coordinates: \n";
		std::cin >> xx2 >> yy2;
		Point AA(xx0, yy0), BB(xx1, yy1), CC(xx2, yy2);
		Triangle tr2(AA, BB, CC);

		const char* sim = (tr1 ^ tr2) ? "Similar" : "Dissimilar";
		std::cout << sim << std::endl;
		break;
	}
}