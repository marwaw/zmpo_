#include "CPoint2D.h"

CPoint2D::CPoint2D(double dx, double dy)
{
	p_coordx = new double(dx);
	p_coordy = new double(dy);
}

CPoint2D::CPoint2D(const CPoint2D &other_point)
{
	p_coordx = new double(*other_point.p_coordx);
	p_coordy = new double(*other_point.p_coordy);
}

double CPoint2D::getX()
{
	return *p_coordx;
}

double CPoint2D::getY()
{
	return *p_coordy;
}

void CPoint2D::setX(double dx)
{
	*p_coordx = dx;
}

void CPoint2D::setY(double dy)
{
	*p_coordy = dy;
}

string CPoint2D::info()
{
	return "(" + to_string(getX()) + "," + to_string(getY()) + ")";
}

CPoint2D::~CPoint2D()
{
	delete p_coordx;
	delete p_coordy;
}
