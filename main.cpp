#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int c;
cin>>c;
bool num_primo=primo(c,c);
if (num_primo==1){
    cout<<"numero primo"<<endl;
}else if (num_primo==0){
    cout<<"numero non primo"<<endl;
}
    return 0;
}
