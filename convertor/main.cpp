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
        cout<<"                       Your choice: ";cin>>choice;
        return choice;
    }
void MeniuPrincipal()
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
        cout<<"                              ################Lungime#################\n";
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
void SirulUnitati(char Sir[4],int numar)
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
void AfisareRezultat(int index,char SirUnitati[4],double ValoareaInitiala,double ValoareaRezultata)
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
void MeniuLungime()
    {
        int index,index2;
        char SirUnitati[4];
        double ValoareaInitiala,ValoareaRezultata,copie;
        Lungime();
        do
            {
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
            }while(index!=10);
    }
int main()
{
    unsigned c=0;
    MeniuPrincipal();
    do
        {
           c=GetInput();
           switch(c)
                {
                    case 1:
                            system("cls");
                            MeniuLungime();
                            break;
                    case 2:
                            system("cls");
                            cout<<"test2 \n";
                            break;
                    case 3:
                            system("cls");
                            cout<<"test3 \n";
                            break;
                    case 4:
                            system("cls");
                            cout<<"test4 \n";
                            break;
                    case 5:
                            system("cls");
                            cout<<"test5 \n";
                            break;
                    case 6:
                            system("cls");
                            cout<<"test6 \n";
                            break;
                    case 7:
                            system("cls");
                            cout<<"test7 \n";
                            break;
                    case 8:
                            system("cls");
                            cout<<"test8 \n";
                            break;
                    case 9:
                            system("cls");
                            cout<<"test9 \n";
                            break;
                    case 10:
                            system("cls");
                            cout<<"test10 \n";
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
                            break;
                   }
        }while(c!=12);
    system("PAUSE");
    return 0;
}
