#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter the lengths of three sides of triangle" << endl;
    cout<<"Side a:";
    cin>>a;
    cout<<"Side b:";
    cin>>b;
    cout<<"side c:";
    cin>>c;
    if (a+b>c && a+c>b && b+c>a)
    {
        double s = (a+b+c)/2.0;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"the area of the triangle is:" << area << endl;
    }
    else
    {
        cout << "The entered sides do not form a valid triangle" << endl;
    }
    return 0;
    
}