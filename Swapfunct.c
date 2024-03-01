#include<stdio.h>
int swap(int,int);
int main() {
 int x,y;
 printf("Enter x:");
 scanf("%d",&x);
 printf("Enter y:");
 scanf("%d",&y);
 swap(x,y);
 
 return 0;
}
int swap(int a,int b) {
 int t;
 printf("Before swaping\n");
 printf("%d %d\n",a,b);
 t=a;
 a=b;
 b=t;
 printf("After swaping\n");
 printf("%d %d\n",a,b);
}
