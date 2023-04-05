/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc1.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
      ch=fgetc(fp);
      printf("%c",ch);
      fclose(fp);
}
*/

/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc1.txt","r");
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
      fclose(fp);
}
*/


/*#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char str[10];
    fp=fopen("abc1.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
      fgets(str,5,fp);
      printf("%s",str);
      fclose(fp);
}
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char str[50];
    fp=fopen("abc1.txt","r");
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
      fclose(fp);
}
