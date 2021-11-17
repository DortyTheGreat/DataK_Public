#include <iostream>
#include <fstream>
#include <vector>
//MPPS
using namespace std;


char ishodName[]="input.txt",outName[]="output.txt";

    ifstream inputFile(ishodName);
    ofstream outFile(outName);
    string inpstroka,thisword="",modedstroka="";
  //  string exclude[100],myvars[100],repeatedvars[100]; //myvars from list
  vector<string> exclude(100),myvars(100),repeatedvars(100);
    char razdeliteli[100];
int CFRV=0; //count for repeated vars
int abilalikavichka=0,tempforkav=0,tempforkav2=0,i;
int excludion(string a){
    if(tempforkav2 == 1){
        tempforkav2=0;
        return 0;
    }
    if(abilalikavichka == 1){return 0;}
if(isdigit(a[0])){return 0;}
for(int i=0;i<100;i++){
    if(a == exclude[i]){return 0;}

}
return 1;
}
bool DoStopQue(char symbol){
   int das=1;
for(int i=0;i<100;i++){
    if(symbol == razdeliteli[i]){das=0;}

}
//1 - читаем дальше, 0 - это разделитеть
return das;
}
void removeprobel(){
 //

              //
}
int main()
{


    for(int i=0;i<100;i++){
        exclude[i]="cin";
        razdeliteli[i]=' ';
        myvars[i]= (char)(i+84);
    }

    {razdeliteli[0]=' ';
    razdeliteli[1]='[';
    razdeliteli[2]=']';
    razdeliteli[3]='{';
    razdeliteli[4]='}';
    razdeliteli[5]=')';
    razdeliteli[6]='(';
    razdeliteli[7]='=';
    razdeliteli[8]='!';
    razdeliteli[9]='<';
    razdeliteli[10]='>';
    razdeliteli[11]=';';
    razdeliteli[12]='+';
    razdeliteli[13]='-';
    razdeliteli[14]='*';
    razdeliteli[15]='/';
    razdeliteli[16]='%';
    razdeliteli[17]='.';
    razdeliteli[18]='"';
    razdeliteli[19]='#';
    razdeliteli[20]=',';
    };
    {exclude[1]="cout";
     exclude[2]="while";
     exclude[3]="for";
     exclude[4]="int";
     exclude[5]="double";
     exclude[6]="string";
     exclude[7]="char";
     exclude[8]="return";
     exclude[9]="eof";
     exclude[10]="size";
     exclude[11]="if";
     exclude[12]="endl";
     exclude[13]="break";
     exclude[14]="using";
     exclude[15]="namespace";
     exclude[16]="std";
     exclude[17]="include";
     exclude[18]="double";
     exclude[19]="double";
     exclude[20]="double";
     exclude[21]="double";
     exclude[22]="double";

    };
    while(!inputFile.eof()){
    getline(inputFile,inpstroka);
    thisword="";
    tempforkav2=0;
    abilalikavichka=0;
    tempforkav=0;
    modedstroka="";
    for(int i=0;i<inpstroka.size();i++){

    if((int)(inpstroka[i]) == 39  ){   //проверка кавычки
            if(tempforkav == 1){
                tempforkav2=1;

            }
        abilalikavichka= (abilalikavichka+1)%2;
        tempforkav= (tempforkav+1)%2;
    }

    while((inpstroka[i] == ' ')  && ( i!= 0) && (i != inpstroka.size()) && (abilalikavichka == 0) && (tempforkav == 0) && (tempforkav == 0) && ((int)(inpstroka[i+1]) != 39 )   ){
        if( !(DoStopQue(inpstroka[i-1])) || !(DoStopQue(inpstroka[i+1]))  ){
                i++;
                }else{
                break;
                }
    }



    if(DoStopQue(inpstroka[i]) ){
            thisword+=inpstroka[i];
        //добавляем букву к текущему слову

    }else{
        if(excludion(thisword)){

        if(thisword != ""){




        int das=1,who=0;
        cout << thisword << endl;
        //yt pf,snm ghj yt lfkftybt 'njuj? tkcb ckjdj cke;t,yjt
        for(int j=0; j< CFRV; j++){
            if(thisword == repeatedvars[j]){
                das=0;
                who=j;

                break;
            }

        }
        if(das == 1){

                repeatedvars[CFRV]=thisword;
                thisword=myvars[CFRV];
            CFRV++;
        }else{
        thisword=myvars[who];

        }
       { modedstroka+=thisword;}
        thisword="";}

        modedstroka+=inpstroka[i];
        }else{
        modedstroka+=thisword+inpstroka[i];
        thisword="";
        }
    //Тут заканчиваем ввод слова

    }

    }
    outFile << modedstroka << endl;
    }




    inputFile.close();
    outFile.close();
    return 1;
}
