#include <cstdlib>
#include <iostream>
using namespace std;
typedef struct listnode
{  float info;
   struct listnode *next;
}NODE;

NODE*create();

int Get_Node(NODE*,float);
void print_list(NODE *list);

int main()
{char YesNo;
int rp;
float key;
NODE *list;
cout<<endl;
cout<<"�Z�šG���M��T�T��"<<endl;
cout<<"�Ǹ��G50231116"<<endl;
cout<<"�m�W�G�]�ߩ�"<<endl;
cout<<"��12�ӵ{���A��C���c�C�L�`�I��Ʀ�}!\n";
cout<<endl;
list=create();
cout<<"��X��C��Ƭ�\n";
print_list(list);
do
{cout<<"�п�J�j�M���\n";
cin>>key;
rp=Get_Node(list, key);
if(rp==1)  cout<<"�j�M��ƥ���!\n";
else
cout<<"�j�M��Ƹ`�I:"<<key<<"�b��C����}��:"<<rp<<"\n";
cout<<"�~���J��ƽХ�Y��y\n";
cin>>YesNo;
}while((YesNo=='Y')|(YesNo=='y'));
cout<<"\n";    system("PAUSE");  return 0;
}
NODE*create()
{NODE *p,*list;  float x;  char YesNo;   list=NULL;
cout<<"�п�J���\n";
do
{cin>>x;
p= new NODE;  p->info=x;  p->next=list;  list=p;
cout<<"�п�J���="<<p->info<<";�x�s��}��: "<<p<<"\n";
cout<<"�~���J��ƽХ�Y��y\n";
cin>>YesNo;
}while((YesNo=='Y')|(YesNo=='y'));
cout<<"\n";  return(list);
}
void print_list(NODE *list)
{NODE *p;
p=list;
while(p !=NULL)
{  cout<<p->info<<" ";
   p=p->next;
}
cout<<"\n";
}
int Get_Node(NODE *head, float nodedata)
{NODE *p,*q;    int count;  count = 1;
 p=head;
 q=head->next;
 cout<<"��1����Ƹ`�I�x�s��}��: "<<"\n";
 while((q!=NULL)&&(p->info!=nodedata))
 {p=q; q=q->next;  count++;
  cout<<"��"<<count<<"����Ƹ`�I�x�s��}��: " <<p<<"\n"; 
}
if(q!=NULL||p->info==nodedata)   return(count); 
else
  return(-1);
} 
                                            

   
   

