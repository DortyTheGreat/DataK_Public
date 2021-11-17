#include <iostream>
#include <conio.h>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <Windows.h>
#include <winuser.h>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <complex>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <Windows.h> // use < > for all system and library headers
#include <winuser.h>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <complex>
#include <string>
using namespace std;

   string MainText="";
   string FinderSystemText="";
   char newchar;
    HWND hwnd = GetDesktopWindow();
string CopyFromClip(){
HWND hwnd = GetDesktopWindow();
 string fromClipboard ;//в эту переменную сохраним текст из буфера обмена
if ( OpenClipboard(hwnd) )//открываем буфер обмена
{
   HANDLE hData = GetClipboardData(CF_TEXT);//извлекаем текст из буфера обмена
   char* chBuffer= (char*)GlobalLock(hData);//блокируем память
   fromClipboard = chBuffer;
   GlobalUnlock(hData);//разблокируем память
   CloseClipboard();//закрываем буфер обмена
}
return fromClipboard;

}

void InsToClip(HWND hwnd, const std::string &s){
    setlocale(LC_ALL,"");
	OpenClipboard(hwnd);
	EmptyClipboard();
	HGLOBAL hg=GlobalAlloc(GMEM_MOVEABLE,s.size()+1);
	if (!hg){
		CloseClipboard();
		return;
	}
	memcpy(GlobalLock(hg),s.c_str(),s.size()+1);
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT,hg);
	CloseClipboard();
	GlobalFree(hg);
}
string withlastsimbol(string h){
string temp="";
for(int i =0;i<h.size() - 1;i++){
    temp+=h[i];
}
return temp;
}
char RusToEng(char ttt){
    if( (int)(ttt) > 100   ){
        return ttt;
    }else{
        int y=(int)(ttt);
    if(y == (-96)){return 'f';}
    if(y == (-95)){return ',';}
    if(y == (-94)){return 'd';}
    if(y == (-93)){return 'u';}
    if(y == (-92)){return 'l';}
    if(y == (-91)){return 't';}
    if(y == (-90)){return ';';}
    if(y == (-89)){return 'p';}
    if(y == (-88)){return 'b';}
    if(y == (-87)){return 'q';}
    if(y == (-86)){return 'r';}
    if(y == (-85)){return 'k';}
    if(y == (-84)){return 'v';}
    if(y == (-83)){return 'y';}
    if(y == (-82)){return 'j';}
    if(y == (-81)){return 'g';}
    //
    if(y == (-32)){return 'h';}
    if(y == (-31)){return 'c';}
    if(y == (-30)){return 'n';}
    if(y == (-29)){return 'e';}
    if(y == (-28)){return 'a';}
    if(y == (-27)){return '[';}
    if(y == (-26)){return 'w';}
    if(y == (-25)){return 'x';}
    if(y == (-24)){return 'i';}
    if(y == (-23)){return 'o';}
    if(y == (-22)){return ']';}
    if(y == (-21)){return 's';}
    if(y == (-20)){return 'm';}
    if(y == (-19)){return  (char)(39);} // '
    if(y == (-18)){return '.';}
    if(y == (-17)){return 'z';}




    }


}
int numberinno(string h, int ui){
char rekt[1000];int rekt_size=h.size();
for(int i=0;i<h.size();i++){
    rekt[i]=h[i];
}
int ans=0;
int minindex=0;
for(int j=0;j<ui+1;j++){
    int mini=100000;
    for(int y=0;y<rekt_size;y++){
        if((int)(rekt[y]) < mini){
            mini=(int)(rekt[y]);
            minindex=y;
        }
    }
    rekt[minindex]=(int)(250);ans=minindex;
}
return ans;
}

void MAINDESTRIDUTIV(string distriv){
system("cls");
    if(distriv == "help"){
        cout << "Далее Вы увидите список команд, доступные на данный момент в редакторе : " << endl << "ascii - перевод из десятичных чисел*" << endl << "2t10,10t2,16t2,2t16,10t16,16t10 - перевод из первой во вторую систему" << endl;
        cout << "table - табличный метод" << endl ;

        cout << endl << "////" << endl << "` - стирание всей поисковой строки" << endl << "ctrl + v - вставить из буфера обмена(копировать данные на русскиом языке)" << endl << "ctrl + c - скопировать из будера обмена(копировать данные на русскиом языке) " << endl;
        cout << endl << "Введите любой символ для продолжения";getch();FinderSystemText="";return;}
    if(distriv == "table"){
        cout << "Введите ключ(если отсутствует, введите aбвгдежз...)" << endl;
        string tempt;
        cin >> tempt;cout << endl << "////" <<endl;
char     WER[100][100];
int Wisize=(int)(MainText.size()/tempt.size()),Wjsize=tempt.size();
int counter=0;
for(int i=0;i<Wjsize;i++){
    for(int j=0;j<Wisize;j++){
        WER[j][numberinno(tempt,i)]=MainText[counter];
        counter++;
    }
}
string newans="";
for(int i=0;i<Wisize;i++){
    for(int j=0;j<Wjsize;j++){
        cout <<WER[i][j];newans+=WER[i][j];
    }cout << endl;
}
MainText=newans;

    cout << endl << "Введите любой символ для продолжения";getch();FinderSystemText="";return;}
//

    cout << "Команда была введна не корректно, была введена команда : " <<endl <<FinderSystemText << endl << endl<< "Вы можете ввести help, для показа всех команд" << endl <<"Введите q (й) для продолжения со стиранием поисковой строки"<< endl <<"Введите любой другой символ для продолжения" ;
    char tempt = getch();
    if((tempt == 113) || (tempt == -87)){FinderSystemText="";}


}
int main()
{
setlocale(LC_ALL,"");


int ddddo=0;
   while(1){
if(ddddo == 1){cout << "писать на РУССКОМ ЯЗЫКЕ! " << endl;}
    if(ddddo != 0){newchar=getch();}
    if(ddddo == 0   ){
        ddddo=1;
    }else{ddddo = 2;}
   int tter=(int)(newchar);
   if(tter == 3){InsToClip(hwnd,MainText);}else{
   if(tter == 22){MainText=CopyFromClip();}else{
   if((tter == 96) || (tter == (-15))){FinderSystemText = "";}else{
   if(tter == 8){if(FinderSystemText.size() != 0){FinderSystemText= withlastsimbol(FinderSystemText);

   }

   }else{
   if(tter == 13){MAINDESTRIDUTIV(FinderSystemText);
   }else{
    FinderSystemText+=RusToEng(newchar);
   }


   }
   }
   }
   }
    system("cls");
    cout << newchar << " : "<< (int)(newchar) <<endl << FinderSystemText << endl << "/////////////" << endl << MainText;

   }
}
