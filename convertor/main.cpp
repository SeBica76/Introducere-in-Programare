#include <iostream>
#include <cstring>
#include "windows.h"
#include <cmath>
#include <stdio.h>
#include <iomanip>
#include <new>
#include <sstream>
using namespace std;
int GetInput()
    {
        int choice;
        cout<<"                       Alegerea dvs. : ";cin>>choice;
        return choice;
    }
void MeniuPrincipalAfisare()
    {
        cout<<"                     #####Convertor######\n";
       	cout<<"                     #                  #\n";
       	cout<<"                     #                  #\n";
       	cout<<"                     #   1-Lungime      #\n";
       	cout<<"                     #   2-Arie         #\n";
       	cout<<"                     #   3-Volum        #\n";
       	cout<<"                     #   4-Timp         #\n";
       	cout<<"                     #   5-Viteza       #\n";
       	cout<<"                     #   6-Temperatura  #\n";
       	cout<<"                     #   7-Masa         #\n";
       	cout<<"                     #   8-Energie      #\n";
       	cout<<"                     #   9-Presiune     #\n";
       	cout<<"                     #   10-Densitate   #\n";
       	cout<<"                     #   11-Consum      #\n";
       	cout<<"                     #   Combustibil    #\n";
       	cout<<"                     #                  #\n";
       	cout<<"                     #                  #\n";
       	cout<<"                     #   12-Iesire      #\n";
       	cout<<"                     #                  #\n";
       	cout<<"                     ####################\n";
    }
int GetInputUnitati1()
    {
        int choice;
        cout<<"                                Selectati unitatea de masura pe care  \n";
        cout<<"                              doriti sa o convertiti : ";cin>>choice;
        return choice;
    }
int GetInputUnitati2()
    {
        int choice;
        cout<<"                                Selectati unitatea de masura in care  \n";
        cout<<"                              doriti sa  convertiti : ";cin>>choice;
        return choice;
    }
double GetInputValoare()
    {
        double choice;
        cout<<"                              Dati valoarea dorita : ";scanf("%lf",&choice);
        return choice;
    }
void Lungime()
    {
        cout<<"                              ################LUNGIME#################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.mm-Milimetru          5.dam-Decametru \n";
        cout<<"                              2.cm-Centimetru         6.hm-Hectometru \n";
        cout<<"                              3.dm-Decimetru          7.km-Kilometru  \n";
        cout<<"                              4.m-Metru               8.in-Inch       \n";
        cout<<"\n";
    }
unsigned NumaraParteaFractionara(double number)
    {
        unsigned numara=0;
        number=abs(number);
        number=number-(int)number;
        while(fabs(number) >= 0.0000001)
            {
                number=number*10;
                numara++;
                number=number-(int)number;
            }
        return numara;
    }
void SirulUnitati(char Sir[10],int numar)
    {
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"mm");
                    break;
                case 2:
                    strcpy(Sir,"cm");
                    break;
                case 3:
                    strcpy(Sir,"dm");
                    break;
                case 4:
                    strcpy(Sir,"m");
                    break;
                case 5:
                    strcpy(Sir,"dam");
                    break;
                case 6:
                    strcpy(Sir,"hm");
                    break;
                case 7:
                    strcpy(Sir,"km");
                    break;
                case 8:
                    strcpy(Sir,"in");
                    break;
            }
    }
void AfisarePrecizie(double f)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(NumaraParteaFractionara(f)) << f << std::fixed;
    }
void AfisareRezultat(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mm >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" cm >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" dm >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" m >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" dam >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" hm >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 7:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" km >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 8:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" in >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                        break;
                }
    }
void PrelucrareRezultatMetri(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare/1000;
                    break;
                case 2:
                    Valoare=Valoare/100;
                    break;
                case 3:
                    Valoare=Valoare/10;
                    break;
                case 4:
                    Valoare=Valoare*1;
                    break;
                case 5:
                    Valoare=Valoare*10;
                    break;
                case 6:
                    Valoare=Valoare*100;
                    break;
                case 7:
                    Valoare=Valoare*1000;
                    break;
                case 8:
                    Valoare=Valoare*0.0254;
                    break;
            }
    }
