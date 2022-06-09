#pragma once
class Box {
private:
    int Length;
    int Width;
    int Height;
public:
    void setlength(int l);
    void setwidth(int w);
    void setheight(int h);
    

    // write prototypes of getters for length, width and height
    int getHeight();
    int getLength();
    int getWidth();
    int calcVolume();
};
