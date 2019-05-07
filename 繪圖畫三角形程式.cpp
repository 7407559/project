#include <cmath>
#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int x, y;
    double x1,y1,x2,y2,x3,y3,dx,dy;
    cout<<"第一點座標x1="<<endl;
    cin>>x1;
    cout<<"第二點座標y1="<<endl;
    cin>>y1;
     cout<<"第一點座標x2="<<endl;
    cin>>x2;
    cout<<"第二點座標Y2="<<endl;
    cin>>y2;
     cout<<"第一點座標x3="<<endl;
    cin>>x3;
    cout<<"第二點座標y3="<<endl;
    cin>>y3;
    initwindow(600,600,"畫成三角形");
    
    dx=x2-x1;
    dy=y2-y1;
    
    for(int i=0;i<=4000;i++){
            x=int(x1+(dx/4000)*i);
            y=int(y1+(dy/4000)*i);
            putpixel(x,y,GREEN);
            }
            dx=x3-x1;
            dy=y3-y1;
            for(int i=0;i<=4000;i++){
            x=int(x1+(dx/4000)*i);
            y=int(y1+(dy/4000)*i);
            putpixel(x,y,BLUE); }
            
             dx=x3-x2;
            dy=y3-y2;
            for(int i=0;i<=4000;i++){
            x=int(x2+(dx/4000)*i);
            y=int(y2+(dy/4000)*i);
            putpixel(x,y,YELLOW); }
            outtextxy(100,100,"班級：五專資訊三忠");
            outtextxy(100,150,"學號：50231116");
            outtextxy(100,200,"姓名：孫立明");
            outtextxy(100,250,"我的第8個C++繪圖畫三角形程式!");
            
            setcolor(15);
            line(int(x1),int(y1)+250,int(x2),int(y2)+250); 
            line(int(x1),int(y1)+250,int(x3),int(y3)+250); 
            line(int(x2),int(y2)+250,int(x3),int(y3)+250); 
    system("PAUSE");
    return 0;
}
