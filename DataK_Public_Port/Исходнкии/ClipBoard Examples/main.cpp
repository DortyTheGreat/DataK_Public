#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
    HWND hwnd = GetDesktopWindow();
string CopyFromClip(){
HWND hwnd = GetDesktopWindow();
 string fromClipboard ;//� ��� ���������� �������� ����� �� ������ ������
if ( OpenClipboard(hwnd) )//��������� ����� ������
{
   HANDLE hData = GetClipboardData(CF_TEXT);//��������� ����� �� ������ ������
   char* chBuffer= (char*)GlobalLock(hData);//��������� ������
   fromClipboard = chBuffer;
   GlobalUnlock(hData);//������������ ������
   CloseClipboard();//��������� ����� ������
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
