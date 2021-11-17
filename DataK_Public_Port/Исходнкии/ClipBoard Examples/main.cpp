#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
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
int main(){





    while(1){
string ab= "dfs";
    char a = getch();
    system("cls");
    cout << a;
InsToClip(hwnd,ab);
    }



}
