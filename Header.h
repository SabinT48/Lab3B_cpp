#include <iostream>
using namespace std;

class list{
private:
    int n;
    int *arr;
public:
    //constructor implicit
    list(){
        arr = nullptr;
    }
    
    //destructor
    ~list(){
        if(arr != nullptr){
            delete[] arr;
        }
    }
    
    void setClass(int size);
    void showClass();
    void setN(int size){
        n = size;
    }
    
    //operatorul de adunare +
    list operator +(const list& b);
    
    //operatorul de atribuire =
    list& operator =(const list& other);
    
    //operatorul de comparare ==
    friend bool operator ==(const list& a, const list& b);
    
    //operatorul de comparare !=
    friend bool operator !=(const list& a, const list& b);
    
    //operatorul de comparare >
    friend bool operator >(const list& a, const list& b);
    
    //operatorul de comparare <
    friend bool operator <(const list& a, const list& b);
    
    friend istream &operator>>(istream &,list &);
    friend ostream &operator<<(ostream &,list &);
};
