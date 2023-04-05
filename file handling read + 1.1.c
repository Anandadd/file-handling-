#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc4.txt","r+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(fp))
    {
        fgets(str,5,fp);
        printf("%s",str);
    }
    fputs("jenny",fp);
    fclose(fp);
}


