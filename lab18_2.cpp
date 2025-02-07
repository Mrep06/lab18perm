#include<iostream>
#include <algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
	double x1_max = R1->x + R1->w;
    double y1_max = R1->y - R1->h;
    double x2_max = R2->x + R2->w;
    double y2_max = R2->y - R2->h;

	double olx = max(0.0,min(x1_max,x2_max) - max(R1->x,R2->x));
	double oly = max(0.0,min(R1->y,R2->y) - max(y1_max,y2_max));

	return olx * oly;

}
