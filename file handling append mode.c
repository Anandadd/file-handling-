#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc2.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);

    }
    printf("enter the content u want to append");
    gets(str);
    fputs(str,fp);
    printf(fp,"\n %s",str);
    printf("\n successfully appended");
    fclose(fp);
}
