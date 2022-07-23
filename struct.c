#include<stdio.h>
struct players
{
	int id,score;
	char name[50];
}p[10];
main()
{
	int i,n;
	printf("\n Enter no of records:");
	scanf("%d",&n);
	printf("\n Enter players details:");
	for(i=0;i<n;i++)
	{
		printf("\n Enter player id:");
		scanf("%d",&p[i].id);
		printf("\n Enter player name:");
		scanf("%s",&p[i].name);
		printf("\n Enter player's score':");
		scanf("%d",&p[i].score);
    }
    printf("\n Players Details:");
    for(i=0;i<n;i++)
    {
        printf("\n id=%d",p[i].id);
		printf("\n Name=%s",p[i].name);
		printf("\n score=%d",p[i].score);	
	}
}
