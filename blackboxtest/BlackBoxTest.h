#pragma once

#ifdef BLACKBOXTEST_EXPORTS
#define BLACKBOXTEST_API _declspec(dllexport)
#else
#define BLACKBOXTEST_API __declspec(dllimport)
#endif

extern "C" {
	BLACKBOXTEST_API float RightAngleTriangleAreaPerfect(float a, float b, float h);
	BLACKBOXTEST_API float RightAngleTriangleAreaImPerfect(float a, float b, float h);
	BLACKBOXTEST_API float HypotenuseCalc(float a, float b);
	BLACKBOXTEST_API float Perimeter(float a, float b, float h);
}