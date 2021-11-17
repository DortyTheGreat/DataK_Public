#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string stroka,key,password="rra",temp;
    int cou=1;
    char a2[]="output.txt";
    char a[]="input.txt";
    ifstream fileq(a);
    ofstream fileq2(a2);
    cin >> temp;
    if(temp == password){
            cin >> key;
 string ghg;
            cin >> ghg;
   while(! fileq.eof() ){
    getline(fileq,stroka);
    for(int i= 0; i< stroka.size(); i++){
            cou++;


            if(ghg == "0"){
                 fileq2 <<  (char)((int)(key[cou % key.size()])+(int)(stroka[i]));

            }else{

       fileq2 <<  (char)((int)(stroka[i]) - ((int)(key[cou % key.size()])));
            }
    }
fileq2 << endl;
   }

    }else{

    }
    return 1;
}
