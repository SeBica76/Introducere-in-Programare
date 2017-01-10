#include <iostream>
#include "windows.h"

using namespace std;
int GetInput()
    {
        int choice;
        cout<<"                             ";cin>>choice;
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
void MeniuLungime()
    {
        cout<<"test1 \n";
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
                            cout << "Goodbye!\n";
                            exit('exit');
                            break;
                    default:
                            break;
                   }
        }while(c!=12);
    system("PAUSE");
    return 0;
}
