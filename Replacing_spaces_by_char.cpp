#include<iostream>
using namespace std;

string replaceSpaces(string &str){
	int spaces=0;
	int orig_len=str.length();

	for(int i=0;i<orig_len;i++){
		if(str[i] == ' '){
			spaces++;
		}
	}

	int newlen=orig_len+spaces*2;
	str.resize(newlen);
	int i = orig_len-1 ;
	int j = newlen-1 ;

	while(i >= 0){
		if(str[i] == ' '){
			str[j--]='0';
			str[j--]='4';
			str[j--]='@';
			i--;
		}
		else{
			str[j--]=str[i--];
		}
	}
	return str;
}

int main(){
    string str="My name is Zoya";
    cout<<"the string is : ";
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    cout<<"Delimeter for spaces is : @40"<<endl;

    cout<<"delimeted string is : ";
    string string2=replaceSpaces(str);
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    return 0;
}