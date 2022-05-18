#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a whole number : ";
    cin>>a;
    int remainder = a % 2;

    if(remainder==0)
    {
        cout<<"The entered number is even\n";
    }
    else
    {
        cout<<"The entered number is odd\n";
    }

    cout<<"Thank You\n";

    return 0;
    system("pause>0");
}