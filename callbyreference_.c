#include<stdio.h>
int swap(int *,int *);
int swap(int *a,int *b){ //  formal parameter
    int temp=*b;
    *b=*a;
    *a=temp;
    printf("The values of swap(m,n) is %d %d\n",*a,*b);
}
int main(){
    int m=20,n=40;
    printf("The value of m and n are %d and %d before swapping\n",m,n);
    swap(&m,&n); // passing by the address
    printf("The value of m and n are %d and %d after swapping\n",m,n);
    return 0;
}

// we have passed the address 
// so we have to defernce it by the pointer.
// that is why formal parameters are like *a and *b they are accessing the real values.

// also note down the function prototype od swap.