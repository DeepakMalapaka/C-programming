#include<stdio.h>
int main() 
{
	int a,b,c,d,e,f,g,i,j;
	printf("Enter values of a,b,c,d,e,f,i,j:");
	scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&d,&e,&f,&i,&j);
	printf("firt expression\n");
	int x;
	x=a+b*c+(d*e)+f*g;
	printf("x=%f\n",x);
	printf("second expression\n");
	int y;
	y=a/b*c-b+a*d/3.0;
	printf("y=%f\n",y);
	printf("third expresion\n");
	int u;
	u=a+++b---a;
	printf("u=%f\n",u);
	printf("fourth expression\n");
	j=(i++)+(++i);
	printf("j=%f\n",j);
	return 0;
}
