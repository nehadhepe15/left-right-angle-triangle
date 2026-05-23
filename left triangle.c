/*Name - Neha N. Dhepe
  PRN No - 2503033111378UD007
  Branch - VlSI
  Batch - B
  Date - 07/05/2026
*/
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)//prints * in j = no of i in corresponding row
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
