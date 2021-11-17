
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int a2;
    string input_cpp_file_name,output_exe_file_name;
    ifstream in("setup.txt");
    if(in){
        in >> input_cpp_file_name >> output_exe_file_name;
    }else{
    cout << "input_cpp_file_name" << endl;
    cout << "STD_input: ";
    cin >> input_cpp_file_name;
    system("cls");
    cout << "output_exe_file_name" << endl;
    cout << "STD_input: ";
    cin >> output_exe_file_name;
    system("cls");
    }
    string a ="\"MinGW\\bin\\mingw32-g++.exe\" -lm -O2 -fno-stack-limit -std=c++1z -x c++ ..\\" +input_cpp_file_name +" -o ..\\"+output_exe_file_name + ".exe";cout <<a;
    system( a.c_str()  );
}
