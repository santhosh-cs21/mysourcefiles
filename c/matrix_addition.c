#include <stdio.h>
int main()
    {
    	int a[50][50],b[50][50],sum[50][50],i,j,r,c;
	printf("ENTER THE ROWS :\n ");
	scanf("%d",&r);
	printf("ENTER THE COLUMNS :\n ");
	scanf("%d",&c);
    	printf("\nENTER VALUES FOR MATRIX A %d * %d :\n",r,c);
    	for(i=0;i<r;i++) {
    		for(j=0;j<c;j++)
    			scanf("%d",&a[i][j]);
	}

    	printf("\nENTER VALUES FOR MATRIX B %d * %d :\n",r,c);
    	for(i=0;i<r;i++) {
    		for(j=0;j<c;j++)
    			scanf("%d",&b[i][j]);
	}

    	for(i=0;i<r;i++) {
    		for(j=0;j<c;j++)
    			sum[i][j]=a[i][j]+b[i][j];
	}

    	printf("\nTHE ADDITION OF MATRIX ARE %d * %d :\n",r,c);
    	for(i=0;i<r;i++) {
    		for(j=0;j<c;j++)
    			printf("%d   ",sum[i][j]);
    		printf("\n");
    	}
    	return 0;
    }










