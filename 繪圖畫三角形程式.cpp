#include <cmath>
#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    int x, y;
    double x1,y1,x2,y2,x3,y3,dx,dy;
    cout<<"�Ĥ@�I�y��x1="<<endl;
    cin>>x1;
    cout<<"�ĤG�I�y��y1="<<endl;
    cin>>y1;
     cout<<"�Ĥ@�I�y��x2="<<endl;
    cin>>x2;
    cout<<"�ĤG�I�y��Y2="<<endl;
    cin>>y2;
     cout<<"�Ĥ@�I�y��x3="<<endl;
    cin>>x3;
    cout<<"�ĤG�I�y��y3="<<endl;
    cin>>y3;
    initwindow(600,600,"�e���T����");
    
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
            outtextxy(100,100,"�Z�šG���M��T�T��");
            outtextxy(100,150,"�Ǹ��G50231116");
            outtextxy(100,200,"�m�W�G�]�ߩ�");
            outtextxy(100,250,"�ڪ���8��C++ø�ϵe�T���ε{��!");
            
            setcolor(15);
            line(int(x1),int(y1)+250,int(x2),int(y2)+250); 
            line(int(x1),int(y1)+250,int(x3),int(y3)+250); 
            line(int(x2),int(y2)+250,int(x3),int(y3)+250); 
    system("PAUSE");
    return 0;
}
