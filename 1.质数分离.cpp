#include<stdio.h>
#include<math.h>
//ÅĞ¶ÏÖÊÊı
int prime(int n)
{
	int m=sqrt(n);
	for(int i=2;i<=m;i++)
	if(n%i==0)
	return 0;
	return 1;
 } 
int main()
{
	int prime(int n);
	long n;
	scanf("%ld",&n);
	long m=sqrt(n)+1;
	int a=prime(2);
	for(int i=1;i<=m;i++)
	{
		if(n%i==0&&prime(n/i)==1&&prime(i)==1)
		{
		printf("%ld",n/i);
		break;
	}
	}
}
