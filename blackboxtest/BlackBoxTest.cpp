#include "BlackBoxTest.h"
#include "pch.h"
#include <math.h>

float RightAngleTriangleAreaPerfect(float a, float b, float h)
{
	// Checks whether the triangle is valid or not
	if (a + b < h)
		return -1.f;
	float area = (b * a) / 2;
	return area;
}
float RightAngleTriangleAreaImPerfect(float a, float b, float h)
{
	// Does not check whether the triangle is valid or not
	float area = (b * a) / 2;
	return area;
}

float HypotenuseCalc(float a, float b)
{
	return sqrt((a * a) + (b * b));
}

float Perimeter(float a, float b, float h)
{
	return a + b + h;
}


