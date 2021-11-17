#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
  double x,y,tx,ty,xtoo,ytoo,xstep,ystep,time,temp,formul;
    int a[31][31];
void ccs(){
for(int i=0; i<31; i++){
    for(int j=0;j<31; j++){
        cout << a[i][j] << "";

    }
    cout << endl;
}
}
int main()
{

    time=GetTickCount();

    for(int i=0; i<31; i++){
        a[15][i]=2;}
    for(int i=0; i<31; i++){
        a[i][15]=2;}

        for(int i=0; i<31;i++ ){
            for(int j=0;j<31;j++){
                    for(float fractaa=0; fractaa<100; fractaa++){
                y=15-i;
                x=(-1)*(abs(j-15)  -(fractaa/100)) ;

                if((x*x   >= y) && (x*x   < y+1)){a[i][j]=1;} // не +1, а +шаг(хз каво).
                    }
            }

        }

            ccs();
           double fractaa=110;
           int j=15;
               x=j-15  -(fractaa/100);
                cout << x <<( fractaa/100);

}
