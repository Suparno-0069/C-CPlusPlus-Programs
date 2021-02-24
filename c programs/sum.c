#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	//int c[100],d[100],sum[101],i;
	int l1,l2,i,j,k,m,cr=0,s;
	int *c,*d,*sum;
	printf("Enter value for a(max 100 digits)\n:");
	scanf("%s", a);
	printf("Enter value for b(max 100 digits)\n:");
	scanf("%s", b);
	l1=strlen(a);
	l2=strlen(b);
	c=(int*)calloc(l1,sizeof(int));
	d=(int*)calloc(l2,sizeof(int));
	m=(l1>l2)?l1+1:l2+1;
	sum=(int*)calloc(m,sizeof(int));
	printf("%d %d %d\n",l1,l2,m);	
	for(i=0; i<l1; i++)
		c[i] = a[i]-48;
	for(i=0; i<l2; i++) 
		d[i] = b[i]-48;
	/*printf("%s %s", a,b);	
	for(i=0; i<l1; i++)
		printf("%d", c[i]);
	printf("\n");
	for(i=0; i<l2; i++) 
		printf("%d", d[i]);
	printf("\n");
	for(i=0; i<m; i++) 
		printf("%d", sum[i]);
	printf("\n");*/
	for(i=m-1,j=l1-1,k=l2-1; i>0; i--)
	{
		if(j!=-1&&k!=-1)
		{
			s=c[j]+d[k]+cr;
			j--,k--;
		}
		else if(k==-1)
		{
			s=c[j]+cr;
			j--;
		}
		else if(j==-1)
		{
			s=d[k]+cr;
			k--;
		}
		cr=s/10;
		s=s%10;
		sum[i]+=s;
		//printf("%d", s);
	}
	if(i==0)
	   sum[i]=cr;
	printf("\nThe result is: \n");
	for(i=(sum[0])?0:1; i<m; i++)
		printf("%d", sum[i]);
	
}

