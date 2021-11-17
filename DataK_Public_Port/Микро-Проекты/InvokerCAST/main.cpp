#include <iostream>
#include <istream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <cwchar>
#include <conio.h>
#include <ctime>
#include <stdio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>
/*
Оригинальное название Игры: инвок.txt
Переименную в InvokerCAST
Дата Оригинального Кода: 30.03.2019


*/
using namespace std;
int rr(){
srand(time(0));
}

void clr(){ system("cls");}

void spc(int x){ if(x == 1){cout << "Q";}
 if(x == 2){cout << "W";}
  if(x == 3){cout << "E";}
}
int spci(char x){
if(x == 'q'){return 1; }
if(x == 'w'){return 2; }
if(x == 'e'){return 3; }
if(x == 'r'){return 4; }
}
int main()
{
    int b=0;
    setlocale(0, "");
    char INP;
    time_t t;
    srand(time(0));
    int s1=1, s2=1, s3=1;
    int r1,r2,r3; // 1 - q; 2 - w; 3 - e;
    for(int i = 0; i < (time(0) % 300); i++){rand();}
while(1){
      int skill = rand() % 10;
      clr();


      while(1){
clr();
            switch(skill){
      case 0 :
      cout << "Cold Snap";
      break;
      case 1 :
      cout << "Ghost Walk";
      break;
      case 2 :
      cout << "Ice Wall";
      break;
      case 3 :
      cout << "EMP";
      break;
      case 4 :
      cout << "Tornado";
      break;
      case 5 :
      cout << "Alacrity";
      break;
      case 6 :
      cout << "Sun Strike";
      break;
      case 7 :
      cout << "Forge Spirit";
      break;
      case 8 :
      cout << "Chaos Meteor";
      break;
      case 9 :
      cout << "Deafening Blast";
      break;
            }
            cout << endl;
            spc(s1);
      cout << " ";
      spc(s2);
      cout << " ";
      spc(s3);
      cout << " ";
      cout << endl;
      cout <<"Удачных Кастов - " << b;
            char NU = getch();

            if(NU == 'r'){
                int thS;
                if(((s1 ==1) && (s2 ==1) && (s3 ==1 )) || ((s1 ==1) && (s2 ==1) && (s3 ==1 )) || ((s1 ==1) && (s2 ==1) && (s3 ==1 ))){thS=0;}
                if(((s1 ==1) && (s2 ==1) && (s3 ==2 )) || ((s1 ==2) && (s2 ==1) && (s3 ==1 )) || ((s1 ==1) && (s2 ==2) && (s3 ==1 ))){thS=1;}
                if(((s1 ==1) && (s2 ==1) && (s3 ==3 )) || ((s1 ==3) && (s2 ==1) && (s3 ==1 )) || ((s1 ==1) && (s2 ==3) && (s3 ==1 ))){thS=2;}
                if(((s1 ==2) && (s2 ==2) && (s3 ==2 )) || ((s1 ==2) && (s2 ==2) && (s3 ==2 )) || ((s1 ==2) && (s2 ==2) && (s3 ==2 ))){thS=3;}
                if(((s1 ==2) && (s2 ==2) && (s3 ==1 )) || ((s1 ==2) && (s2 ==1) && (s3 ==2 )) || ((s1 ==1) && (s2 ==2) && (s3 ==2 ))){thS=4;}
                if(((s1 ==2) && (s2 ==2) && (s3 ==3 )) || ((s1 ==2) && (s2 ==3) && (s3 ==2 )) || ((s1 ==3) && (s2 ==2) && (s3 ==2 ))){thS=5;}
                if(((s1 ==3) && (s2 ==3) && (s3 ==3 )) || ((s1 ==3) && (s2 ==3) && (s3 ==3 )) || ((s1 ==3) && (s2 ==3) && (s3 ==3 ))){thS=6;}
                if(((s1 ==3) && (s2 ==3) && (s3 ==1 )) || ((s1 ==3) && (s2 ==1) && (s3 ==3 )) || ((s1 ==1) && (s2 ==3) && (s3 ==3 ))){thS=7;}
                if(((s1 ==3) && (s2 ==3) && (s3 ==2 )) || ((s1 ==3) && (s2 ==2) && (s3 ==3 )) || ((s1 ==2) && (s2 ==3) && (s3 ==3 ))){thS=8;}
                if(((s1 ==1) && (s2 ==2) && (s3 ==3 )) || ((s1 ==1) && (s2 ==3) && (s3 ==2 )) || ((s1 ==2) && (s2 ==1) && (s3 ==3 )) || ((s1 ==2) && (s2 ==3) && (s3 ==1 )) || ((s1 ==3) && (s2 ==2) && (s3 ==1 )) || ((s1 ==3) && (s2 ==1) && (s3 ==2 ))){thS=9;}




                if( thS == skill){
                    b+=1;
                    int skill = rand() % 10;
                   break;


                }







            }else{
                clr();

      s3 = s2;
      s2= s1;
      s1 = spci(NU);




            }




      }








}





}

