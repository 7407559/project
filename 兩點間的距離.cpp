#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{

    float x1(1),y1(1),x2(4),y2(7),dx,dy,distance;
    
    cout<<" �Ĥ@�I�y��x1,y1"<<endl; 
    cin>>x1>>y1;
    cout<<" �ĤG�I�y��x2,y2"<<endl; 
    cin>>x2>>y2;
        
    dx=x2-x1;    
    dy=y2-y1;
    distance= sqrt(dx*dx+dy*dy); 
    
    cout<<" ���I���Z��="<<distance<<endl;
    cout<<"�Z�� : ���M��T�T��"<<endl;
    cout<<"�Ǹ� : 50231116"<<endl;
    cout<<"�m�W : �]�ߩ�"<<endl;
    cout<<"�ڪ��Ĥ@��C++�{���A �j�a�n!"<<endl;
    cout<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
} 