void PrelucrareRezultat(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*1000;
                    break;
                case 2:
                    Rezultat=Valoare*100;
                    break;
                case 3:
                    Rezultat=Valoare*10;
                    break;
                case 4:
                    Rezultat=Valoare;
                    break;
                case 5:
                    Rezultat=Valoare/10;
                    break;
                case 6:
                    Rezultat=Valoare/100;
                    break;
                case 7:
                    Rezultat=Valoare/1000;
                    break;
                case 8:
                    Rezultat=Valoare*39.37008;
                    break;
            }
    }
int GetInPutExit()
    {
        int choice;
        cin>>choice;
        return choice;
    }
void MeniuExit()
    {
        cout<<"                                 \n";
        cout<<"                                 \n";
        cout<<"                                 ";cout<<"Apasati:\n";
        cout<<"                                 ";cout<<"    1-Pentru a introduce alte valori;\n";
        cout<<"                                 ";cout<<"    2-Pentru a reveni la meniul principal;\n";
        cout<<"                                 ";cout<<"    3-Pentru a iesi din program.\n";
        cout<<"\n";
        cout<<"                                 ";cout<<"      Alegerea dvs.:";

    }
void MeniuLungime()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Lungime();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitati(SirUnitati,index2);
                PrelucrareRezultatMetri(index,copie);
                PrelucrareRezultat(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultat(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Arie()
    {
        cout<<"                              ##################ARIA##################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                                     1.mm";cout <<(char)253<<"-Milimetru patrat \n";
        cout<<"                                     2.cm";cout <<(char)253<<"-Centimetru patrat \n";
        cout<<"                                     3.dm";cout <<(char)253<<"-Decimetru patrat \n";
        cout<<"                                     4.m";cout <<(char)253<<"-Metru patrat \n";
        cout<<"                                     5.a-Ari \n";
        cout<<"                                     6.ha-Hectari\n";
        cout<<"                                     7.km";cout <<(char)253<<"-Kilometru patrat \n";
        cout<<"\n";
    }
void SirulUnitatiArie(char Sir[10],int numar)
    {
        char b[2]={(char)253};
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"mm");
                    strcat(Sir,b);
                    break;
                case 2:
                    strcpy(Sir,"cm");
                    strcat(Sir,b);
                    break;
                case 3:
                    strcpy(Sir,"dm");
                    strcat(Sir,b);
                    break;
                case 4:
                    strcpy(Sir,"m");
                    strcat(Sir,b);
                    break;
                case 5:
                    strcpy(Sir,"a");
                    break;
                case 6:
                    strcpy(Sir,"ha");
                    break;
                case 7:
                    strcpy(Sir,"km");
                    strcat(Sir,b);
                    break;
                default :
                    break;
            }
    }
void PrelucrareRezultatMetriArie(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare/1000000;
                    break;
                case 2:
                    Valoare=Valoare/10000;
                    break;
                case 3:
                    Valoare=Valoare/100;
                    break;
                case 4:
                    Valoare=Valoare*1;
                    break;
                case 5:
                    Valoare=Valoare*100;
                    break;
                case 6:
                    Valoare=Valoare*10000;
                    break;
                case 7:
                    Valoare=Valoare*1000000;
                    break;
            }
    }
void PrelucrareRezultatArie(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*1000000;
                    break;
                case 2:
                    Rezultat=Valoare*10000;
                    break;
                case 3:
                    Rezultat=Valoare*100;
                    break;
                case 4:
                    Rezultat=Valoare;
                    break;
                case 5:
                    Rezultat=Valoare/100;
                    break;
                case 6:
                    Rezultat=Valoare/10000;
                    break;
                case 7:
                    Rezultat=Valoare/1000000;
                    break;
            }
    }
