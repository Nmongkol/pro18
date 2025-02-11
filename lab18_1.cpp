#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A1,Rect B2){
    double width = max(0.0, min(A1.x + A1.w, B2.x + B2.w) - max(A1.x, B2.x));
    double height = max(0.0, min(A1.y, B2.y) - max(A1.y - A1.h, B2.y - B2.h));
    return width * height;



}