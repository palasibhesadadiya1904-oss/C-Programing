#include<stdio.h>
union bookdetails
{
    int bID;
    char title[50];
    char author[50];
    float price;
    int issuedflag;
};
int main()
{
    union bookdetails book;
    int choice;
    printf("enter book ID:");
    scanf("%d",&book.bID);
    int accNo=book.bID;
    printf("\nbook title:");
    scanf(" %[^\n]",book.title);
    char title[50];
    snprintf(title,sizeof(title),"%s",book.title);
    printf("\nenter book author:");
    scanf(" %[^\n]",book.author);
    char author[50];
    snprintf(author,sizeof(author),"%s",book.author);
    printf("\nenter book price:");
    scanf("%f",&book.price);
    float money=book.price;
    printf("\n is book issued?(1=yes,0=no)");
    scanf("%d",&book.issuedflag);
    int starts=book.issuedflag;
    printf("\nbook ID=%d",accNo);
    printf("\ntitle=%s",title);
    printf("\nauthor=%s",author);
    printf("\nprice=%d",money);
    if(starts==1)
    {
        printf("\nissued");
    }
    else
    {
        printf("\nnot issued");
    }

    printf("\n bhesdadiya palasi_25CE008" );
   return 0;}

