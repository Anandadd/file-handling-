#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char c;
    int n=1;
    fp=fopen("abc10.txt","r");
    if(fp==NULL)
    {
        printf("no file");
        exit(1);
    }
    while((c=fgetc(fp))!=EOF)
    {
        if(c=='\n')
        {
            n=n+1;
        }
    }
    fclose(fp);
    printf("no. of line are %d\n",n);
}


