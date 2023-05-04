#include "Header.h"

int main()
{
    ShapeWindow* shapes[2] = { new ShapeRoundWindow(5,10,10, new SmallRoundDrawer()),
                          new ShapeRoundWindow(20,30,100, new FullRoundDrawer()) };
    for (int i = 0; i < 2; i++)
    {
        shapes[i]->Draw();
    }
}

