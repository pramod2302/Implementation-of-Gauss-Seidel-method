#include<stdio.h>
#include<math.h>
#define X 5
int main()
{
    float x[X][X+1],a[X], ae, max,t,s,e;
    int i,j,r,mxit;
    for(i=0;i<X;i++) a[i]=0;
    float ip[5] = {0.2,0.3,0.7,1.8,1.9};
    puts(" Enter the elements of augmented matrix rowwise\n");
    for(i=0;i<X;i++)
    {
    for(j=0;j<X;j++)
    {
    	x[i][j]= pow(ip[i],4-j);
	printf (" %f ", x[i][j]);
    }
	printf("\n");
    }
	printf("\n");
printf("\n");
printf("\n");
    x[0][5]=246.7;
    x[1][5]=88.159;
    x[2][5]=60.60;
    x[3][5]=38.05;
    x[4][5]=-69.34;
    
    printf(" Enter the allowed error and maximum number of iteration: ");
    scanf("%f%d",&ae,&mxit);
    printf("Iteration\tx[1]\tx[2]\n");
    for(r=1;r<=mxit;r++)
    {
        max=0;
        for(i=0;i<X;i++)
        {
            s=0;
            for(j=0;j<X;j++)
            if(j!=i) s+=x[i][j]*a[j];
            t=(x[i][X]-s)/x[i][i];
            e=fabs(a[i]-t);
            a[i]=t;
        }
        printf(" %5d\t",r);
        for(i=0;i<X;i++)
        printf(" %9.4f\t",a[i]);
        printf("\n");
        if(e<ae)
        {
           printf(" Converges in %3d iteration\n", r);
           for(i=0;i<X;i++)
           printf("a[%3d]=%7.4f\n", i+1,a[i]);
           return 0;
        }

        }
	return 0;
    }

