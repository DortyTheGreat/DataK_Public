#include <iostream>
#include <istream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <cwchar>
#include <conio.h>

using namespace std;
/*
������������ MvW -
Mage Vs Warriors
��������� ������ ������� ��� 2018-2020 ��.
������������ ���� ��� ������ �� ������ ������
���� ������������� ���� - 22.12.2018
*/
    string PPP;
    string Name, OpName;
     int a=9, Charra, Shoppe, ItemBuy=1, ShopBuy, ItemID[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
     int MItemBuy=1, MItemID[] = {0,0,0,0,0,0,0,0,0,0,0,0,0}, MShopAccept, MShoppe, MBonusShopAccept, MTotalShopAccept, MShopBuy;
     int Class, ClassChoose, Classo, SettingsChose, Diff, Cheat;
     float DiffM=1;
     int Boots=0, Sword=0, ManaO=0, HPO=0, Shield=0, BuyItems=0, TotalShopAccept=0;
     int ArenaChoose, Gold=0, GoldDropped, Counter, ArenaMM;
     int HodSdelan = 0, CheatChose;
     float OpDamageCoef, DamageCoef;
     int Winne, RandomTurn;
     int DP=10, TP=10, OpTP, OpDP, BDP, BTP, BOpDP, BOpTP, BaseTP=10, PlusTP=0, BaseDP=10, PlusDP=0, CoefTP=1, CoefDP=1, BPlusDP, BPlusTP, BCoefTP, BCoefDP,BOpPlusDP, BOpPlusTP, BOpCoefTP, BOpCoefDP;
     float AP=100, ManaP=200, ManaReg=10, HP=1000, OpAP, OpHP, BAP, BManaP, BManaReg, BHP, BOpAP, BOpManaP, BOpManaReg, BOpHP;
     float BaseAP=100, BaseManaP=200, BaseManaReg=10, BaseHP=1000, PlusAP=0, PlusManaP=0, PlusHP=0, CoefAP=1, PlusManaReg=0, CoefManaP=1, CoefManaReg=1, CoefHP=1, BPlusAP=0, BPlusManaP, BPlusManaReg, BPlusHP;
     float BCoefAP, BCoefManaP, BCoefManaReg, BCoefHP, BOpCoefAP, BOpCoefManaP, BOpCoefManaReg, BOpCoefHP;
     int OpCounter = 1;
     int ShopAccept, BonusShopAccept=0;
     int ClassCD[] = {0,0,0,0,0,0,0,0};





    void cls()
    {



     system("cls");
    }
    void PDMG() //��� ���� ���� ��� ����� ������� HodSdelan = 1;
    {
         OpDamageCoef = pow(0.95, OpDP);

     BOpHP =  BOpHP -(BAP * OpDamageCoef);
     cls();
     cout << "��� ���:" << endl;
         cout << "���� ��������: " << BHP << endl;
    cout << "���� ����: " << BManaP << endl;
    cout << "�������� ���������: " << BOpHP << endl;
    cout << "_______________________" << endl;
    }
    void StKo() {
    HP = (BaseHP + PlusHP ) * CoefHP ;
    AP = (BaseAP + PlusAP ) * CoefAP ;
    DP = (BaseDP + PlusDP ) * CoefDP ;
    TP = (BaseTP + PlusTP ) * CoefTP ;
    ManaP =(BaseManaP + PlusManaP ) * CoefManaP ;
    ManaReg = (BaseManaReg + PlusManaReg ) * CoefManaReg ;
    }
int main()
{
    setlocale(0, "");

    setlocale(0, "");
    cout << "### - ���� ������� ���������� ����: ������� ����� ������, ����� ���������� ### " << endl;
    getch();
    cls();
    cout << "������� ���� ���" << endl;
    cout << "P.S. ��� ��������! � ���������� �� �������� ��� � ������� ���� " <<endl;
    cin >> Name;
    Class = 0;
    cls();
    do {
    cout << "�������� ��� �����" << endl;
    cout << "1 - ������� ��������" << endl;
    cout << "2 - ���� ��������" << endl;
    cout << "3 - ����" << endl;
    cout << "4 - �������" << endl;
    cout << "5 - �����������" << endl;
    cout << "6 - ����� �����" << endl;
    cout << "7 - �������� ˸��" << endl;
    Classo = getch();
    cls();
    switch(Classo - 48){
    case 1 :
        cout << "�����: ������� ��������" << endl;
      cout << "����������: ����" << endl;
    cout << "��� ����������: ��������" << endl;
    cout << "_______________________" << endl;
    cout << "�������: 150% �� �����" <<endl;
    cout << "������+5(1 ��� �� ��� �����) " <<endl;
    cout << "���������: 1 �����" << endl;
    cout << "������� ����: 100" <<endl;
    cout << "�����������: 10" <<endl;
    cout << "�� ������ ���" << endl;
    cout << "������� 1 ��� ������ ������� �����" << endl;
    ClassChoose = getch();
    cls();
    if (ClassChoose == 49){
        Class = 1;
    }
    break;
    case 2 :
        cout << "�����: ���� �����" << endl;
      cout << "����������: ����� ���" << endl;
    cout << "��� ����������: ��������" << endl;
    cout << "_______________________" << endl;
    cout << "���� �������� 1000% ���. �����" <<endl;
    cout << "������ �����-5(1 ��� �� ��� �����) " <<endl;
    cout << "������� ����: 100" <<endl;
    cout << "�����������: 10" <<endl;
    cout << "������ ���" << endl;
    cout << "������� 1 ��� ������ ������� �����" << endl;
    ClassChoose = getch();
    cls();
    if (ClassChoose == 49){
        Class = 2;
    }
    break;
    case 3 :
            cout << "�����: ����" << endl;
      cout << "����������: ��!" << endl;
    cout << "��� ����������: ��������" << endl;
    cout << "_______________________" << endl;
    cout << "�������: 20% �� �����" <<endl;
    cout << "���� �������� 200% ���. �����" <<endl;

    cout << "������� ����: 30" <<endl;
    cout << "�����������: 1" <<endl;
    cout << "������ ���" << endl;
    cout << "������� 1 ��� ������ ������� �����" << endl;
    ClassChoose = getch();
    cls();
    if (ClassChoose == 49){
        Class = 3;
    }
    break;


    }
    }while (Class == 0);
    do {
    cls();
    cout << "������� ����"<<endl;
    cout << "1 - ������ ����"<<endl;
    cout << "2 - ����������"<<endl;
    cout << "3 - ���������" << endl;
    int MainMenuChoose;
    MainMenuChoose = getch() - 48;
    cls();
    switch (MainMenuChoose) {
case 1:
    int GameMapChoose;                  // C����� ����
do{
    cls();
    cout << "1 - �����"<< endl;
cout << "2 - ������"<< endl;
cout << "3 - ����� �����"<< endl ;
cout << "4 - ��� ��������"<< endl ;
cout << "5 - �������"<< endl ;
cout << "6 - � ������� ����"<< endl ;
GameMapChoose = getch() - 48;

cls();
switch (GameMapChoose) {
case 1 : //�����
       /*
          case 1 :
        OpHP=  ;
        OpAP=  ;
        OpDP=  ;
        OpTP=  ;
        GoldDropped=  ;
        OpName="";
        break;
        */
    switch (OpCounter) {
    case 1 :
        OpHP=1000  ;
        OpAP=50  ;
        OpDP=3  ;
        OpTP=5  ;
        GoldDropped= 100;
        OpName="�����";
        break;
        case 2 :
        OpHP=400  ;
        OpAP=70  ;
        OpDP=2  ;
        OpTP=4  ;
        GoldDropped= 500;
        OpName="����";
        break;
        case 3 :
        OpHP=500  ;
        OpAP=90 ;
        OpDP=4  ;
        OpTP=6  ;
        GoldDropped= 1000;
        OpName="�������";
        break;
        case 4 :
        OpHP=10000  ;
        OpAP=0  ;
        OpDP=0  ;
        OpTP=5  ;
        GoldDropped= 10000;
        OpName="������";
        break;
           case 5 :
        OpHP=1000  ;
        OpAP=150  ;
        OpDP=0  ;
        OpTP=5  ;
        GoldDropped= 1000;
        OpName="������ ���";
        break;

   case 6 :
        OpHP=10000  ;
        OpAP=300  ;
        OpDP=0  ;
        OpTP=5  ;
        GoldDropped= 12000;
        OpName="�����";
        break;
  case 7 :
        OpHP=1200  ;
        OpAP=150  ;
        OpDP=0  ;
        OpTP=5  ;
        GoldDropped= 2000;
        OpName="�����";
        break;
  case 8 :
        OpHP=3000  ;
        OpAP=70  ;
        OpDP=0  ;
        OpTP=5  ;
        GoldDropped= 1500;
        OpName="����";
        break;
  case 9 :
        OpHP=1000  ;
        OpAP=200  ;
        OpDP=0  ;
        OpTP=5  ;
        GoldDropped= 1500;
        OpName="��������";
        break;
case 10 :
        OpHP=500  ;
        OpAP=300  ;
        OpDP=0  ;
        OpTP=5  ;
        GoldDropped= 1000;
        OpName="�����";
        break;





    break;
    }
OpHP *= DiffM;
 OpAP *= DiffM;
 OpDP *= DiffM;
 OpTP *= DiffM;

    cout << "���� ��������������: " <<endl;
    cout << "���: " <<Name <<endl;
    cout << "��������: " <<HP <<endl;
    cout << "�����: " <<AP <<endl;
    cout << "������: " <<DP <<endl;
    cout << "��������: " <<TP <<endl;
    cout << "����: " <<ManaP <<endl;
    cout << "����������� ����: " <<ManaReg <<endl;
    cout << "________" <<endl;
     cout << "�������������� ���������: " <<endl;
     cout << "���: " <<OpName <<endl;
    cout << "��������: " <<OpHP <<endl;
    cout << "�����: " <<OpAP <<endl;
    cout << "������: " <<OpDP <<endl;
    cout << "��������: " <<OpTP <<endl;
    cout << "������� �����: " <<OpCounter <<endl;
    cout << "###" <<endl;

    getch();
    cls();
    BAP= AP;
    BHP=HP;
    BDP=DP;
    BTP=TP;
    BManaP=ManaP;
    BManaReg=ManaReg;

      BOpAP= OpAP;
    BOpHP= OpHP;
    BOpDP= OpDP;
    BOpTP= OpTP;
    Winne = 0;
    HodSdelan = 0;
    do{
            cls();
    RandomTurn= (1 + (rand() % (BTP+BOpTP)));
    if (RandomTurn <= OpTP) {
           cls();
     cout << "��� ���������:" <<endl;
     DamageCoef = pow(0.95, DP);
     BHP =  BHP -(BOpAP * DamageCoef);
      cout << "���� ��������: " << BHP <<endl;
    cout << "���� ����: " << BManaP << endl;
    cout << "�������� ���������: " << BOpHP << endl;
    cout << "_______________________" << endl;
     cout << "�� �������� �������! ###"<< endl;
    getch();
    }
     //��� ���
     if (RandomTurn > BOpTP) {
    do {
            HodSdelan = 0;
        cls();
        cout << "��� ���:" << endl;
         cout << "���� ��������: " << BHP << endl;
    cout << "���� ����: " << BManaP << endl;
    cout << "�������� ���������: " << BOpHP << endl;
    cout << "_______________________" << endl;
        cout << "1 - �����" <<endl;
        cout << "2 - ����������" <<endl;
        cout << "3 - ��������" <<endl;

        ArenaChoose = getch() - 48;
        cls();
        switch (ArenaChoose) {
    case 1 :
         OpDamageCoef = pow(0.95, OpDP);

     BOpHP =  BOpHP -(BAP * OpDamageCoef);
     cls();


     HodSdelan = 1;
        break;
    case 2 :
      switch(Class){

case 1:
    cout << "0 - ����" << endl;
    break;

case 2 :
    cout << "0 - ����� ���" << endl;
    break;
case 3 :
    cout <<  "0 - ��!" << endl;
    break;
      }
     Counter = 0;
      if (MItemID[1] == 1){
        Counter++;
        cout << Counter << " - ������� �������" << endl;
      }
      if (MItemID[2] == 1){
        Counter++;
        cout << Counter << " - ������ ��������" << endl;
      }
      if (MItemID[3] == 1){
        Counter++;
        cout << Counter << " - ������� �������" << endl;
      }
        cin >> MShoppe;
        cls();
        MShopAccept = MShoppe; //nn
MBonusShopAccept = 0;
MTotalShopAccept = 0;
cls();
for (int i = 1; i<=MShopAccept; i++) {
    if (MItemID[i] == 0) {
        MBonusShopAccept++;
        MShopAccept++;

    }

}
MTotalShopAccept = MBonusShopAccept + MShoppe;
switch(MTotalShopAccept){

case 0 :
    cout << "0";
    cin >> PPP;
    break;
    case 1 :
    cout << "1";
    cin >> PPP;
    break;
    case 2 :
    cout << "2";
    cin >> PPP;
    break;
}
        break;
        }


    }while (HodSdelan == 0);
     }
     if  (BHP <= 0) {
        Winne = 2;
     }
     if  (BOpHP <= 0) {
        Winne = 1;
     }
    }while (Winne <= 0);

    if  (Winne == 2) {
        cout << "���������((( ###";
         getch();
     }
     if  (Winne == 1) {
        cout << "������! ###" << endl;
         getch();
        OpCounter = OpCounter + 1;
        Gold= Gold + GoldDropped;
     }
    break;
case 2: //������
    Gold = 100000;
   cout << "adas";
   break;
case 3: //�����

 MItemBuy = 0;
cls();
cout << "������: " << Gold << endl;
if (MItemID[1] == 0) {  //Boots=0, Sword=0, ManaO=0, HPO=0, Shield=0;
        MItemBuy++;
cout << MItemBuy << " - ������� ������� 1000" << endl;

}
if (MItemID[2] == 0) {  //Boots=0, Sword=0, ManaO=0, HPO=0, Shield=0;
    MItemBuy++;
cout << MItemBuy << " - ������ �������� 2500" << endl;
}
if (MItemID[3] == 0) {  //Boots=0, Sword=0, ManaO=0, HPO=0, Shield=0;
    MItemBuy++;
cout << MItemBuy << " - �������� ��� 3500" << endl;
}
MShopAccept = getch() - 48;
MShoppe =MShopAccept;
MBonusShopAccept = 0;
MTotalShopAccept = 0;
cls();
for (int i = 1; i<=MShopAccept; i++) {
    if (MItemID[i] != 0) {
        MBonusShopAccept++;
        MShopAccept++;

    }

}
MTotalShopAccept = MBonusShopAccept + MShoppe;
switch (MTotalShopAccept) {
case 1 :
        cls();
    cout <<"������: " << Gold << endl;
    cout << "����������: ������� �������" << endl;
    cout << "��� ����������: ����" << endl;
    cout << "_______________________" << endl;
    cout << "����������� ����� �� 100" <<endl;
    cout << "������������: 3 �����" <<endl;
    cout << "������� ����: 100" <<endl;
    cout << "�����������: 6" <<endl;
    cout << "_______________________" << endl;
    cout << "C�������� : 1000" << endl;
    cout << "������� 1, ����� ������" << endl;
    MShopBuy = getch() - 48;
    cls();
    if (MShopBuy == 1) {
            if (Gold >= 200) {
              MItemID[1] = 1;


              Gold = Gold - 1000;
              cls();
              cout << "�������  ������� ###" << endl;
               getch();

            }
            else {
              cout << "������������ ������ ###" << endl;
               getch();


            }

    }
    break;
}




    break;
case 4: //��������
    cls();
     cout << "������: " << Gold << endl;
     cout << "��������: " << HP << endl;
     cout << "�����: " << AP << endl;
     cout << "������: " << DP << endl;
     cout << "���� ����: " << TP << endl;
     cout << "����: " << ManaP << endl;
     cout << "����������� ����: " << ManaReg << endl;
     cout << "1 - ��������� ��������������(�� �������, ���� �� ������ :-) )" << endl;
     Charra = getch() - 48;
     switch (Charra) {
     case 1 :

         cls();
    cout << "BaseHP: " << BaseHP << endl << "PlusHP: " << PlusHP << endl << "CoefHP: " << CoefHP << endl;
    cout << "BaseAP: " << BaseAP << endl << "PlusAP: " << PlusAP << endl << "CoefAP: " << CoefAP << endl;
    cout << "BaseDP: " << BaseDP << endl << "PlusDP: " << PlusDP << endl << "CoefDP: " << CoefDP << endl;
    cout << "BaseTP: " << BaseTP << endl << "PlusTP: " << PlusTP << endl << "CoefTP: " << CoefTP << endl;
    cout << "BaseManaP: " << BaseManaP << endl << "PlusManaP: " << PlusManaP << endl << "CoefManaP: " << CoefManaP << endl;
    cout << "BaseManaReg: " << BaseManaReg << endl << "PlusManaReg: " << PlusManaReg << endl << "CoefManaReg: " << CoefManaReg << endl;
    cout << "###" << endl;
     getch();

     }

    break;
case 5: //�������
    ItemBuy = 0;
cls();
cout << "������: " << Gold << endl;
if (ItemID[1] == 0) {  //Boots=0, Sword=0, ManaO=0, HPO=0, Shield=0;
        ItemBuy++;
cout << ItemBuy << " - ������� 200" << endl;

}
if (ItemID[2] == 0) {  //Boots=0, Sword=0, ManaO=0, HPO=0, Shield=0;
    ItemBuy++;
cout << ItemBuy << " - ����� 250" << endl;

}
if (ItemID[3] == 0) {
    ItemBuy++;
cout << ItemBuy << " - ������ ������ 600" << endl;
}
if (ItemID[4] == 0) {
    ItemBuy++;
cout << ItemBuy << " - ����� ����������� ���� 600" << endl;
}
if (ItemID[5] == 0) {
    ItemBuy++;
cout << ItemBuy << " - ������ ������ 700" << endl;
}
ItemBuy++;
ItemBuy++;
ItemBuy++;
ItemBuy++;
ItemBuy++;
ItemBuy++;
ItemBuy++;
ItemBuy++;
ItemBuy++;
cin >> ShopAccept;
Shoppe =ShopAccept;
BonusShopAccept = 0;
TotalShopAccept = 0;
cls();
for (int i = 1; i<=ShopAccept; i++) {
    if (ItemID[i] != 0) {
        BonusShopAccept++;
        ShopAccept++;

    }

}
TotalShopAccept = BonusShopAccept + Shoppe;
switch (TotalShopAccept) {
case 1 :
        cls();
    cout <<"������: " << Gold << endl;
    cout << "�������: �������" << endl;
    cout << "��� ��������: ���������" << endl;
    cout << "_______________________" << endl;
    cout << "��������������:" << endl;
    cout << "����������� ����� �� 5" <<endl;
    cout << "_______________________" << endl;
    cout << "�������� �����������:" << endl;
    cout << "�����������" << endl;
    cout << "_______________________" << endl;
    cout << "C�������� : 200" << endl;
    cout << "������� 1, ����� ������" << endl;
    cin >> ShopBuy;
    cls();
    if (ShopBuy == 1) {
            if (Gold >= 200) {
              ItemID[1] = 1;
              PlusAP = PlusAP + 5;
              BuyItems = BuyItems + 1;
              Gold = Gold - 200;
              cls();
              cout << "�������  ������� ###" << endl;
              cin >> PPP;

            }
            else {
              cout << "������������ ������ ###" << endl;
              cin >> PPP;


            }

    }
    break;
     case 2 :
        cls();
    cout <<"������: " << Gold << endl;
    cout << "�������: ����� " << endl;
    cout << "��� ��������: ���������" << endl;
    cout << "_______________________" << endl;
    cout << "��������������:" << endl;
    cout << "����������� ������ �� 1" <<endl;
    cout << "_______________________" << endl;
    cout << "�������� �����������:" << endl;
    cout << "�����������" << endl;
cout << "_______________________" << endl;
    cout << "C�������� : 250" << endl;
    cout << "������� 1, ����� ������" << endl;
    cin >> ShopBuy;
    cls();
    if (ShopBuy == 1) {
            if (Gold >= 250) {
              ItemID[2] = 1;
              PlusDP = PlusDP + 1;
              BuyItems = BuyItems + 1;
              Gold = Gold - 250;
              cls();
              cout << "�������  ������� ###" << endl;
              cin >> PPP;

            }
            else {
              cout << "������������ ������ ###" << endl;
              cin >> PPP;


            }

    }
    break;
     case 3 :
        cls();
    cout <<"������: " << Gold << endl;
    cout << "�������: ������ ������" << endl;
    cout << "��� ��������: ���������" << endl;
    cout << "_______________________" << endl;
    cout << "��������������:" << endl;
    cout << "����������� ������ �� 2" <<endl;
    cout << "_______________________" << endl;
    cout << "�������� �����������:" << endl;
    cout << "�����������" << endl;
cout << "_______________________" << endl;
    cout << "C�������� : 600" << endl;
    cout << "������� 1, ����� ������" << endl;
    cin >> ShopBuy;
    cls();
    if (ShopBuy == 1) {
            if (Gold >= 600) {
              ItemID[3] = 1;
              PlusDP = PlusDP + 2;
              BuyItems = BuyItems + 1;
              Gold = Gold - 600;
              cls();
              cout << "�������  ������� ###" << endl;
              cin >> PPP;

            }
            else {
              cout << "������������ ������ ###" << endl;
              cin >> PPP;


            }

    }
    break;
     case 4 :
        cls();
    cout <<"������: " << Gold << endl;
    cout << "�������: ����� ����������� ����" << endl;
    cout << "��� ��������: ���������" << endl;
    cout << "_______________________" << endl;
    cout << "��������������:" << endl;
    cout << "����������� ������� �� 2" <<endl;
    cout << "_______________________" << endl;
    cout << "�������� �����������:" << endl;
    cout << "�����������" << endl;
cout << "_______________________" << endl;
    cout << "C�������� : 600" << endl;
    cout << "������� 1, ����� ������" << endl;
    cin >> ShopBuy;
    cls();
    if (ShopBuy == 1) {
            if (Gold >= 600) {
              ItemID[4] = 1;
              PlusManaReg = PlusManaReg + 2;
              BuyItems = BuyItems + 1;
              Gold = Gold - 600;
              cls();
              cout << "�������  ������� ###" << endl;
              cin >> PPP;

            }
            else {
              cout << "������������ ������ ###" << endl;
              cin >> PPP;


            }

    }
    break;
     case 5 :
        cls();
    cout <<"������: " << Gold << endl;
    cout << "�������: ������ ������" << endl;
    cout << "��� ��������: ���������" << endl;
    cout << "_______________________" << endl;
    cout << "��������������:" << endl;
    cout << "����������� ����� ���� �� 1" <<endl;
    cout << "����������� ����� �� 3" <<endl;
    cout << "_______________________" << endl;
    cout << "�������� �����������:" << endl;
    cout << "�����������" << endl;
cout << "_______________________" << endl;
    cout << "C�������� : 700" << endl;
    cout << "������� 1, ����� ������" << endl;
    cin >> ShopBuy;
    cls();
    if (ShopBuy == 1) {
            if (Gold >= 700) {
              ItemID[5] = 1;
              PlusAP = PlusAP + 3;
              PlusTP = PlusTP + 1;
              BuyItems = BuyItems + 1;
              Gold = Gold - 1000;
              cls();
              cout << "�������  ������� ###" << endl;
              cin >> PPP;

            }
            else {
              cout << "������������ ������ ###" << endl;
              cin >> PPP;


            }

    }
    break;

}











StKo();
    break;





}

}while (GameMapChoose < 6);

    break;
case 2:
    int infochoosee;
    do{
    cls();
cout << "1 - ������ � ������� � ������������" <<endl;
cout << "2 - ��������"<<endl;
cout << "3 - ������"<<endl;
cout << "4 - � ������� ����"<<endl;
infochoosee= getch() - 48;
cls();
switch (infochoosee) {
case 1:
    cout << "����� - �����, ��� �� ������ ��������� � �������, �� ����� �� ������ ��� �������� ��� ���������, � ������ ������ �� ��������� ������ � ���������� �� ���������� �����, � � ������ ��������� ������ �� �������" <<endl
    << "������ - �����, ��� �� ������ �������� ������ �������� ��������� ������(� �������� ���� ��������� ������� ��� ��������� ���������)" <<endl <<
    "����� ����� - �����, ��� �� ������ �� ������ ������ ���������� ���������� �������� � �������� �� �����"<< endl <<
    "��� �������� - �����, ��� �� ������ ������� ���� ��������������, � ������ ����������" << endl<<
    "������� - �����, ��� �� ������ �� ������ �������� ��������, ������� ������� �������� � ��������" << endl;



    cout << "###";
    getch();
    break;
case 2:
    cout << "��������! ��������� ���������� ��� ��� ���� ��������� �������� ����� ����!" << endl<< "����� ��� ���� ������������� : �������� � ������"<< endl <<
    "��������(�� ������ �������� �� ����� ���, ������ �� ����): ���������� ��������� ������� - " <<endl << "(�������(������� �� ������) + ����������(�������� �� ���������))* ���������(�������� �� ���������) "
    <<endl<< "������(�� ����� �������� ������ �� ����� ��� � ��� ����� �� ������ �� ��������): ���������� ��������� ������� - "<<endl<<"(�������� + ����������(���������� � ��������� ���������))* ���������(���������� � ��������� ���������)" <<endl;
    cout << "###";
    getch();
    break;
case 3:
    cls();
cout << "����� ����: Mr.Snic" << endl << "��� : Mr.Snic" << endl<< "����-������������: ���� ��������" <<endl << "��������� �������: " <<endl << "�� ���� ������ ������ ���� � ��������, � ������� � ��������� �������))"<< endl;
    cout << "###" <<endl;
    getch();
    break;
}

    }while (infochoosee < 4);
    break;
case 3 :
    do{
    cout << "1 - ������� ���������" << endl;
    cout << "2 - ����(� ����������)" << endl;
    cout << "3 - ����" << endl;
    SettingsChose = getch() - 48;
    cls();
    switch(SettingsChose){
case 1 :
    cout << "��������!!! ��������� ������ ������ �� �������������� ���������� �� �����! (����� �� ���������� ������� ��������� ��� ������ �������������� �����)" << endl;
     cout << "1 - ���������� 0.7" << endl;
     cout << "2 - ������ 0.8" << endl;
     cout << "3 - �����������(�� ���������) 1" << endl;
     cout << "4 - ������� 1.2" << endl;
     cout << "5 - ���������� 1.4" << endl;
     Diff = getch() - 48;
     cls();
     switch(Diff){
     case 1 : DiffM = 0.7;
     break;
      case 2 : DiffM = 0.8;
     break;
      case 3 : DiffM = 1;
     break;
      case 4 : DiffM = 1.2;
     break;
      case 5 : DiffM = 1.4;
     break;

     }
    break;
case 2 :

    break;

case 3 :
cout << "1 - ��� �� ������" << endl;
cout << "2 - ��� �� ������������������ �����" << endl;
cout << "3 - ��� �� ��������� �������������" << endl;
cout << "4 - ��� �� �����" << endl;
CheatChose = getch() - 48;
cls();
switch(CheatChose){
case 1 :
    cout << "������� ���-�� ������, ������� �� ������ ��������" << endl;
    cin >> Cheat;
    cls();
    Gold = Cheat;
    break;
    case 2 :
    cout << "������� ������� �����, ������� �� ������ ��������" << endl;
    cin >> Cheat;
    cls();
    OpCounter = Cheat;
    break;
    case 3 :
    cout << "������� ���-�� �������������, ������� �� ������ ��������(�������� ���)" << endl;
    cin >> Cheat;
    cls();

    HP += Cheat ;
    AP += Cheat ;
    DP += Cheat;
    TP += Cheat;
    ManaP +=Cheat;
    ManaReg += Cheat;

    break;
    case 4 :
    cout << "������� ����� �����, ������� �� ������ ��������(������ ������ �������� ����)" << endl;

        cout << "1 - ������� ��������" << endl;
    cout << "2 - ���� ��������" << endl;
    cout << "3 - ����" << endl;
    cout << "4 - �������" << endl;
    cout << "5 - �����������" << endl;
    cout << "6 - ����� �����" << endl;
    cout << "7 - �������� ˸��" << endl;
    cin >> Cheat;
    cls();
    Class = Cheat;
    break;


}

    break;
default :
    SettingsChose = 99;
    }
    }while (SettingsChose != 99);
    break;

    }

    }while (a == 9);









    return 0;
}
