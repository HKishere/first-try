#include<stdio.h>
#include<stdlib.h>
int main (){ 
    int a[100];
    int i,s;
    int n=0;
    for(i=0;i<100;i++){
        a[i]=i+1;
    }
        for(i=0;i<100;i++){
        s=a[i]/ 10;
        a[i]=a[i]-(10*s);
        if(s==9){
            ++n;
        }
        else if(a[i]==9){
            ++n;
        }
    }
    printf("the num of 9 in 1 to 100 is:%d",n);
    system("pause");
    return 0;
}
