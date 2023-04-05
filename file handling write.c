/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch='b';
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputc(ch,fp);
    fclose(fp);
}
*/

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    int i;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string");
    gets(str);
    for(i=0;i!=strlen(str);i++)
    fputc(str[i],fp);
    fclose(fp);
}
*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    int i;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string");
    gets(str);
    fputs(str,fp);
    fclose(fp);
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char str[50];
    int a=10;
    char ch='s';
    //int i;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string");
    gets(str);
    fprintf(fp,"%s %c %d",str,ch,a);
    fclose(fp);
}
