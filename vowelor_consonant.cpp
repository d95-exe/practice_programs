#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"VOWEL OR CONSONANT?";
    cout<<"\nEnter a letter and I shall tell you what it is.";
    cin>>a;
    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u' ){
        cout<<a<<" is a vowel.";
    }else{
        cout<<a<<" is a consonant.";
    }
    return 0;
}