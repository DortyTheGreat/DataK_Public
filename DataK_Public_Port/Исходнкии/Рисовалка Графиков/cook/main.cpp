#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>
#include <vector>

using namespace std;
double funcy(double y){
double ans = y;

return ans;
}
double func(double x){

double ans=x*x*x ;

return ans;
}
  double x,y,tx,ty,xtoo,ytoo,xstep=0.4,ystep=0.6,time,temp,formul,xtrans=0,ytrans=0;
  int accur=1000,wheretomove=0;
  int o_31,o_15;

  char a[1000][1000];

void ccs(){
for(int i=0; i<o_31; i++){
    for(int j=0;j<o_31; j++){
        if(a[i][j]== '1'){cout <<"#";}else{
            if(a[i][j]== '0'){cout << " ";}else{
                cout << a[i][j];
            }

        }

    }
    cout << endl;
}
}
int main()
{

    time=GetTickCount();
o_15=200;
  o_31=o_15*2 +1;

    while(1){
for(int i=0;i<o_31;i++){
    for(int j=0;j<o_31;j++){
        a[i][j]='0';
    }

}

    for(int i=0; i<o_31; i++){
    if( ((ytrans <= o_15))&&(ytrans >= -o_15)){    a[(int)(o_15+ytrans)][i]='-';}}
    for(int i=0; i<o_31; i++){
     if( ((xtrans <= o_15))&&(xtrans >= -o_15)){   a[i][(int)(o_15-xtrans)]='|';}}

        for(int i=0; i<o_31;i++ ){
            for(int j=0;j<o_31;j++){
                    y=ystep*(o_15-i +ytrans);
                x=xstep*((j-o_15 +xtrans)+ 0.5);
            if(x<0){x-=xstep;}
                    for(float fractaa=0; fractaa<accur; fractaa++){
y=ystep*(o_15-i +ytrans);
                x=xstep*((j-o_15 +xtrans)+ 0.5);
            if(x<0){x-=xstep;}

                if(x>0){

                    x-=xstep*(fractaa/accur);
                }else{
                if(x<0){
                    x+=xstep*(fractaa/accur);
                }
                }

                if(((func(x)   >= funcy(y-(ystep/2))) && (func(x)   <= funcy(y +(ystep/2) ))) ||(func(x) == funcy(y)) || (((func(x)   <= funcy(y-(ystep/2))) && (func(x)   >= funcy(y +(ystep/2) ))))){a[i][j]='1';
                } // �� +1, � +���(�� ����).
                    }
            }

        }
//
            ccs();
            char todo;
            todo=getch();
            //1 - �����, 2-����, 3������� 4 �����
            if(((int)(todo) == 119) || ((int)(todo) == 87) || ((int)(todo) == -106) || ((int)(todo) == -26)){ytrans++;}
            if(((int)(todo) == 115) || ((int)(todo) == 83) || ((int)(todo) == -101) || ((int)(todo) == -21)){ytrans--;}
            if(((int)(todo) == 100) || ((int)(todo) == 68) || ((int)(todo) == -126) || ((int)(todo) == -94)){xtrans++;}
            if(((int)(todo) ==  97) || ((int)(todo) == 65) || ((int)(todo) == -108) || ((int)(todo) == -28)){xtrans--;}
            system("cls");


    }

}
