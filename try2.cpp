#include<graphics.h>
#include<iostream>
int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"*C:\\TC\\BGI*");
    int i,color=15;
    for(i=0;i<20;i++)
    {
        if(color==0)
        color=15;
        else if(color==15)
        color=0;
        setcolor(color);
        circle(200,200,40);
        if(i==0)
        {
            setcolor(WHITE);
            outtextxy(200,400,"press any key to start");
            getch();
        }
        delay(500);
        if(i<20)
        cleardevice();
    }
    getch();
    closegraph();
}
