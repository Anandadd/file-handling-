#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr1=NULL,*fptr2=NULL;
    char c;
    fptr1=fopen("abc11.txt","r");
    if(fptr1==NULL)
    {
        printf("no file");
        exit(1);
    }
    fptr2=fopen("abc12.txt","w");
    if(fptr2==NULL)
    {
        printf("no file");
        exit(1);
    }
    while((c=fgetc(fptr1))!=EOF)
    {
        fputc(c,fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("successfully copied");
}

