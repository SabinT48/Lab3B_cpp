#include <iostream>
#include "Header.h"
using namespace std;

//functia pentru a seta valorile clasei
void list::setClass(int size){
    if(arr != nullptr){
        delete[] arr;
    }
    
    n = size;
    arr = new int[n];
    cout << "Introdu elementele in array\n";
    for(int i = 0;i < n;i++){
        cout << "Arr["<<i+1<<"] - ";
        cin >> arr[i];
    }
}

//afisarea valorilor
void list::showClass(){
    cout << "\nElementele array-ului\n";
    for(int i = 0;i < n;i++){
        cout << "Arr["<<i+1<<"] - "<<arr[i]<<"  ";
    }
    cout << endl << endl;
}

//operatorul de adunare
list list::operator +(const list& b){
    list temp;
    temp.n = n;
    temp.arr = new int[n];
    
    for(int i = 0;i < n;i++){
        temp.arr[i] = arr[i] + b.arr[i];
    }
    
    return temp;
}

//operatorul de atribuire
list& list::operator =(const list& other){
    if (this != &other) {
        n = other.n;
        arr = new int[n];
        for(int i = 0;i < n;i++){
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

//operatorul de comparare ==
bool operator ==(const list& a, const list& b) {
    if(a.n != b.n)
        return false;
    
    for(int i = 0; i < a.n; i++) {
        if(a.arr[i] != b.arr[i])
            return false;
    }
    
    return true;
}

//operatorul de comparare !=
bool operator !=(const list& a, const list& b){
    for(int i = 0; i < a.n; i++) {
        if(a.arr[i] != b.arr[i])
            return true;
    }
    
    return false;
}

//operatorul de comparare >
bool operator >(const list& a, const list& b){
    int temp1 = 0 ,temp2 = 0;
    for(int i = 0;i < a.n;i++){
        temp1 += a.arr[i];
        temp2 += b.arr[i];
    }
    
    if(temp1 > temp2)
        return true;
    else
        return false;
}

//operatorul de comparare <
bool operator <(const list& a, const list& b){
    int temp1 = 0 ,temp2 = 0;
    for(int i = 0;i < a.n;i++){
        temp1 += a.arr[i];
        temp2 += b.arr[i];
    }
    
    if(temp1 < temp2)
        return true;
    else
        return false;
}

istream &operator>>(istream &input, list &t)
{
    t.arr = new int[t.n];
    for(int i = 0; i < t.n; i++){
        cout << "Arr["<<i+1<<"] - ";
        input>>t.arr[i];
    }
    
    return input;
}

ostream &operator<<(ostream &output, list &t)
{
    for(int i = 0; i < t.n; i++)
        output<< "Arr["<<i+1<<"] - "<<t.arr[i]<<"  ";
    return output;
}
