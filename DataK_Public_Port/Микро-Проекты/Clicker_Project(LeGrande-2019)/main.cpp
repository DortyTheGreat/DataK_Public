#include <iostream>
#include <istream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <cwchar>
#include <conio.h>
#include <windows.h>
/*
������������� �������� ���� - ���������
������� � ���� ���� ���������� ������ ��������
������ ��� - �.�.�.�.�. ������, ��-�� ����������� �������� ����������
��� ������ ������_������
���� �������� ������������� ���� = 09.02.2019

*/
using namespace std;
void clr(){
 system("cls");
}
      double drand() {
    double ret = (double)rand() / ((double)rand() + 0.1);
    return ret - floor(ret);
}
int main()

{
    setlocale(0, "");
    double Gold=0,UpRR[100]={10,150,1000,10000}, UpTRE[100]={1,5,20,100},TRE=1, i, COEF=1, In=10,reward, Ar1,Ar2,Ar3  ;
    int Base_Atr, AmStat=0;
    double Ag=10, St=10;
    char CH;
    int CH1;
    while(CH != '1' && CH != '2'   && CH != '3'){
    cout << "�������� ��� �������� �������:" << endl <<"1 - ����" << endl << "2 - ��������"<< endl <<"3 - ��������"<< endl;
    CH=getch();
    switch(CH){
case '1' :
  Base_Atr=1;
   break;
case '2':
    Base_Atr=2;
    break;
case '3':
    Base_Atr=3;
    double In= 10;
    break;
    }
    }
    while(1){
            system("cls");


        cout << "������: " << Gold << endl <<"q - ����" <<endl <<"w - �������" <<endl <<"e - ������������" <<endl <<" r - �����" << endl;
        CH = getch();
        if(CH== 'q'){
            Gold+= (int)(TRE*COEF);
            Sleep(100);
        }
        if(CH=='w'){
                CH1= 0;
                while(CH1 !=71){
            system("cls");
            cout << "������ :" << Gold << endl;
             cout << "��� ������ ������� w" << endl;
            for(int i=0; i <4;i++){

                cout << i<<"[" << UpTRE[i] << "]" << "��������� - " << UpRR[i] << endl;
            }
            CH1 = (int)(getch() - 48);
            if(Gold >= UpRR[CH1]){
                Gold-=UpRR[CH1];
                TRE+=UpTRE[CH1];
                UpRR[CH1] =(int)(UpRR[CH1]* 1.2);
            }
        }
        }
        if(CH=='e'){
                CH= 'e';

                cout << "�� ���������, ��� ������ � ������������?!?" << endl;
        cout << "������� 's' ��� ������ ������������" << endl;
        cout << "������� 'e' ��� ������������� " << endl;
        CH = getch();
        if(CH == 'e'){
              St += (int)(sqrt(sqrt(sqrt(sqrt(Gold)))) + sqrt(sqrt(sqrt(sqrt(Gold)))) * (Base_Atr == 1) * 1.5);
                Ag += (int)(sqrt(sqrt(sqrt(sqrt(Gold)))) + sqrt(sqrt(sqrt(sqrt(Gold)))) * (Base_Atr == 2) * 1.5);
                if(Base_Atr == 3){
                    In += (int)(sqrt(sqrt(sqrt(sqrt(Gold)))) + sqrt(sqrt(sqrt(sqrt(Gold)))) * (Base_Atr == 3) * 1.5);
                }
                AmStat += (int)(sqrt(sqrt(sqrt(sqrt(Gold)))) * 1.5);

                COEF+= sqrt(sqrt(sqrt(sqrt(Gold))));
Gold=0;

 i=0;

 UpRR[0]=10;
 UpRR[1]=150;
 UpRR[2]=1000;
 UpRR[3]=10000;

 TRE=1;
        }


              }
              if(CH == 'r'){
                    CH = 'q';
              while(CH != 'r'){
                clr();
                cout << "q - ���" << endl <<"w - ����� ��������" << endl << "e - ������������� ����� ���������"<< endl << "r - ����� � �����" << endl;
               CH = getch();
              if(CH == 'q'){
              CH = '1';
              clr();
              Ar1=(0.5 + drand());
              Ar2=(0.5 + drand());
              Ar3=(0.5 + drand());
              double OpHP= ((400 + COEF) * Ar1);
              double OpAp= ((50 +COEF) * Ar2);
              double OpHPReg= (COEF * Ar3);
              reward= Ar1*Ar2*Ar3*Ar1*Ar2*Ar3*COEF*COEF;
              while(CH != 'q'){
              double HP= 400 + St * 10, AP = 50 + Ag, HpReg = St * 0.1;
              cout << "���� ��������������: " << endl << "-------" <<endl <<"�������� - " << (int)HP <<endl<<"����������� �������� - " <<(int)HpReg <<endl << "���� - " << (int)AP <<endl;


              cout << "�������������� ���������: " << endl << "-------" <<endl <<"�������� - " << (int)OpHP <<endl<<"����������� �������� - " <<(int)OpHPReg <<endl << "���� - " << (int)OpAp <<endl;
              cout << "q - �����" << endl <<"w - ����� ������� ���������" <<endl <<"e - ���!" << endl;
              CH = getch();
              clr();
              if(CH == 'w'){
                    Ar1=(0.5 + drand());
              Ar2=(0.5 + drand());
              Ar3=(0.5 + drand());
                OpHP= ((400 + COEF) * Ar1);
              OpAp= ((50 +COEF) * Ar2);
             OpHPReg= (COEF * Ar3);
              }
              if(CH == 'e'){
                while(HP > 0 && OpHP > 0){
                    cout << "�������� - " <<(int)HP <<endl <<"" << (int)OpHP<<endl <<"���� ��������:" <<endl <<"q - �����" << endl << "w - ������ ��������(������ ������)" << endl;
                    CH = getch();
                    clr();
                    HP+=HpReg;
                    OpHP+=OpHPReg;
                    HP-= OpAp * pow(0.99,Ag);
                    if(CH == 'q'){
                        OpHP-= AP;
                    }
                }
                if(OpHP <= 0){
                        clr();
                    cout << "������!" << endl;
                cout << "���������� ������ - " << reward * TRE * TRE << endl << "������� ����� ������� ��� �����������";
                Gold+=reward * TRE * TRE;
                getch();

                }else{
                cout << "���������! �� ������ �� ��������� :-(" << endl << "������� ����� ������� ��� �����������" << endl;
                getch;
                }

              }


              }
              }
               if(CH == 'w'){

               }
               if(CH == 'e'){
                    CH = 'y';
                    while(CH != 'e'){
                    clr();
               cout << "e - �����" << endl;
                    cout << "�������� ������� - ";
               switch(Base_Atr){
           case 1:
            cout << " ����";
            break;
           case 2:
             cout << " ��������";
            break;

           case 3:
             cout << " ���������";
            break;
               }
            cout << endl;
               cout <<"----------------" <<endl <<  "��������:" << endl;
               cout << "���� - " <<St << endl << "�������� - " <<Ag << endl;
               if(Base_Atr == 3){
                cout << "�������� - " <<In << endl;

               }
               cout << "���� ��������� - " << AmStat << endl;
               cout << "--------" << endl;
               cout << "�������������:" << endl;
               cout << "1 - ���� " << endl << "2 - ��������" << endl;
               if(Base_Atr == 3){
                cout << "3 - ��������" << endl;
               }
               CH = getch();
               switch(CH){
           case '1':
            if(AmStat >= 1){
                AmStat--;
                St++;
            }
            break;
            case '2':
            if(AmStat >= 1){
                AmStat--;
                Ag++;
            }
            break;
            case '3':
            if(AmStat >= 1 && Base_Atr == 3){
                AmStat--;
                In++;
            }
            break;

               }

               }




              }

              }
    }

}
return 0;
}
