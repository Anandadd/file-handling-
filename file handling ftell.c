#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char str[50];
    fp=fopen("abc8.txt","r");
    if(fp==NULL)
    {
        printf("no file");
        exit(1);
    }
    printf("%d\n",ftell(fp));
    fscanf(fp,"%s",str);
    printf("%s",str);
    fseek(fp,0,SEEK_END);
    printf("\n%d",ftell(fp));
    fclose(fp);
}

