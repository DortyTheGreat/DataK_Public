#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string pass1="test",you;
    cin >> you;
    if(you == pass1){
    string stroka,str2="";
    char a[]="some.txt";
    ifstream file(a);
    ofstream file2("some.txt");
    while( !(file.eof()) ){
     getline(file,stroka);
     str2="";
for(int i=0; i< stroka.size();i++){
    str2+="j";

}

file2 << str2 << endl;


    }
    file.close();
    file2.close();
    return 1;
    }else{
    return 1;
    }
}