void AfisareRezultatArie(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mm";cout <<(char)253<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" cm";cout <<(char)253<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" dm";cout <<(char)253<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" m";cout <<(char)253<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" a >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" ha >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 7:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" km";cout <<(char)253<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }

    }
void MeniuArie()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Arie();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiArie(SirUnitati,index2);
                PrelucrareRezultatMetriArie(index,copie);
                PrelucrareRezultatArie(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatArie(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Volum()
    {
        cout<<"                              #################VOLUM##################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.ml-Mililitru          5.dal-Decalitru \n";
        cout<<"                              2.cl-CentiLitru         6.hl-Hectolitru \n";
        cout<<"                              3.dl-Decilitru          7.kl-Kilolitru  \n";
        cout<<"                              4.l-Litru               8.m^3-Metri Cubi\n";
        cout<<"\n";
    }
void SirulUnitatiVolum(char Sir[10],int numar)
    {
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"ml");
                    break;
                case 2:
                    strcpy(Sir,"cl");
                    break;
                case 3:
                    strcpy(Sir,"dl");
                    break;
                case 4:
                    strcpy(Sir,"l");
                    break;
                case 5:
                    strcpy(Sir,"dal");
                    break;
                case 6:
                    strcpy(Sir,"hl");
                    break;
                case 7:
                    strcpy(Sir,"kl");
                    break;
                case 8:
                    strcpy(Sir,"m^3");
                    break;
            }
    }
void PrelucrareRezultatLitri(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare/1000;
                    break;
                case 2:
                    Valoare=Valoare/100;
                    break;
                case 3:
                    Valoare=Valoare/10;
                    break;
                case 4:
                    Valoare=Valoare*1;
                    break;
                case 5:
                    Valoare=Valoare*10;
                    break;
                case 6:
                    Valoare=Valoare*100;
                    break;
                case 7:
                    Valoare=Valoare*1000;
                    break;
                case 8:
                    Valoare=Valoare*1000;
                    break;
            }
    }
void PrelucrareRezultatVolum(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*1000;
                    break;
                case 2:
                    Rezultat=Valoare*100;
                    break;
                case 3:
                    Rezultat=Valoare*10;
                    break;
                case 4:
                    Rezultat=Valoare;
                    break;
                case 5:
                    Rezultat=Valoare/10;
                    break;
                case 6:
                    Rezultat=Valoare/100;
                    break;
                case 7:
                    Rezultat=Valoare/1000;
                    break;
                case 8:
                    Rezultat=Valoare/1000;
                    break;
            }
    }
void AfisareRezultatVolum(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" ml >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" cl >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" dl >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" l >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" dal >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" hl >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 7:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" kl >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 8:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" m^3 >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }
    }
void MeniuVolum()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Volum();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiVolum(SirUnitati,index2);
                PrelucrareRezultatLitri(index,copie);
                PrelucrareRezultatVolum(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatVolum(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Timp()
    {
        cout<<"                              ##################TIMP##################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.s-Secunda             4.zi            \n";
        cout<<"                              2.min-Minut             5.luna          \n";
        cout<<"                              3.h-Ora                 6.an            \n";
        cout<<"\n";
    }
void SirulUnitatiTimp(char Sir[10],int numar)
    {
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"s");
                    break;
                case 2:
                    strcpy(Sir,"min");
                    break;
                case 3:
                    strcpy(Sir,"h");
                    break;
                case 4:
                    strcpy(Sir,"zi");
                    break;
                case 5:
                    strcpy(Sir,"luna");
                    break;
                case 6:
                    strcpy(Sir,"an");
                    break;
            }
    }
