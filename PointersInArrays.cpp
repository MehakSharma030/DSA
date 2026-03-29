#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    cout<<"arr -> "<<arr<<endl;
    cout<<"&arr[0] -> "<<&arr[0]<<endl;

    cout<<"*arr -> "<<*arr<<endl;
    cout<<"*(arr + 1) -> "<<*(arr+1)<<endl;
    cout<<"1[arr] -> "<<1[arr]<<endl;

    cout<<endl;

    int temp[5];
    int *ptr=&temp[0];
    cout<<"temp[5]"<<endl;
    cout<<"sizeof(&temp[0]) -> "<<sizeof(temp)<<endl;
    cout<<"sizeof(ptr) -> "<<sizeof(ptr)<<endl;
    cout<<"sizeof(*ptr) -> "<<sizeof(*ptr)<<endl;

    cout<<endl;

    cout<<"char ch[6]"<<endl;
    char ch[6]="abcde";
    char *p=&ch[0];
    cout<<"ch -> "<<ch<<endl;
    cout<<"p -> "<<p<<endl;
    cout<<"*p -> "<<*p<<endl;

    cout<<endl;
    cout<<"char ch -> 'a' "<<endl;
    char c='a';
    char *pt= & c;
    cout<<"ch -> "<<c <<endl;
    cout<<"pt -> "<<pt<<endl;

    return 0;
}