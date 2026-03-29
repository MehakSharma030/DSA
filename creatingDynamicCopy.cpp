#include<iostream>
using namespace std;

class demo{

    int a;
    int *p;

    public:
    demo(){
        a=15;
        p=new int;
        *p=0;
    }

    demo(demo& obj){
        a=obj.a;
        p=new int ;
        *p=*(obj.p);
    }

    void update(){
        a=a+1;
        *p=*p+1;
    }

    void show(){
        cout<<"a -> "<<a<<endl;
        cout<<"*p -> "<<*p<<endl;
    }

};

int main(){

    demo obj1;
    demo obj2(obj1);

    cout<<endl<<"obj 1 "<<endl;
    obj1.show();

    cout<<endl<<"obj 2"<<endl;
    obj2.show();

    cout<<"after updation in object 1"<<endl;
    obj1.update();
    cout<<endl<<"obj 1 "<<endl;
    obj1.show();

    cout<<endl<<"obj 2"<<endl;
    obj2.show();

    return 0;

}