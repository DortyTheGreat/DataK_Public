#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

    string key,MainTextInp,MainTextOut,stroka;
    string hhh;

       char a2[]="output.txt";
    char a[]="input.txt";
    ifstream fileq(a);
    ofstream fileq2(a2);

    while(! fileq.eof() ){
    getline(fileq,stroka);
    MainTextInp+=stroka + '\n';
    }
    cout << MainTextInp ;

   cout <<"������� ���������� ���� ����� � ���������" << endl;
   cout <<"�������, � ���";
   cin >> hhh;
   if(hhh == "-Per8"){
    system("cls");
    cout << "������� ����� (1 - ������������) (0 - �������������) " << endl;
    char ttrt = getch();

    if(ttrt == '1'){


    }else{

    }



   }else{
   cout << "CKSI NS? ytrekmnehysq xtkdtr? gjitk rf ns jnc.lf? ns vtyz yt bynthtcvetim? gjitk jncelf djy!!!";

   }
}
