#include<stdio.h>
#include<stdlib.h>
int main (){ 
    int i;
    int a[4]={5,3,6,8};
    int b[4]={34,7,9,0};
    for(i=0;i<4;++i){
    int c=0;
    a[i]=c;
    a[i]=b[i];
    b[i]=c;
    }
    for(i=0;i<4;++i){
        printf("a[%d]=%d,",i,a[i]);    
    }
    printf("\n");
    for(i=0;i<4;++i){
        printf("b[%d]=%d,",i,b[i]);
    }
    system("pause");
    return 0;
}