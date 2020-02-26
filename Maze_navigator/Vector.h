#pragma once
class Vector
{
	int x;
	int y;
public:
	Vector();
	Vector(int, int);
	~Vector();

	int GetX();
	int GetY();

	void SetX(int);
	void SetY(int);

	bool operator==(Vector);
};

