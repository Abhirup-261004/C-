#include<iostream>
#include<string>
using namespace std;

int titleToNumber(string columnTitle){
    int result=0;
    for(auto c:columnTitle){
        result=result *26 +(c-'A'+1);
    }
    return result;

}

int main(){
    string columnTitle="AAB";
    cout<< titleToNumber(columnTitle)<< endl;

    return 0;
    
}