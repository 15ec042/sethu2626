#include<iostream.h>
#include<conio.h>
void main()
{
  int x,y,z,u;
  clrscr();
  cout<<"enter a number";
  cin>>x;
  y=x%10;
  z=x/10;
  u=y+z;
  cout<<"square of the digit is"<<u;
  getch();
}
