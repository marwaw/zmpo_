#include "CRectangle.h"

CRectangle::CRectangle(double x1, double y1, double x2, double y2): point1(x1,y1), point2(x2,y2){}

CRectangle::CRectangle(const CPoint2D &p1, const CPoint2D &p2): point1(p1), point2(p2){}

CRectangle::CRectangle(const CRectangle &other_rectangle) : point1(other_rectangle.point1), point2(other_rectangle.point2) {}

double CRectangle::rec_area()
{
	return abs(point1.getX() - point2.getX()) * abs(point1.getY() - point2.getY());
}

string CRectangle::info()
{
	return "CRectangle(CPoint" + point1.info() + ", CPoint" + point2.info() + ")";
}


