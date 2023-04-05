/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc6.txt","a+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fputs("this is awesome",fp);
    fclose(fp);
}
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc6.txt","a+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs("this is awesome",fp);
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}