void PrelucrareRezultatOre(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare*0.000277;
                    break;
                case 2:
                    Valoare=Valoare*0.016666;
                    break;
                case 3:
                    Valoare=Valoare*1;
                    break;
                case 4:
                    Valoare=Valoare*24;
                    break;
                case 5:
                    Valoare=Valoare*730.48;
                    break;
                case 6:
                    Valoare=Valoare*8765,81;
                    break;
            }
    }
void PrelucrareRezultatTimp(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*3600;
                    break;
                case 2:
                    Rezultat=Valoare*60;
                    break;
                case 3:
                    Rezultat=Valoare*1;
                    break;
                case 4:
                    Rezultat=Valoare*0,04166;
                    break;
                case 5:
                    Rezultat=Valoare*0,00136;
                    break;
                case 6:
                    Rezultat=Valoare*0,000114;
                    break;
            }
    }
void AfisareRezultatTimp(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" s >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" min >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" h >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" zi >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" luna >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" an >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }
    }
void MeniuTimp()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Timp();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiTimp(SirUnitati,index2);
                PrelucrareRezultatOre(index,copie);
                PrelucrareRezultatTimp(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatTimp(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Viteza()
    {
        cout<<"                              #################VITEZA#################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.cm/s-Centimetru pe secunda            \n";
        cout<<"                              2.m/s-Metru pe secunda                  \n";
        cout<<"                              3.mps-Mile pe secunda                   \n";
        cout<<"                              4.mph-Mile pe ora                       \n";
        cout<<"                              5.km/h-Kilometru pe ora                 \n";
        cout<<"                              6.km/s-Kilometru pe secunda             \n";
        cout<<"                              7.fps-Picioare pe secunda (Feet per sec)\n";
        cout<<"\n";
    }
void SirulUnitatiViteza(char Sir[10],int numar)
    {
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"cm/s");
                    break;
                case 2:
                    strcpy(Sir,"m/s");
                    break;
                case 3:
                    strcpy(Sir,"mps");
                    break;
                case 4:
                    strcpy(Sir,"mph");
                    break;
                case 5:
                    strcpy(Sir,"km/h");
                    break;
                case 6:
                    strcpy(Sir,"km/s");
                    break;
                case 7:
                    strcpy(Sir,"fps");
                    break;
            }
    }
void PrelucrareRezultatMPS(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare/100;
                    break;
                case 2:
                    Valoare=Valoare/1;
                    break;
                case 3:
                    Valoare=Valoare*1609.344;
                    break;
                case 4:
                    Valoare=Valoare*0.447;
                    break;
                case 5:
                    Valoare=Valoare*0.2778;
                    break;
                case 6:
                    Valoare=Valoare*1000;
                    break;
                case 7:
                    Valoare=Valoare*0.3048;
                    break;
            }
    }
void PrelucrareRezultatViteza(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*100;
                    break;
                case 2:
                    Rezultat=Valoare*1;
                    break;
                case 3:
                    Rezultat=Valoare*0.0006;
                    break;
                case 4:
                    Rezultat=Valoare*2.2369;
                    break;
                case 5:
                    Rezultat=Valoare*3.6;
                    break;
                case 6:
                    Rezultat=Valoare/1000;
                    break;
                case 7:
                    Rezultat=Valoare*3.2808;
                    break;
            }
    }
void AfisareRezultatViteza(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" cm/s >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" m/s >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mps >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mph >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" km/h >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" km/s >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 7:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" fps >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }
    }
void MeniuViteza()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Viteza();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiViteza(SirUnitati,index2);
                PrelucrareRezultatMPS(index,copie);
                PrelucrareRezultatViteza(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatViteza(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Temperatura()
    {
        cout<<"                              ##############TEMPERATURA###############\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.C"<<(char)248<<"-Grade celsius        \n";
        cout<<"                              2.F"<<(char)248<<"-Grade fahrenheit     \n";
        cout<<"                              3.K"<<(char)248<<"-Grade kelvin         \n";
        cout<<"                              4.R"<<(char)248<<"-Grade rankine        \n";
        cout<<"\n";
    }
void SirulUnitatiTemp(char Sir[10],int numar)
    {
        char b[2]={(char)248};
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"C");
                    strcat(Sir,b);
                    break;
                case 2:
                    strcpy(Sir,"F");
                    strcat(Sir,b);
                    break;
                case 3:
                    strcpy(Sir,"K");
                    strcat(Sir,b);
                    break;
                case 4:
                    strcpy(Sir,"R");
                    strcat(Sir,b);
                    break;
            }
    }
