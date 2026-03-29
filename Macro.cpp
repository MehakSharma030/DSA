#include<iostream>
#define PI 3.14
#define max(a,b) (a > b)?a:b
using namespace std;

int main(){
    int r;
    cout<<"Enter radius of circle : ";
    cin>>r;
    double area=PI * r * r;
    cout<<"Area of circle is : "<<area<<endl;

    cout<<endl;
    int a,b;
    cout<<"Enter any two elements : ";
    cin>>a>>b;
    int maxi=max(a,b);
    cout<<"Maximum element is  : "<<maxi<<endl;
    return 0;
}