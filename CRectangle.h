#pragma once
#include "CPoint2D.h"
#include <cmath>
#include <string>
using std::string;
using std::to_string;


class CRectangle
{
private:
	CPoint2D point1;
	CPoint2D point2;

public:
	CRectangle(double x1, double y1, double x2, double y2);
	CRectangle(const CPoint2D &p1, const CPoint2D &p2);
	CRectangle(const CRectangle &other_rectangle);

	double rec_area();
	string info();

};