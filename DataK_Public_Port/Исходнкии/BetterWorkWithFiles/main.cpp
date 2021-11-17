#include <iostream>
#include <fstream>
#include <cstddef>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
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

void cls()
{
    // Get the Win32 handle representing standard output.
    // This generally only has to be done once, so we make it static.
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD topLeft = { 0, 0 };

    // std::cout uses a buffer to batch writes to the underlying console.
    // We need to flush that to the console because we're circumventing
    // std::cout entirely; after we clear the console, we don't want
    // stale buffered text to randomly be written out.
    std::cout.flush();

    // Figure out the current width and height of the console window
    if (!GetConsoleScreenBufferInfo(hOut, &csbi)) {
        // TODO: Handle failure!
        abort();
    }
    DWORD length = csbi.dwSize.X * csbi.dwSize.Y;

    DWORD written;

    // Flood-fill the console with spaces to clear it
    FillConsoleOutputCharacter(hOut, TEXT(' '), length, topLeft, &written);

    // Reset the attributes of every character to the default.
    // This clears all background colour formatting, if any.
    FillConsoleOutputAttribute(hOut, csbi.wAttributes, length, topLeft, &written);

    // Move the cursor back to the top left for the next sequence of writes
    SetConsoleCursorPosition(hOut, topLeft);
}
using namespace std;
void CreateFolder(string FOLDER_NAME){
CreateDirectory(FOLDER_NAME.c_str(), NULL);
}
void ToChars(char a[],string h){

for(int i=0;i<95;i++){
    if(i<h.size()){
        a[i]=h[i];
    }else{
    a[i]=' ';
    }
}

// .c_str()
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
int main(){
    setlocale(LC_ALL,"");
   //ShellExecute(NULL, "print", "1.txt", NULL, NULL, SW_SHOWDEFAULT);

   //ShellExecute(NULL, "save", "1.txt", NULL, NULL, SW_SHOWDEFAULT);
   CopyFile("hui.bmp","voter2.bmp");

}
