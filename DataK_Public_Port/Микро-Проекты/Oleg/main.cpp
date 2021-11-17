#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    ifstream inp("input.txt");
    string sroka;
    char a;
    int counter=0;
    while(!(inp.eof())){
        getline(inp, sroka);
        for(int i=0;i<sroka.size();i++){
        a=getch();
        if(a == '*'){
                a=']';
        while(a != '*' ){
            a = getch();
            cout << a;
        }
        }else{
                if(rand() % 20 == 0 &&i>3 && i<sroka.size() - 4){
cout << sroka[i + (rand()%5) - 2];
                }else{


                 cout << sroka[i];
            if(sroka[i] == ' '){
                  counter++;
                  if(counter % 5 ==0){
                    cout << endl;
                  }

            }
                }


        }
        }

    }
}
