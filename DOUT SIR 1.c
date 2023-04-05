#include<stdio.h>
main()
{
    int x,y,z=1,sp=9,a;
    for(x=1;x<=4;x++)
    {
        for(a=1;a<=sp;a++)
            printf(" ");
        for(y=1;y<=x;y++)
        {
            printf("%d",z);
            fflush(stdout);
           // for(a=1;a<=5;a++)
             //   printf(" ");
             printf("\t");
            z++;
        }
        printf("\n");
        sp=sp-3;
    }
}
