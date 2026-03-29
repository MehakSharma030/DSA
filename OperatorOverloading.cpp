#include<iostream>
using namespace std;

class demo{

    public:
    int a;
    int b;

    void add(int a,int b){
        cout<<"add -> "<<a+b<<endl;
    }

    void operator +(demo &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"subtract -> "<<value1-value2<<endl;
    }

    void operator ()(){
        cout<<"I'm the overloaded bracket operator"<<endl;
    }

};

int main(){

    demo obj1,obj2,obj3;
    
    obj1.add(10,5);
    obj1.a=10;
    obj2.a=5;

    obj1 + obj2;
    obj3 ();

    return 0;
}
