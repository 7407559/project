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
cout<<"班級：五專資訊三忠"<<endl;
cout<<"學號：50231116"<<endl;
cout<<"姓名：孫立明"<<endl;
cout<<"第12個程式，串列結構列印節點資料位址!\n";
cout<<endl;
list=create();
cout<<"輸出串列資料為\n";
print_list(list);
do
{cout<<"請輸入搜尋資料\n";
cin>>key;
rp=Get_Node(list, key);
if(rp==1)  cout<<"搜尋資料失敗!\n";
else
cout<<"搜尋資料節點:"<<key<<"在串列中位址為:"<<rp<<"\n";
cout<<"繼續輸入資料請打Y或y\n";
cin>>YesNo;
}while((YesNo=='Y')|(YesNo=='y'));
cout<<"\n";    system("PAUSE");  return 0;
}
NODE*create()
{NODE *p,*list;  float x;  char YesNo;   list=NULL;
cout<<"請輸入資料\n";
do
{cin>>x;
p= new NODE;  p->info=x;  p->next=list;  list=p;
cout<<"請輸入資料="<<p->info<<";儲存位址為: "<<p<<"\n";
cout<<"繼續輸入資料請打Y或y\n";
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
 cout<<"第1筆資料節點儲存位址為: "<<"\n";
 while((q!=NULL)&&(p->info!=nodedata))
 {p=q; q=q->next;  count++;
  cout<<"第"<<count<<"筆資料節點儲存位址為: " <<p<<"\n"; 
}
if(q!=NULL||p->info==nodedata)   return(count); 
else
  return(-1);
} 
                                            

   
   

