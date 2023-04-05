#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc9.txt","r");
    if(fp==NULL)
    {
        printf("no file");
        exit(1);
    }
    fseek (fp,6,SEEK_SET);
    while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
    rewind(fp);
    while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
    fclose(fp);
}


