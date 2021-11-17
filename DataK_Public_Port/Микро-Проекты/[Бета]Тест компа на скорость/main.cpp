#include <iostream>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

int main()
{


    setlocale(0,"");
//
int AMOUF=3;
//
int time1=0,time2;
int AGT0=0,AGT1=0;
int AGT2=0,AGT3=0;
int AGT4=0,AGT5=0;
int AGT6=0,AGT7=0;
    for(int i=0;i<AMOUF;i++){
    time1=clock();
    for(long long i=0;i<100000000; i++){}
    time2=clock();
    AGT0+=(time2-time1);
    AGT1+=100000000/(time2-time1);
    }
    cout << "T0 - Завершён" << endl;
    cout << "T1 - Завершён" << endl;
    time1=clock();
    for(long long i=0;i<100000000; i++){int a = rand();}
    time2=clock();
    AGT2=(time2-time1);
    cout << "T2 - Завершён" << endl;
    time1=clock();
    string ab="";
    for(long long i=0;i<100000000; i++){ab+=(char)(rand()%255);}
    time2=clock();
    AGT3=time2-time1;
    cout << "T3 - Завершён" << endl;
    ab="";
    for(long long i=0;i<10000000; i++){ab+=(char)(rand()%255);}
    char tempt[]="output.txt";
    ofstream InPutFile(tempt);
    time1=clock();
    for(int i=0;i<1;i++){
    InPutFile << ab;
    }
    InPutFile.close();
    time2=clock();
    AGT4=time2-time1;
    cout << "T4 - Завершён" << endl;
    ab="";
    for(long long i=0;i<10; i++){ab+=(char)(rand()%255);}

    ofstream InPutFile2(tempt);
    time1=clock();
    for(int i=0;i<10000000;i++){
    InPutFile2 << ab;
    }
    InPutFile2.close();
    time2=clock();
    AGT5=time2-time1;
    cout << "T5 - Завершён" << endl;
    ifstream ReadFile(tempt);
    time1=clock();
    while(!(ReadFile.eof())){getline(ReadFile,ab);}
    ReadFile.close();
    time2=clock();
    AGT6=time2-time1;
    cout << "T6 - Завершён" << endl;
    int T0=AGT0/AMOUF;
    int T1=AGT1/AMOUF;
    double T2=((double)(AGT2))/(double)(T0);
    double T3=((double)(AGT3))/(double)(T0);
    system("cls");
    cout<<"T0 - "<< T0 <<" мс для 100млн. Цикла" << endl;
    cout<<"T1 - "<< T1/1000 <<" Кол-во операций в мс(в тыс.)"<< endl;
    cout<<"T2 - "<<fixed << setprecision(1)<< T2 << endl;
    cout<<"T3 - "<<fixed << setprecision(1)<< T3 << endl;
    cout<<"T4 - " << AGT4 << " Описание"<<endl;
    cout<<"T5 - " << AGT5 << " Описание"<<endl;
    cout<<"T6 - " << AGT6 << " Описание"<<endl;
    int a;
    cin >> a;

}
