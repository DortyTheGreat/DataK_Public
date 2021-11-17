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
Оригинального названия Игры - неизвстно
Поэтому в этот день сортировки старых проектов
Назову его - У.П.Т.Р.Е. Кликер, из-за обкуренного названия переменных
Или просто Кликер_Проект
Дата создания оригинального кода = 09.02.2019

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
    cout << "Выберите ваш основной атрибут:" << endl <<"1 - Сила" << endl << "2 - Ловкость"<< endl <<"3 - Интелект"<< endl;
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


        cout << "Золото: " << Gold << endl <<"q - Клик" <<endl <<"w - Магазин" <<endl <<"e - Перерождение" <<endl <<" r - Арена" << endl;
        CH = getch();
        if(CH== 'q'){
            Gold+= (int)(TRE*COEF);
            Sleep(100);
        }
        if(CH=='w'){
                CH1= 0;
                while(CH1 !=71){
            system("cls");
            cout << "Золото :" << Gold << endl;
             cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ w" << endl;
            for(int i=0; i <4;i++){

                cout << i<<"[" << UpTRE[i] << "]" << "СТОИМОСТЬ - " << UpRR[i] << endl;
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

                cout << "ВЫ УВЕРЕНЕНЫ, ЧТО ГОТОВЫ К ПЕРЕРОЖДЕНИЮ?!?" << endl;
        cout << "Введите 's' для отмены перерождения" << endl;
        cout << "Введите 'e' для подтверждения " << endl;
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
                cout << "q - БОЙ" << endl <<"w - Древо Талантов" << endl << "e - Распределение очков атрибутов"<< endl << "r - Выход с арены" << endl;
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
              cout << "Ваши Характеристики: " << endl << "-------" <<endl <<"Здоровье - " << (int)HP <<endl<<"Регенерация Здоровья - " <<(int)HpReg <<endl << "Урон - " << (int)AP <<endl;


              cout << "Характеристики Оппонента: " << endl << "-------" <<endl <<"Здоровье - " << (int)OpHP <<endl<<"Регенерация Здоровья - " <<(int)OpHPReg <<endl << "Урон - " << (int)OpAp <<endl;
              cout << "q - Выйти" << endl <<"w - Выбор другого оппонента" <<endl <<"e - БОЙ!" << endl;
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
                    cout << "Здоровье - " <<(int)HP <<endl <<"" << (int)OpHP<<endl <<"Ваше действие:" <<endl <<"q - Атака" << endl << "w - Особое Действие(Вашего класса)" << endl;
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
                    cout << "ПОБЕДА!" << endl;
                cout << "Полученное Золото - " << reward * TRE * TRE << endl << "ВВЕДИТЕ ЛЮБУЮ КЛАВИШУ ДЛЯ ПРОДОЛЖЕНИЯ";
                Gold+=reward * TRE * TRE;
                getch();

                }else{
                cout << "ПОРАЖЕНИЕ! ВЫ НИЧЕГО НЕ ПОЛУЧАЕТЕ :-(" << endl << "ВВЕДИТЕ ЛЮБУЮ КЛАВИШУ ДЛЯ ПРОДОЛЖЕНИЯ" << endl;
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
               cout << "e - Выход" << endl;
                    cout << "Основной Атрибут - ";
               switch(Base_Atr){
           case 1:
            cout << " Сила";
            break;
           case 2:
             cout << " Ловкость";
            break;

           case 3:
             cout << " Инттелект";
            break;
               }
            cout << endl;
               cout <<"----------------" <<endl <<  "Атрибуты:" << endl;
               cout << "Сила - " <<St << endl << "Ловкость - " <<Ag << endl;
               if(Base_Atr == 3){
                cout << "Интелект - " <<In << endl;

               }
               cout << "Очки Атрибутов - " << AmStat << endl;
               cout << "--------" << endl;
               cout << "Распределение:" << endl;
               cout << "1 - Сила " << endl << "2 - Ловкость" << endl;
               if(Base_Atr == 3){
                cout << "3 - Интелект" << endl;
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
