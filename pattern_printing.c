#include<stdio.h>
int main()
{
	int n,j,l=10,i,m,k=0,sum=0,a,o;
	scanf("%d",&n);
	a=n;
	o=n-1;
	for(i=n;i>0;i--)
		sum+=i;
	sum=2*sum+1;
	for(i=0;i<n;i++){
		m=(sum-a)*10;
		for(j=1;j<=i*2;j++)
			printf("*");
		for(j=n;j>i;j--){
		printf("%d",l);
		l=l+10;
	}
	for(j=n;j>i;j--){
		if(j==i+1)
	printf("%d",m/10);
	else
	printf("%d",m);
	m=m+10;
}	
m=m-(a*10);
a+=o;
o--;
printf("\n");
}
}
