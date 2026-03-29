#include<iostream>
using namespace std;

//task is to chck palindorme string for only alphabets and numbers
//whitespaces and special case charactersare to be ignored

char Char_to_lower(char ch){
    if(ch >= 'A' && ch<= 'Z'){
        return ch-'A'+'a';;
    }
    return ch; // this wil return lowercase letters or numbers
}

bool is_alpha(char ch){
    if(ch >= 'a' && ch<= 'z' || ch >= 'A' && ch<= 'Z'  || ch >= '0' && ch <= '9'){
        return true;
    }
    else{
        return false;
    }
}

bool chckPalindrome(string str){
    int i=0;
    int j=str.length()-1;
    while(i < j){

        while(i < j && !is_alpha(str[i])){
            i++;
        }

        while(i < j && !is_alpha(str[j])){
            j--;
        }

        char val1=Char_to_lower(str[i]);
        char val2=Char_to_lower(str[j]);
        if(val1 != val2){
            cout<<"It's not a palindorme string";
            return 0;
        }
        i++;
            j--;
            
        }
    cout<<"It's a palindorme string ";
    return 1;
}

int main(){
    string s;
    cout<<"Enter any string : ";
    getline(cin, s);
    chckPalindrome(s);
    return 0;
}