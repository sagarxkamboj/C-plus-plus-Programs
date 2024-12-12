#include<iostream>
using namespace std;
int main()
{
    const int rows=4;
    const int cols=4;
    int baseAddress;
    int elementSize;
    int i,j;

    cout<<"Enter the base address of the matrix:";
    cin>>baseAddress;
    cout<<"Enter the size of each element(in bytes):";
    cin>>elementSize;
    cout<<"Enter the row index(i):";
    cin>>i;
    cout<<"Enter the column index(j):";
    cin>>j;

    if(i<0 || i>=rows || j<0 ||j>=cols)
    {
        cout<<"Invalid row or column index"<<endl;
        return 1;
    }
    int address=baseAddress+elementSize*(i*cols+j);

    cout <<"The address of the element at("<<i<<","<<j<<") is: "<<address<<endl;

    return 0;
}