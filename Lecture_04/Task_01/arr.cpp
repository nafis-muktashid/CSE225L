#include "arr.h"

arr::arr(){
    vec = 0;
    n = 0;
}

arr::arr(int si){
    vec = new int [si];
    n = si;
}

void arr::setValues(int idx, int i){
    vec[idx] = i;
}

int arr::getValues(int idx){
    return vec[idx];
}
