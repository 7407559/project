#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{  cout<< "班級：五專資訊三忠\n";
   cout<< "學號：50231116\n"; 
   cout<< "姓名：孫立明\n"; 
   cout<< "我的第五個c++程式，猜數字遊戲。 \n\n"; 
   
   srand(time(NULL));
   int num=rand()%100;
   int guess, count=0;
   bool is_guess=false;
   char try_again;
   do
   {   cout<<"****************************************" << endl; 
       cout<<"          C++猜數字0-99 遊戲    "         << endl;
       cout<<"****************************************" << endl;
       cout<<"\n";
       
       do
       { cout<<"輸入猜字遊戲之數字："; 
         cin>>guess;
         if(guess == num)
         { is_guess=true;
           count++;
           cout<<"你總共已猜了"<<"次，\n";
           cout<<"哇!好棒喔!你終於猜對了 !! \n";
           }
          else
          if(guess > num)
          {count++;
           cout<<"你總共已猜了"<<count<<"次， \n";
           cout<<"太大了，在猜小一點!"<<endl;
           }
           else
           {count++;
            cout<<"你總共已猜了"<<count<<"次， \n";
           cout<<"太大了，在猜小一點!"<<endl;
           }
           }while(!is_guess);
           cout<<"\n繼續猜數字遊戲,請輸入Y或y \n";
           cin>>try_again;
           num=rand()%100;
           is_guess=false;
           count=0;
           }while(try_again == 'Y' ||try_again == 'y');
           
           system("pause");
           return 0;
}

            
            
        
    
