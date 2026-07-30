#include <stdio.h>
void swap(int *p,int *q);
int main(){
    int a=10,b=5;
    swap(&a,&b);
    int i,n;
    printf("\nenter number and i:");scanf("%d %d",&n,&i);
    if(n&(1<<i)!=0)printf("set");
    else printf("not set");
    printf("%d",1<<1);
    
}
void swap(int *p,int *q){
    *p=(*p)^(*q);
    *q=(*p)^(*q);
    *p=(*p)^(*q);
    printf("swapped: %d and %d",*p,*q);
}
