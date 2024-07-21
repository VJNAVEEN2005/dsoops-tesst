#include <graphics.h>
#include <math.h>

#define G GREEN

int main()
{
    int gd = DETECT, gm, angle = 0;
    double x, y;
        initgraph(&gd, &gm, NULL);

    int cx = getmaxx()/2, cy = getmaxy()/2;
    line(20, cy, getmaxx()-20, cy);
    line(cx, 20, cx, getmaxy()-20);
    outtextxy(cx, cy, "O");
    //y=5*x-3*sinx^2(k*x) y=cos(k*x) y=4x^7-3x^3+5
    setcolor(GREEN);

    for (x = 0; x < getmaxx(); x+=0.01) {
            /* Calculate y with given x */
            y = 4 * pow(x, 7) - (3 * pow(x, 3) + 5);
            y = cy - y;

            /* Coloring pixel at x and y */
            if (y < 0) {
                    break;
            }
            putpixel(x+cx, y, GREEN);
            delay(50);
    }
    for (x = 0; x < getmaxx() && x+cx >= 0; x-=0.01) {
            /* Calculate y with given x */
            y = 4 * pow(x, 7) - 3 * pow(x, 3) + 5;
            y = cy - y;

            /* Coloring pixel at x and y */
            if (y > getmaxy())
                    break;
            putpixel(x+cx, y, GREEN);
            delay(50);
    }

    getch();
    closegraph();
    return (0);
}