void PrelucrareRezultatCel(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare*1;
                    break;
                case 2:
                    Valoare=Valoare*(-17.2222);
                    break;
                case 3:
                    Valoare=Valoare*(-272.15);
                    break;
                case 4:
                    Valoare=Valoare*(-272.6);
                    break;
            }
    }
void PrelucrareRezultatTemp(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*1;
                    break;
                case 2:
                    Rezultat=Valoare*33.8;
                    break;
                case 3:
                    Rezultat=Valoare*274.15;
                    break;
                case 4:
                    Rezultat=Valoare*493.47;
                    break;
            }
    }
void AfisareRezultatTemp(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" C"<<(char)248<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" F"<<(char)248<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" K"<<(char)248<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" R"<<(char)248<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }
    }
void MeniuTemperatura()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Temperatura();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiTemp(SirUnitati,index2);
                PrelucrareRezultatCel(index,copie);
                PrelucrareRezultatTemp(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatTemp(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Masa()
    {

        cout<<"                              ##################MASA##################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.g-Grame               4.mg-Miligrame  \n";
        cout<<"                              2.kg-Kilograme          5.Slug          \n";
        cout<<"                              3.lb-Funte(pound)       6.t-Tona        \n";
        cout<<"\n";
    }
void SirulUnitatiMasa(char Sir[10],int numar)
    {
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"g");
                    break;
                case 2:
                    strcpy(Sir,"kg");
                    break;
                case 3:
                    strcpy(Sir,"lb");
                    break;
                case 4:
                    strcpy(Sir,"mg");
                    break;
                case 5:
                    strcpy(Sir,"Slug");
                    break;
                case 6:
                    strcpy(Sir,"t");
                    break;
            }
    }
void PrelucrareRezultatGr(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare*1;
                    break;
                case 2:
                    Valoare=Valoare*1000;
                    break;
                case 3:
                    Valoare=Valoare*453.592;
                    break;
                case 4:
                    Valoare=Valoare/1000;
                    break;
                case 5:
                    Valoare=Valoare*14593.9;
                    break;
                case 6:
                    Valoare=Valoare*1000000;
                    break;
            }
    }
void PrelucrareRezultatMasa(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*1;
                    break;
                case 2:
                    Rezultat=Valoare/1000;
                    break;
                case 3:
                    Rezultat=Valoare*0.0022;
                    break;
                case 4:
                    Rezultat=Valoare*1000;
                    break;
                case 5:
                    Rezultat=Valoare*0.00007;
                    break;
                case 6:
                    Rezultat=Valoare/1000000;
                    break;
            }
    }
void AfisareRezultatMasa(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" g >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" kg >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" lb >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mg >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" Slug >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" t >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }
    }
void MeniuMasa()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Masa();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiMasa(SirUnitati,index2);
                PrelucrareRezultatGr(index,copie);
                PrelucrareRezultatMasa(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatMasa(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Energie()
    {
        cout<<"                              ################ENERGIE#################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.Wh-Watt-ora           5.kJ-Kilojoule  \n";
        cout<<"                              2.kWh-Kilowatt-ora      6.MJ-Megajoule  \n";
        cout<<"                              3.MWh-Megawatt-ora      7.cal-Calorie   \n";
        cout<<"                              4.J-Joule           8.Kcal-Kilocalorie  \n";
        cout<<"\n";
    }
void SirulUnitatiEnergie(char Sir[10],int numar)
    {
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"Wh");
                    break;
                case 2:
                    strcpy(Sir,"kWh");
                    break;
                case 3:
                    strcpy(Sir,"MWh");
                    break;
                case 4:
                    strcpy(Sir,"J");
                    break;
                case 5:
                    strcpy(Sir,"kJ");
                    break;
                case 6:
                    strcpy(Sir,"MJ");
                    break;
                case 7:
                    strcpy(Sir,"cal");
                    break;
                case 8:
                    strcpy(Sir,"kcal");
                    break;
            }
    }
