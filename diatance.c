#include<stdio.h>
#include<math.h>
void main()
{
	int x1,y1,x2,y2,distance;
	printf("enter x1,y1,x2,y2");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("distance %d",distance);
}
