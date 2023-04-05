/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("abc3.txt","r+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs("jenny",fp);
    fclose(fp);
}
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("abc3.txt","r+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs("jenny",fp);
    fputc('z',fp);
    fclose(fp);
}


