#include<stdio.h>
int swap(int,int);
int swap(int a,int b){ //  formal parameter
    int temp=b;
    b=a;
    a=temp;
    printf("The values of swap(m,n) is %d %d\n",a,b);
}
int main(){
    int m=20,n=40;
    printf("The value of m and n are %d and %d before swapping\n",m,n);
    swap(m,n);
    printf("The value of m and n are %d and %d after swapping\n",m,n);
    return 0;
}

// In this case we have pass the function by the value
// so original values are not be changed.
// even if we use calling through the original(actual) parameter in the main function values remians the same.