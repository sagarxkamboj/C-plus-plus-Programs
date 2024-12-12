#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char name[30];
    cout<<"Enter your name for further procedure\n";
    cin>>name;
    cout<<"Enter value for three numbers:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<< a <<" is greater"<<endl;
    }

        else if(b>a && b>c)
        {
            cout<< b <<" is greater"<<endl;
        }

    else {
        cout<< c <<" is greater"<<endl;
    }

    cout<< name <<"\tThanku for using our service";
    
    

    return 0;
    


   
}