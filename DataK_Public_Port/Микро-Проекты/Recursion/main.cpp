#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    string stroka;
    string MAIN[100],TOTAL="";
    int n=0;
    ifstream in("input.txt");
    ofstream ou("output.txt");
    while( !(in.eof()) ){
        getline(in,stroka);
        TOTAL= TOTAL+stroka+'\n';
        MAIN[n]=stroka;
        n++;
        //ou << stroka << endl;


    }
    int YPOS=0;
    int XPOS=0;
    string String_Right_Now="*ReC*";
    string strings[7];

    int amountOfStrings=7; //should stay the same
    int counter=0;
    strings[0]="*ReC*";
    strings[1]="*ReCuRsIoN*";
    strings[2]="(ReC)";
    strings[3]="[INSERT]";
    strings[4]="<>";
    strings[5]="";
    strings[6]="\/";
    while(1){
        char a =getch();

        if((int)(a) == 72){YPOS--;}
        if((int)(a) == 77){XPOS++;}
        if((int)(a) == 80){YPOS++;}
        if((int)(a) == 75){XPOS--;}
        if((int)(a) == 8){

            break;
        }
        if((int)(a) == 13){counter++;String_Right_Now = strings[counter % amountOfStrings];}
        system("cls");
        cout << (int)(a) << endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<MAIN[i].size();j++){
                if(XPOS==j && YPOS==i){
                    cout << String_Right_Now;
                }
                cout << MAIN[i][j];

            }

            cout << endl;
        }
    }
    string FIRST="",SECOND="";
    int a;
    int doesItPassed=0;
    cin >> a;
    for(int i=0;i<n;i++){
        for(int j=0;j<MAIN[i].size();j++){
            if(XPOS==j && YPOS==i){doesItPassed=1;}
            if(doesItPassed){
            SECOND+=MAIN[i][j];
            }else{
            FIRST+=MAIN[i][j];
            }
        }
        if(n-i!=1){
        if(doesItPassed){
            SECOND+='\n';
            }else{
            FIRST+='\n';
            }
        }

    }
    for(int i=0;i<a;i++){ou << FIRST;}
    for(int i=0;i<a;i++){ou << SECOND;}


}
