#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    //adding elements
    m[1]="car";
    m[2]="bike";
    m.insert({10,"scooty"});
    m.emplace(15,"truck");

    cout<<"Size of created map is :"<<m.size()<<endl;

    cout<<"after inserting :"<<endl;;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

    cout<<"after deleting elements : "<<endl;
    m.erase(2);
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

    cout<<"2 present or not : "<<m.count(2)<<endl;

    cout<<"traversing map from a particular index : "<<endl;
    map<int,string>:: iterator itr=m.find(10);
    for(auto it=itr;it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

    return 0;
}

