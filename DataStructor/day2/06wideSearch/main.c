#include <stdio.h>
#include "myqueue.h"
#include <string.h>

#define MAXROW 10
#define MAXLINE 10

Queue s;

Point prePoint[MAXROW][MAXLINE];

//1 代表墙，2 走过的路，0 代表路
int maze[MAXROW][MAXLINE] =
{
    1,1,1,1,1,1,1,1,1,1,
    0,0,0,1,1,1,1,1,1,1,
    1,1,0,1,1,1,1,1,1,1,
    1,1,0,0,0,0,1,1,1,1,
    1,1,0,1,1,0,1,1,1,1,
    1,1,0,1,1,0,1,1,1,1,
    1,1,0,1,1,0,1,1,1,1,
    1,0,0,1,1,0,0,0,1,1,
    1,0,1,1,0,1,1,0,0,0,
    1,0,0,0,0,1,1,1,1,1,
};

void displyMaze()
{
    for(int i=0; i< MAXROW; i++)
    {
        for(int j=0; j<MAXLINE; j++)
        {
            if(maze[i][j] == 1) printf("%2s"," *");      //墙
            else if(maze[i][j] == 2) printf("%2s"," #"); //走过的路
            else printf("%2s"," ");                      //路
        }
        putchar(10);
    }
    printf(" ====================\n");
}

void displayPrePoint()
{
    for(int i=0; i< MAXROW; i++)
    {
        for(int j=0; j<MAXLINE; j++)
        {
            printf("(%2d,%2d) ",prePoint[i][j]);
        }
        putchar(10);
    }
    printf(" ====================\n");
}

void visit(int x, int y, Point t)
{
    Point p = {x,y};
    enQueue(&s,p);

    prePoint[x][y] = t;
}

int main()
{
    Point sp = {1,0},ep = {8,9};

    memset(prePoint,0xff,sizeof(Point)*MAXROW*MAXLINE);

    initQueue(&s);
    enQueue(&s,sp);

    int flag = 1;

#if 1
    while(!isQueueEmpty(&s))
    {
        Point t;
        t = deQueue(&s);
        maze[t._x][t._y] = 2; //表示走过的路

        system("cls");
        displyMaze();
        sleep(1);

        //左
        if(t._y-1>=0 && maze[t._x][t._y-1] == 0)
            visit(t._x,t._y-1, t);
        //右
        if(t._y+1<=9 && maze[t._x][t._y+1] == 0)
            visit(t._x,t._y+1, t);
        //上
        if(t._x-1>=0 && maze[t._x-1][t._y] == 0)
            visit(t._x-1,t._y, t);
        //下
        if(t._x+1<=9 && maze[t._x+1][t._y] == 0)
            visit(t._x+1,t._y, t);

        if(t._x == ep._x && t._y == ep._y)
        {
            flag = 0;
            clearQueue(&s);
            break;
        }
    }
#endif

    if(flag == 0)
        printf("Find Path\n");
    else
        printf("Find No Path\n");

    displayPrePoint();

    Point t = ep;

    while(t._y != -1)
    {
        printf("(%d,%d)",t._x,t._y);
        t = prePoint[t._x][t._y];
    }

    return 0;
}
