
* code
```
#include <stdio.h>

/*
R0=1
while (1) {
  R0=R0+1
}
*/
int main(){
    int RO=1;
    //while (1){
LOOP:        
       RO = RO+1;  
       if (RO==10) goto EXIT;
       printf("R0=%d\n",RO);
       goto LOOP;
   // }
   EXIT:
   return 0;
}

```
