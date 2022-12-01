
#include "lib.h"

bool primo(int a,int b){
    for(int i=a;i>1;i--){
        int s=b%i;
        if(s==0){
            return false;
        }
    }
    return true;
}
