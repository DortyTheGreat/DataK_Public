#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>

using namespace std;
  double x,y,tx,ty,xtoo,ytoo,xstep,ystep,time,temp,formul,xtrans=3,ytrans=0;
    char a[31][31];
void ccs(){
for(int i=0; i<31; i++){
    for(int j=0;j<31; j++){
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
    //
    while(1){
for(int i=0;i<31;i++){
    for(int j=0;j<31;j++){
        a[i][j]='0';
    }

}
    for(int i=0; i<31; i++){
        a[(int)(15+ytrans)][i]='-';}
    for(int i=0; i<31; i++){
        a[i][(int)(15-xtrans)]='|';}

        for(int i=0; i<31;i++ ){
            for(int j=0;j<31;j++){
                    for(float fractaa=0; fractaa<100; fractaa++){
                y=15-i +ytrans;
                x=(-1)*(abs(j-15 +xtrans)  -(fractaa/100) ) ;

                if((-(x*x)   >= y) && (-(x*x)   < y+1)){a[i][j]='1';} // ?? +1, ? +???(?? ????).
                    }
            }

        }
//
            ccs();
            char todo;
            todo=getch();
            if(((int)(todo) == 119) || ((int)(todo) == 87) || ((int)(todo) == -106) || ((int)(todo) == -26)){ytrans++;}
            if(((int)(todo) == 115) || ((int)(todo) == 83) || ((int)(todo) == -101) || ((int)(todo) == -21)){ytrans--;}
            if(((int)(todo) == 100) || ((int)(todo) == 68) || ((int)(todo) == -126) || ((int)(todo) == -94)){xtrans++;}
            if(((int)(todo) ==  97) || ((int)(todo) == 65) || ((int)(todo) == -108) || ((int)(todo) == -28)){xtrans--;}
            system("cls");


    }

}
