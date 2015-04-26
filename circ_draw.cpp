#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
   // for graphics functions
  // for graphics functions
////////////////////////////////////////////////////
struct circle          // graphics circle
{
       int xCo, yCo;   // coordinates of center
       int radius;
       color fillcolor;   // color
       fstyle fillstyle;  // fill pattern
       };
/////////////////////////////////////////////////////
void circ_draw(circle c)
{
     set_color(c.fillcolor);                // set color
     set_fill_style(c.fillstyle);           // set fill pattern
     draw_circle(c.xCo, c.yCo, c.radius);   // draw solid circle
 }
//----------------------------------------------------
int main()
{
    init_graphics();     // initialize graphics systems
                         // creates circles
    circle c1 = { 15, 7, 5, cBLUE, X_FILL };
    circle c2 = { 41, 12, 7, cRED, O_FILL };
    circle c3 = { 65, 18, 4, cGREEN, MEDIUM_FILL};
    circ_draw(1);          // draw circle
    circ_draw(2);
    circ_draw(3);
    set_cursor_pos(1, 25); // cursor to lower left corner
    getch();
    return 0;
}
