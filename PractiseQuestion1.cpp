#include <iostream>
using namespace std;

int main(){
    char ch;
    cout <<"Enter character:";
    cin>> ch;
    if(ch>='a' && ch<='z'){
        cout << "LOWERCASE"<< endl;
    }else if(ch>='A' && ch<='Z'){
        cout<< "UPPERCASE"<<endl;

    }
    return 0;
}
