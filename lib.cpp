#include "lib.h"

bool primo(int a, int b){
    a--;
    if(a > 1){
        if(b%a == 0){
            return false;
        }else {
            primo(a, b);
        }
    }else{
        return true;
    }
}
