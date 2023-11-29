#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
    int op, n, n2;
    
    while(1){
        cout<<"------------------------------"<<endl;
        cout<<"|0. Iesire din program       |"<<endl;
        cout<<"|1. Adunarea array     +     |"<<endl;
        cout<<"|2. Atribuire array    =     |"<<endl;
        cout<<"|3. Comparare array    ==    |"<<endl;
        cout<<"|4. Comparare array    !=    |"<<endl;
        cout<<"|5. Comparare array    >     |"<<endl;
        cout<<"|6. Comparare array    <     |"<<endl;
        cout<<"|7. I/O stream         << >> |"<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"--> ";
        cin>>op;
        
        switch(op){
            case 0:{
                cout << "Sfarsit de program\n\n";
                exit (0);
            }
                break;
            case 1:{
                list a, b, c;
                
                cout << "Introdu marimea array - ";
                cin >> n;
                a.setClass(n);
                b.setClass(n);
                c = a + b;
                c.showClass();
            }
                break;
            case 2:{
                list a, b;
                cout << "Introdu marimea array - ";
                cin >> n;
                a.setClass(n);
                b = a;
                b.showClass();
            }
                break;
            case 3:{
                list a, b;
                cout << "Introdu marime pentru primul array - ";
                cin >> n;
                a.setClass(n);
                cout << "Introdu marime pentru al doilea array - ";
                cin >> n2;
                b.setClass(n2);
                
                if(a == b)
                    cout << "Array-urile sunt egale\n";
                else
                    cout << "Array-urile nu sunt egale\n";
            }
                break;
            case 4:{
                list a, b;
                cout << "Introdu marime pentru array - ";
                cin >> n;
                a.setClass(n);
                b.setClass(n);
                
                if(a != b)
                    cout << "Array-urile sunt diferite\n";
                else
                    cout << "Array-urile sunt egale\n";
            }
                break;
            case 5:{
                list a, b;
                cout << "Introdu marime pentru array - ";
                cin >> n;
                a.setClass(n);
                b.setClass(n);
                
                if(a > b)
                    cout << "Suma elementelor a primului array este mai mare decat al doilea\n";
                else
                    cout << "Suma elementelor a primului array este mai mica decat al doilea\n";
            }
                break;
            case 6:{
                list a, b;
                cout << "Introdu marime pentru array - ";
                cin >> n;
                a.setClass(n);
                b.setClass(n);
                
                if(a < b)
                    cout << "Suma elementelor a primului array este mai mica decat al doilea\n";
                else
                    cout << "Suma elementelor a primului array este mai mare decat al doilea\n";
            }
                break;
            case 7:{
                list t;
                cout<<"Marimea: ";
                cin>>n;
                t.setN(n);
                cin>>t;

                cout<<"\nResultat\n";
                cout<<t;
                cout<<"\n";
            }
                break;
            default:{
                cout << "Nu exista asa optiune " << op << "!\n\n";
            }
                break;
        }
    }
    return 0;
}
