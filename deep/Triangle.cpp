#include "Triangle.h"
double Triangle::GetLength(int index)
{
	Point _v[4];
	for (int n = 0; n < 3; n++)
	{
		_v[n] = v[n];
	}
	_v[3] = v[0];                   

	double x1, y1, x2, y2, dx, dy;
	x1 = _v[index].GetX();
	x2 = _v[index + 1].GetX();
	y1 = _v[index].GetY();
	y2 = _v[index + 1].GetY();
	dx = x2 - x1;           
	dy = y2 - y1;
	return(sqrt(dx * dx + dy * dy));
}

double Triangle::GetPerimetr()
{
	return(GetLength(0) + GetLength(1) + GetLength(2));
}

double Triangle::GetSquare()
{
	double hPer = 0;
	double square = 0;
	hPer = GetPerimetr() / 2;
	square = sqrt(abs(hPer * (hPer - GetLength(0)) * (hPer - GetLength(1) * (hPer - GetLength(2)))));
	return square;
}

double Triangle::GetHeight(int index)
{
	double height = 0;
	int i = index;
	height = (2 * GetSquare()) / GetLength(i);
	return height;
}

double Triangle::GetRadius()
{
	double radius = 0;

	radius = GetLength(0) * GetLength(1) * GetLength(2) / 4 * GetSquare();
	return radius;
}

double Triangle::GetAngel()
{
	double angle[3];
	double buffer = 0;
	GetLength(3) == GetLength(0);

	for (int i = 0; i < 3; i++)
	{
		angle[i] = (2 * GetSquare()) / (GetLength(i) * GetLength(2 - i));
	}


	angle[2] = (2 * GetSquare()) / (GetLength(1) * GetLength(2));

	for (int i = 0; i < 2; i++)
	{
		if (angle[i] <= angle[i + 1])
		{
			buffer = asin(angle[i]) * 180 / 3.14;
		}

		if (angle[i] == angle[i + 1])
		{
			return -1;
		}
	}

	return buffer;
}