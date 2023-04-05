#include<stdio.h>
void add(int a,int b)
{
    printf("addition is %d\n",a+b);
}
void sub(int a,int b)
{
    printf("substraction is %d\n",a-b);
}
void mult(int a,int b)
{
    printf("multiplication is %d\n",a*b);
}
void div(int a,int b)
{
    printf("division is %d\n",a/b);
}
int main()
{
    int ch,a,b;
    printf("0 for add\n 1 for sub\n 2 for multiply\n 3 for division\n");
    printf("enter your choice");
    scanf("%d",&ch);
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 0: add(a,b);break;
        case 1: sub(a,b);break;
        case 2: mult(a,b);break;
        case 3: div(a,b);break;
        default: printf("enter invalid choice");
    }
}


/*#include<stdio.h>
void add(int a,int b)
{
    printf("addition is %d\n",a+b);
}
void sub(int a,int b)
{
    printf("substraction is %d\n",a-b);
}

void mult(int a,int b)
{
    printf("multiplication is %d\n",a*b);
}
void div(int a,int b)
{
    printf("division is %d\n",a/b);
}
 int main()
{
    int ch,a,b;
    void int(*fptr[10])(int,int)=(add,sub,mult,div);
    printf("0 for add\n 1 for sub\n 2 for multiply\n 3 for division\n");
    printf("enter your choice");
    scanf("%d",&ch);
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    (*fptr[ch])(a,b);
}
*/

