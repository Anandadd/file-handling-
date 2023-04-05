#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc7.txt","r");
    if(fp==NULL)
    {
        printf("no file");
        exit(1);
    }
    fseek (fp,6,SEEK_SET);
    ch=fgetc(fp);
    printf("%c",ch);
    fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);
    printf("\n%c",ch);
    fseek(fp,-3,SEEK_END);
    ch=fgetc(fp);
    printf("\n%c",ch);
    fclose(fp);
}

