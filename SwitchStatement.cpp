#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter amount : ";
    cin>>amount;

    switch(1){
        case 1:
        {
            // 100 rupee notes
            int n=amount/100;
            amount=amount-(100*n);
            cout<<"100 rupee notes :"<<n<<endl;
        }
        case 2:
        {
            // 50 rupee notes
            int n=amount/50;
            if(amount >= 50){
                amount=amount-(50*n);
                cout<<"50 rupee notes :"<<n<<endl;
            }
            

        }
        case 3:
        {
            // 20 rupee notes
            int n=amount/20;
            if(amount >= 20){
                amount=amount-(20*n);
                cout<<"20 rupee notes :"<<n<<endl;
            }
            
        }
        case 4:
        {
            // 10 rupee notes
            int n=amount/10;
            if(amount >= 10){
                amount=amount-(10*n);
                cout<<"10 rupee notes :"<<n<<endl;
            }
            
        }
    }
    return 0;
}