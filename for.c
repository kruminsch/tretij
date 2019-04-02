#include<stdio.h>

void main() {
    int i;
     int massiv[8]= {1,1,2,3,5,8,13,21};
     int fac =1;
    for (i=0;i<8;i+=2)
    {
     fac = fac* massiv[i];}
     
     printf("%d",fac);
    }

    
                                                                                                                                    