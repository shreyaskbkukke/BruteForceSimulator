/**************************************
Author: Shreays KB
3rd BCA "B"
date :19/11/2022
**************************************/

//Header files section
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<stdlib.h>
#include<dos.h>
#include<ctype.h>

//Global variable declation
long int pass=123,rpass,tpass;
char command;
int count=0,choice;

//function declation
void bo(int x1, int y1,int x2,int y2);
void lin(int x1, int y1, int x2);
void pa(void);
//Main section
void main()
{
  while(!kbhit())
  {
  clrscr();
  gotoxy(31,7);cout<<"........Tool Menu........";
  bo(20,5,65,23);
  lin(20,9,65);
  lin(20,19,65);
  gotoxy(30,11);
  cout<<"1.Administator tool";
  gotoxy(30,13);
  cout<<"2.Login page";
  gotoxy(30,15);
  cout<<"3.Start Brute force";
  gotoxy(30,17);
  cout<<"4.Exit";
  gotoxy(28,19);
  cout<<"  Please enter your choice  ";
  gotoxy(30,21);
  cin>>choice;
  switch(choice)
  {
    case 1:
    {
      clrscr();
      gotoxy(25,7);cout<<"Enter the new password to change";
      bo(20,5,65,23);
      lin(20,9,65);
      bo(30,13,55,16);
      gotoxy(32,14);cout<<"Username: Admin ";
      gotoxy(32,15);cout<<"Password:       ";
      gotoxy(42,15);cout<<"******";
      lin(20,19,65);
      gotoxy(42,15);cin>>pass;
      break;
    }
    case 2:
    {
      clrscr();
      gotoxy(30,7);cout<<"Login page";
      bo(20,5,65,23);
      lin(20,9,65);
      bo(30,13,55,16);
      gotoxy(32,14);cout<<"Username: Admin ";
      gotoxy(32,15);cout<<"Password:       ";
      gotoxy(42,15);cout<<"******";
      lin(20,19,65);
      gotoxy(42,15);cin>>tpass;
      if(pass!=tpass) {gotoxy(23,20); cout<<"The username and password did not match!";}
	 else
      pa();
      delay(1000);
      break;
    }
    case 3:
    {
      gotoxy(35,20); cout<<"Loading to terminal...";
      for(int k=22;k<64; k++)
      {
	gotoxy(k,21);putch(176);
      }
      for(k=22;k<64;k++)
      {
	gotoxy(k,21);putch(219);
	delay(100);
      }
      clrscr();
      cout<<"Enter command to start brute force attack: ";
      cin>>command;
      while(kbhit)
      {
	if(rpass==pass)
	{
	  cout<<">>airtack -login - user 'Admin' - password '"<<rpass<<"' - Athentication Success.\nPassword is found as: "<<rpass<<endl;
	  delay(10000);
	  break;
	}
	else
	{
	  cout<<">>airtack -login - user 'Admin' - password '"<<rpass<<"' - Athentication failed "<<endl;
	  rpass++;
	  if(count>0)
	  {
	    delay(1500); count--;
	  }
	}
      }break;
    }
    case 4:exit(0);break;
    default:
    {
      clrscr();
      gotoxy(25,5);
      printf("Invalid choice...!");
      getche();
      break;
    }

  }}
  getch();
}
//function to display the victim website
void pa(void)
{
     clrscr();
     cout<<"\n\nWelcome to Narendra Pre-University College\n"<<endl;
     cout<<"The Campus of NARENDRA PU College always gives a feel of sacred.Though students are from different cultural backgrounds they live happily under the single roof. The reason is that the atmosphere here is clement and peaceful. Prayer sessions at the dawn and dusk, meditation, warm up exercises, yoga, pranayama at the crack of dawn, cultural and entertainment programmes at the week end and also affection, care and parent like concern of Principal, friendly treatment of the lecturers and non teaching staff and counseling have given the students a feeling of joy and satisfaction.";
     delay(5000);
}
//function to draw the box as dialog box
void bo(int x1, int y1, int x2, int y2)
{
	int x;
	gotoxy(x1,y1);putch(201);gotoxy(x2,y1);putch(187);
	gotoxy(x1,y2);putch(200);gotoxy(x2,y2);putch(188);
	for(x=x1+1;x<x2;x++) {gotoxy(x,y1);putch(205);gotoxy(x,y2);putch(205);}
	for(x=y1+1;x<y2;x++) {gotoxy(x1,x);putch(186);gotoxy(x2,x);putch(186);}
}
//function to dreaw the line which combine with the box
void lin(int x1,int y1,int x2)
{
  int k;
  gotoxy(x1,y1);putch(204);gotoxy(x2,y1);putch(185);
  for(k=x1+1;k<x2;k++) {gotoxy(k,y1);putch(205);}
}