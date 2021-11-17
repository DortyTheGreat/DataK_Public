#include <iostream>
#include <fstream>
#include <cstddef>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>

void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}

using namespace std;
void CreateFolder(string FOLDER_NAME){
CreateDirectory(FOLDER_NAME.c_str(), NULL);
}



string GetFromFile(string FILE_NAME){
//char b[100];
string stroka,DATA="";
//ToChars(b,FILE_NAME);
ifstream in(FILE_NAME.c_str());
while(!(in.eof())){
    getline(in,stroka);
    DATA+= stroka;DATA+='\n';
}
DATA.pop_back();
in.close();
return DATA;
}
void WriteToFile(string FILE_NAME, string DATA)
{
   // char b[100];
    //ToChars(b,FILE_NAME);
    ofstream ou(FILE_NAME.c_str());
    ou << DATA;
    ou.close();
}
void CopyFile(string FILE_INPUT_NAME, string FILE_OUTPUT_NAME){
string DATA = GetFromFile(FILE_INPUT_NAME);
WriteToFile(FILE_OUTPUT_NAME,DATA);
}
void AddToFile(string FILE_NAME, string DATA){
    string DATA2 = GetFromFile(FILE_NAME) + DATA;
    WriteToFile(FILE_NAME,DATA2);
}
string randStr(int len){
string ans="";
for(int i=0;i<len;i++){
    ans+=(char)(rand()% 20 + 65);
}
return ans;
}
void rerand(){
for(int i=0;i<time(0)%10000;i++){
    rand();
}
}
void ExecuteFile(string FILE_NAME){
    //ShellExecute('open',FILE_NAME,NULL,NULL,NULL )
}
int main(){
   Sleep(1000);

        ShellExecute(NULL,"edit","custom.mp3",NULL,NULL,SW_NORMAL);
       //ShellExecute(NULL,"open","main.exe",NULL,NULL,SW_NORMAL);
       Sleep(3000);
       ShellExecute(NULL,"open","custom2.mp3",NULL,NULL,SW_NORMAL);
Sleep(5000);
    /*
    Sleep(1100);
    ShellExecute(NULL,"open","MyFirstLib.exe",NULL,NULL,NULL);
    ShellExecute(NULL,"open","custom.mp3",NULL,NULL,NULL);
    Sleep(3000);
    remove("custom.txt");
    system("mkdir oleg");

    system("mkdir oleg123\\Olega");
    Sleep(4000);
    system("rmdir oleg");
    //setlocale(LC_ALL,"");
   //ShellExecute(NULL, "print", "1.txt", NULL, NULL, SW_SHOWDEFAULT);

   //ShellExecute(NULL, "save", "1.txt", NULL, NULL, SW_SHOWDEFAULT);
  // CopyFile("hui.bmp","voter2.bmp");
*/
}
