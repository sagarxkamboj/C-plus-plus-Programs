#include <iostream>
using namespace std;
int main()
{
    int limit;
    cout<<"Enter The limit for the series:";
    cin>>limit;
    int fibseries[100];
    int size=0;
    int a=0,b=1;

    if (limit>=0)fibseries[size++]=a;

    if(limit>=1)fibseries[size++]=b;

    while (a+b<=limit)
    {
        int next=a+b;
        fibseries[size++]=next;
        a=b;
        b=next;

    }
    cout<<"Fibonacci series upto"<<limit<<":";
    for (int i = 0; i < size; i++)
    {
        cout<<fibseries[i]<<"   ";
    }
    cout<<endl;
    cout<<"Missing terms up to"<<limit<<":";
    int fiboindex=0;
    for (int i = 0; i <= limit; i++)
    {
        if (fiboindex < size && fibseries[fiboindex]==i)
        {
            fiboindex++;
        }
        else{
            cout<<i<<"    ";
        }
    }
    cout<<endl;
    return 0;
        
    
    
    
    
    
}