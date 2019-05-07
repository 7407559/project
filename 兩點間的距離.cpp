#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{

    float x1(1),y1(1),x2(4),y2(7),dx,dy,distance;
    
    cout<<" 第一點座標x1,y1"<<endl; 
    cin>>x1>>y1;
    cout<<" 第二點座標x2,y2"<<endl; 
    cin>>x2>>y2;
        
    dx=x2-x1;    
    dy=y2-y1;
    distance= sqrt(dx*dx+dy*dy); 
    
    cout<<" 兩點間距離="<<distance<<endl;
    cout<<"班級 : 五專資訊三忠"<<endl;
    cout<<"學號 : 50231116"<<endl;
    cout<<"姓名 : 孫立明"<<endl;
    cout<<"我的第一個C++程式， 大家好!"<<endl;
    cout<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
} 
