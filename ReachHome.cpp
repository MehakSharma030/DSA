#include<iostream>
using namespace std;

void reachHome(int dest , int source){
    cout<<" Source -> "<<source << "  Destination -> " << dest << endl;

    if(source == dest){
        cout<<"Reached the Destination "<<endl;
        return;
    }

    reachHome(dest , source+1);
}

int main(){

    int destination=15;
    int source=1;
    cout<<endl;

    reachHome(destination , source);

    cout<<endl;
    return 0;
}