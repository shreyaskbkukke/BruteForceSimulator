#include<iostream.h>
#include<conio.h>
void main()
{ 
    clrscr();
    int n,c,k;
    cout<<"Enter an Integer in decimal number system : ";
    cin>>n;
    cout<<"Binary number system is : ";
    for (c = 31; c >= 0; c--)
    {
        k = n >> c;
        if (k & 1)
            cout<<"1";
        else
            cout<<"0";
  } 
    cout<<"\n";
    getch();
}