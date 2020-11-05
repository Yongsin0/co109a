#include <stdio.h>

/*
R0=1
while (1) {
  R0=R0+1
}
*/
int main(){
    int RO=1;
    while (1){
       RO = RO+1;   
       printf("R0=%d\n",RO);
    }
    
}
