#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    char ch;
    fp=fopen("abc5.txt","w+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs("jenny",fp);
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}
