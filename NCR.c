#include<stdio.h>
int fact(int x);
int ncr(int n,int r);
int main() {
	int n,r;
	printf("Enter values of n,r:");
	scanf("%d%d",&n,&r);
	printf("NCR of given n,r is %d",ncr(n,r));
	return 0;
}
int fact(int x) {
	if(x==1||x==0) {
		return 1;
	}
	else {
		return x*fact(x-1);
	}
}
int ncr(int n,int r) {
	if(r>n||r<0) {
		return 0;
	}
	else {
		return fact(n)/(fact(r)*fact(n-r));
	}
}
