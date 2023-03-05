#include <stdio.h>

struct cumred
{
	char name;
	float profit;
	float dead;
};

void swap(struct cumred* xp, struct cumred* yp)
{
	struct cumred temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void main()
{
	int num,max;
	printf("Enter the number of B Jobs   -  ");
	scanf("%d",&num);
	struct cumred HJ[num];
	printf("\n");
	
	for(int i=0;i<n;i++)
	{
		printf("Enter name of job %d  -  ",i+1);
		scanf("%c",&HJ[i].name);
		printf("Enter profit of %c  -  " , HJ[i].name);
		scanf("%f",&HJ[i].profit);
		printf("Enter deadline of %c  -  " , HJ[i].name);
		scanf("%f",&HJ[i].dead);
		printf("\n");
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(HJ[j].profit > HJ[j+1].profit)
			{
				swap(&HJ[j],&HJ[j+1]);
			}
		}
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
