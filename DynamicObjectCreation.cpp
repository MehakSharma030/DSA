#include<iostream>
using namespace std;

class hero{

    private:
    int level;

    public:
    char health;

    void setLevel(int n){
        level=n;
    }

    int getLevel(){
        return level;
    }

    void setHealth(char val){
        health=val;
    }

    char getHeatlh(){
        return health;
    }

};

int main(){

    // dynamic object creation
    hero *b=new hero;

    b->setLevel(10);
    b->setHealth('T');
    cout<<"level is : "<<(*b).getLevel()<<endl;
    cout<<"level is : "<<b->getLevel()<<endl;

    cout<<endl;

    cout<<"health is : "<<(*b).getHeatlh()<<endl;
    cout<<"health is : "<<b->getHeatlh()<<endl;

    cout<<endl;

    return 0;
}