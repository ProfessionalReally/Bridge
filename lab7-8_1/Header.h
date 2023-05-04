#pragma once

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;

class Drawer {
public:
    virtual void DrawRound(int x, int y, int size) = 0;
};

class SmallRoundDrawer : public Drawer {
public:
   
    void DrawRound(int x, int y, int size) override
    {
        cout << "Small Round Window: " << "x = " << x << ", " << "y = " << y << ", size = " << size << endl;
    }
};

class FullRoundDrawer : public Drawer {
public:

    void DrawRound(int x, int y, int size) override
    {
        cout << "Full Round Window: " << "x = " << x << ", " << "y = " << y << ", size = " << size << endl;
    }
};

class ShapeWindow {
protected:
    Drawer* drawer;
public:
    ShapeWindow(Drawer* drw) { drawer = drw; }
    ShapeWindow() {}
    virtual void Draw() = 0;
};

class ShapeRoundWindow : public ShapeWindow {
    int x, y, size;
public:
    ShapeRoundWindow(int _x, int _y, int _size, Drawer* drw)
    {
        drawer = drw;
        x = _x;
        y = _y;
        size = _size;
    }
    void Draw() override 
    {
        drawer->DrawRound(x, y, size);
    }
   
};