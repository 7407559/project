#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{  cout<< "�Z�šG���M��T�T��\n";
   cout<< "�Ǹ��G50231116\n"; 
   cout<< "�m�W�G�]�ߩ�\n"; 
   cout<< "�ڪ��Ĥ���c++�{���A�q�Ʀr�C���C \n\n"; 
   
   srand(time(NULL));
   int num=rand()%100;
   int guess, count=0;
   bool is_guess=false;
   char try_again;
   do
   {   cout<<"****************************************" << endl; 
       cout<<"          C++�q�Ʀr0-99 �C��    "         << endl;
       cout<<"****************************************" << endl;
       cout<<"\n";
       
       do
       { cout<<"��J�q�r�C�����Ʀr�G"; 
         cin>>guess;
         if(guess == num)
         { is_guess=true;
           count++;
           cout<<"�A�`�@�w�q�F"<<"���A\n";
           cout<<"�z!�n�γ�!�A�ש�q��F !! \n";
           }
          else
          if(guess > num)
          {count++;
           cout<<"�A�`�@�w�q�F"<<count<<"���A \n";
           cout<<"�Ӥj�F�A�b�q�p�@�I!"<<endl;
           }
           else
           {count++;
            cout<<"�A�`�@�w�q�F"<<count<<"���A \n";
           cout<<"�Ӥj�F�A�b�q�p�@�I!"<<endl;
           }
           }while(!is_guess);
           cout<<"\n�~��q�Ʀr�C��,�п�JY��y \n";
           cin>>try_again;
           num=rand()%100;
           is_guess=false;
           count=0;
           }while(try_again == 'Y' ||try_again == 'y');
           
           system("pause");
           return 0;
}

            
            
        
    
