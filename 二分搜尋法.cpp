#include<iostream>
using namespace std;
#define MAX 30
int a[MAX];
int m,n,key;
int binsrch(int l,int h);
int binsrch(int l, int h)
{
    /*�G���j�M�k*/
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
     cout<<" �п�J��ƭӼ�< 30" << endl;
     cin >> n;
     
     cout << " �ХѤj�ܤp��J" << n << " �Ӹ��" << endl;
     for (i=1; i<=n; i++)
     cin >> a[i];
     
     cout << " ��J��ư}�C" << endl;
     for (i=1; i<=n; i++)
     cout << a[i] << " ";
     cout <<  "\n\n";
     select(a,n);
     cout<<"�Ƨǿ�J��ư}�C" <<endl;
     for(i=1;i<=n;i++)
        cout << a[i] << " ";
     cout <<  "\n\n";
    cout << " �п�J���j�M�����" << endl;
    cin >> key;
    cout << " ���j�M�����= " << key <<endl;
    cout << "left mid right\n";
    i = binsrch(1,n);
    if (i == -1)
    cout<<key<<" ���b�}�C��\n\n";
    else
    cout<<key<<" �o�{�b��m"<<i <<"\n\n";
    
    cout<<endl;
    cout<<"�Z�šG���M��T�T��"<<endl;
    cout<<"�Ǹ��G50231116"<<endl;
    cout<<"�m�W�G�]�ߩ�"<<endl;
    cout<<"�ڪ��ĥ|��C++�{���A�G���j�M�k!"<<endl;
    cout<<endl;
    system("Pause");
    return 0;
}

    
     
