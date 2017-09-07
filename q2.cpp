//Program to find indices i,j,k which satisfy the equation:- A[i]^2+A[j]^2=A[k]^2
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[50],i,j,k,pos1,pos2,pos3,n,sum=0,pos4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-2;i++)
	{
		for(j=i+!;j<n-1;j++)
		{	
			for(k=j+1;j<n;j++)
			{
				sum+=((a[i]*a[i])+(a[j]*a[j]));
				if(sum==(a[k]*a[k]))
				{
					pos1=i;
					pos2=j;
					pos3=k;
				}
			}
		}
	}
	printf("Indices are %d %d %d ".a[pos1],a[pos2],a[pos3]);
	getch();
	return 0;
}