void PrelucrareRezultatWatt(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare*1;
                    break;
                case 2:
                    Valoare=Valoare*1000;
                    break;
                case 3:
                    Valoare=Valoare*1000000;
                    break;
                case 4:
                    Valoare=Valoare*0.000278;
                    break;
                case 5:
                    Valoare=Valoare*0.278;
                    break;
                case 6:
                    Valoare=Valoare*278;
                    break;
                case 7:
                    Valoare=Valoare*0.001163;
                    break;
                case 8:
                    Valoare=Valoare*1.163;
                    break;
            }
    }
void PrelucrareRezultatEnergie(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*1;
                    break;
                case 2:
                    Rezultat=Valoare/1000;
                    break;
                case 3:
                    Rezultat=Valoare/1000000;
                    break;
                case 4:
                    Rezultat=Valoare*3600;
                    break;
                case 5:
                    Rezultat=Valoare*3.6;
                    break;
                case 6:
                    Rezultat=Valoare*0.0036;
                    break;
                case 7:
                    Rezultat=Valoare*859.8;
                    break;
                case 8:
                    Rezultat=Valoare*0.8598;
                    break;
            }
    }
void AfisareRezultatEnergie(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" Wh >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" kWh >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" MWh >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" J >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" kJ >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" MJ >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 7:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" cal >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 8:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" kcal >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }
    }
void MeniuEnergie()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Energie();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiEnergie(SirUnitati,index2);
                PrelucrareRezultatWatt(index,copie);
                PrelucrareRezultatEnergie(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatEnergie(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Presiune()
    {
        cout<<"                              ###############PRESIUNE#################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.at-Atmosfera tehnica   5.N/m"<<(char)253<<"-Newton     \n";
        cout<<"                              2.atm-Atmosfera standard 6.Pa-Pascal    \n";
        cout<<"                              3.bar-Bar                7.Torr-Torr    \n";
        cout<<"                              4.mmHG-Milimetri         8.PSI-funte pe \n";
        cout<<"                              coloana de mercur        tol patrat     \n";
        cout<<"\n";
    }
void SirulUnitatiPresiune(char Sir[10],int numar)
    {
        char b[2]={(char)253};
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"at");
                    break;
                case 2:
                    strcpy(Sir,"atm");
                    break;
                case 3:
                    strcpy(Sir,"bar");
                    break;
                case 4:
                    strcpy(Sir,"mmHG");
                    break;
                case 5:
                    strcpy(Sir,"N/m");
                    strcat(Sir,b);
                    break;
                case 6:
                    strcpy(Sir,"Pa");
                    break;
                case 7:
                    strcpy(Sir,"Torr");
                    break;
                case 8:
                    strcpy(Sir,"PSI");
                    break;
            }
    }
void PrelucrareRezultatAT(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare*1;
                    break;
                case 2:
                    Valoare=Valoare*1.0332;
                    break;
                case 3:
                    Valoare=Valoare*0.9993;
                    break;
                case 4:
                    Valoare=Valoare*0.0013;
                    break;
                case 5:
                    Valoare=Valoare*0.00001;
                    break;
                case 6:
                    Valoare=Valoare*0.00001;
                    break;
                case 7:
                    Valoare=Valoare*0.0013;
                    break;
                case 8:
                    Valoare=Valoare*0.0703;
                    break;
            }
    }
