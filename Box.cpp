#include "Box.h"
#include <iostream>
#include<cstring>
using namespace std;

// Implement setters and getters
void Box::setlength(int l)
{
	Length = l;
}
void Box::setwidth(int w)
{
	Width = w;
}
void Box::setheight(int h)
{
	Height = h;
}


int Box::getLength()
{
	return Length;
}
int Box::getWidth()
{
	return Width;
}
int Box::getHeight()
{
	return Height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {

	return Length * Width * Height;

}
