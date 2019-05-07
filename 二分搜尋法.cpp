#include<iostream>
using namespace std;
#define MAX 30
int a[MAX];
int m,n,key;
int binsrch(int l,int h);
int binsrch(int l, int h)
{
    /*二分搜尋法*/
    if(l>h) return(-1);
    else
    {
        m=(l+h)/2;
        cout<<" "<<l<<" "<<m<<" "<<h<<endl;
        
        if(a[m] ==key) return(m);
        else if (a[m]>key) return(binsrch(l, m-1));
        else return(binsrch(m+1,h)); 
        }
        }
void select(int *,int );        
void select (int data[],int n)
        {for(int i=1;i<n;i++)
        {for(int j=i+1;j<=n;j++)
        {
                 if(data[i]>data[j])
                 {
                                    int tmp;
                                    tmp=data[i];
                                    data[i]=data[j];
                                    data[j]=tmp;
                                    }
                                    }
                                    }
                                    }
int main()
{
     int i;
     cout<<" 請輸入資料個數< 30" << endl;
     cin >> n;
     
     cout << " 請由大至小輸入" << n << " 個資料" << endl;
     for (i=1; i<=n; i++)
     cin >> a[i];
     
     cout << " 輸入資料陣列" << endl;
     for (i=1; i<=n; i++)
     cout << a[i] << " ";
     cout <<  "\n\n";
     select(a,n);
     cout<<"排序輸入資料陣列" <<endl;
     for(i=1;i<=n;i++)
        cout << a[i] << " ";
     cout <<  "\n\n";
    cout << " 請輸入欲搜尋的鍵值" << endl;
    cin >> key;
    cout << " 欲搜尋的鍵值= " << key <<endl;
    cout << "left mid right\n";
    i = binsrch(1,n);
    if (i == -1)
    cout<<key<<" 不在陣列中\n\n";
    else
    cout<<key<<" 發現在位置"<<i <<"\n\n";
    
    cout<<endl;
    cout<<"班級：五專資訊三忠"<<endl;
    cout<<"學號：50231116"<<endl;
    cout<<"姓名：孫立明"<<endl;
    cout<<"我的第四個C++程式，二分搜尋法!"<<endl;
    cout<<endl;
    system("Pause");
    return 0;
}

    
     