void PrelucrareRezultatPresiune(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*1;
                    break;
                case 2:
                    Rezultat=Valoare*0.9678;
                    break;
                case 3:
                    Rezultat=Valoare*1.0007;
                    break;
                case 4:
                    Rezultat=Valoare*735.559;
                    break;
                case 5:
                    Rezultat=Valoare*98066.5;
                    break;
                case 6:
                    Rezultat=Valoare*98066.5;
                    break;
                case 7:
                    Rezultat=Valoare*735.559;
                    break;
                case 8:
                    Rezultat=Valoare*14.2233;
                    break;
            }
    }
void AfisareRezultatPresiune(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" at >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" atm >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" bar >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mmHG >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" N/m"<<(char)253<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" Pa >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 7:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" Torr >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 8:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" PSI >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }
    }
void MeniuPresiune()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Presiune();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiPresiune(SirUnitati,index2);
                PrelucrareRezultatAT(index,copie);
                PrelucrareRezultatPresiune(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatPresiune(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void Densitate()
    {
        cout<<"                              ##############DENSITATE#################\n";
        cout<<"                                                                      \n";
        cout<<"                                Legenda:                              \n";
        cout<<"                                                                      \n";
        cout<<"                              1.mg/cm"<<(char)252<<"-Miligram pe centimetru cub\n";
        cout<<"                              2.mg/l-Miligram pe litru\n";
        cout<<"                              3.mg/m"<<(char)252<<"-Miligram pe metru cub\n";
        cout<<"                              4.g/cm"<<(char)252<<"-Gram pe centimetru cub\n";
        cout<<"                              5.g/l-Gram pe litru\n";
        cout<<"                              6.g/m"<<(char)252<<"-Gram pe metru cub\n";
        cout<<"                              7.kg/cm"<<(char)252<<"-Kilogram pe centimetru cub\n";
        cout<<"                              8.kg/l-Kilogram pe litru\n";
        cout<<"                              9.kg/m"<<(char)252<<"-Kilogram pe metru cub\n";
        cout<<"\n";
    }
void SirulUnitatiDensitate(char Sir[10],int numar)
    {
        char b[2]={(char)252};
       switch(numar)
            {
                case 1:
                    strcpy(Sir,"mg/cm");
                    strcat(Sir,b);
                    break;
                case 2:
                    strcpy(Sir,"mg/l");
                    break;
                case 3:
                    strcpy(Sir,"mg/m");
                    strcat(Sir,b);
                    break;
                case 4:
                    strcpy(Sir,"g/cm");
                    strcat(Sir,b);
                    break;
                case 5:
                    strcpy(Sir,"g/l");
                    strcat(Sir,b);
                    break;
                case 6:
                    strcpy(Sir,"g/m");
                    strcat(Sir,b);
                    break;
                case 7:
                    strcpy(Sir,"kg/cm");
                    strcat(Sir,b);
                    break;
                case 8:
                    strcpy(Sir,"kg/l");
                    break;
                case 9:
                    strcpy(Sir,"kg/m");
                    strcat(Sir,b);
                    break;
            }
    }
void PrelucrareRezultatKGM(int index,double &Valoare)
    {
        switch(index)
            {
                case 1:
                    Valoare=Valoare*1;
                    break;
                case 2:
                    Valoare=Valoare/1000;
                    break;
                case 3:
                    Valoare=Valoare/1000000;
                    break;
                case 4:
                    Valoare=Valoare*1000;
                    break;
                case 5:
                    Valoare=Valoare*1;
                    break;
                case 6:
                    Valoare=Valoare/1000;
                    break;
                case 7:
                    Valoare=Valoare*1000000;
                    break;
                case 8:
                    Valoare=Valoare*1000;
                    break;
                case 9:
                    Valoare=Valoare*1;
                    break;
            }
    }
void PrelucrareRezultatDensitate(int index,double &Rezultat,double Valoare)
    {
       switch(index)
            {
                case 1:
                    Rezultat=Valoare*1;
                    break;
                case 2:
                    Rezultat=Valoare*1000;
                    break;
                case 3:
                    Rezultat=Valoare*1000000;
                    break;
                case 4:
                    Rezultat=Valoare/1000;
                    break;
                case 5:
                    Rezultat=Valoare*1;
                    break;
                case 6:
                    Rezultat=Valoare*1000;
                    break;
                case 7:
                    Rezultat=Valoare/1000000;
                    break;
                case 8:
                    Rezultat=Valoare/1000;
                    break;
                case 9:
                    Rezultat=Valoare;
                    break;
            }
    }
void AfisareRezultatDensitate(int index,char SirUnitati[10],double ValoareaInitiala,double ValoareaRezultata)
    {
        cout<<"\n";
        cout<<"\n";
        cout<<"                              Rezultatul dvs. este: \n";
        switch(index)
                {
                    case 1:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mg/cm"<<(char)252<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 2:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mg/l >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 3:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" mg/m"<<(char)252<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 4:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" g/cm"<<(char)252<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 5:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" g/l >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 6:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" g/m"<<(char)252<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 7:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" kg/cm"<<(char)252<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 8:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" kg/l >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                    case 9:
                        cout<<"                                 ";
                        AfisarePrecizie(ValoareaInitiala);
                        cout<<" kg/m"<<(char)252<<" >>> ";
                        AfisarePrecizie(ValoareaRezultata);
                        cout<<" "<<SirUnitati<<"\n";
                        break;
                }
    }
void MeniuDensitate()
    {
        int index,index2,index3;
        char SirUnitati[10];
        double ValoareaInitiala,ValoareaRezultata,copie;
        do
            {
                Densitate();
                index=GetInputUnitati1();
                index2=GetInputUnitati2();
                cout<<"\n";
                ValoareaInitiala=GetInputValoare();
                copie=ValoareaInitiala;
                cout<<"\n";
                SirulUnitatiDensitate(SirUnitati,index2);
                PrelucrareRezultatKGM(index,copie);
                PrelucrareRezultatDensitate(index2,ValoareaRezultata,copie);
                system ("cls");
                AfisareRezultatDensitate(index,SirUnitati,ValoareaInitiala,ValoareaRezultata);
                std::cout << std::fixed;
                cout<<"\n";
                MeniuExit();
                index3=GetInPutExit();
                system ("cls");
                switch(index3)
                    {
                        case 3:
                            cout <<"\n                            Goodbye!\n";
                            exit('exit');
                            break;
                        case 2:
                            break;
                    }
            }while(index3!=2);
    }
void MeniuPrincipal()
    {
        unsigned c=0;
        do
            {
                MeniuPrincipalAfisare();
                c=GetInput();
                    switch(c)
                        {
                            case 1:
                                system("cls");
                                MeniuLungime();
                                break;
                            case 2:
                                system("cls");
                                MeniuArie();
                                break;
                            case 3:
                                system("cls");
                                MeniuVolum();
                                break;
                            case 4:
                                system("cls");
                                MeniuTimp();
                                break;
                            case 5:
                                system("cls");
                                MeniuViteza();
                                break;
                            case 6:
                                system("cls");
                                MeniuTemperatura();
                                break;
                            case 7:
                                system("cls");
                                MeniuMasa();
                                break;
                            case 8:
                                system("cls");
                                MeniuEnergie();
                                break;
                            case 9:
                                system("cls");
                                MeniuPresiune();
                                break;
                            case 10:
                                system("cls");
                                MeniuDensitate();
                                break;
                            case 11:
                                system("cls");
                                cout<<"test11 \n";
                                break;
                            case 12:
                                system("cls");
                                cout <<"\n                            Goodbye!\n";
                                exit('exit');
                                break;
                            default:
                                system("cls");
                                break;
                   }
        }while(c!=12);
    system("PAUSE");
    }

int main()
{
    MeniuPrincipal();
    return 0;
}
