#include<stdio.h>
#include<string.h>
char books[5][50]={
                   "C Programming",
                   "Data Structures",
                   "Operating Systems",
                   "Computer Networks",
                   "Data Manangement System"
};
void displayBooks()
{
    for(int i=0; i<5; i++)
    {
        printf("%d.%s\n", i+1, books[i]);
    }
}

int getTotalBooks()
{
    int count=0;
    for(int i=0; i<5; i++)
    {
        if(strlen(books[i])>0)
        {
            count++;
        }
    }
    return count;
}

void borrowBook(char *bookName)
{
    int found=0;
    for(int i=0;i<5;i++)
    {
        if(strcasecmp(books[i],bookName)==0)
        {
            printf("\nYou purchased %s", books[i]);
            found=1;
            strcpy(books[i],"");
            break;
        }
    }
    if(!found)
    {
        printf("\nBook not exist.");
    }
}

float calculatefine(int dayslate)
{
    int fine;
    fine=100*dayslate;
    return fine;
}

void returnbook(char *bookname)
{
    int emptyindex=-1;
    for(int i=0;i<5;i++)
    {
        if(strlen(books[i])==0)
        {
            emptyindex=i;
            break;
        }
    }
    if(emptyindex!=-1)
            {
                strcpy(books[emptyindex],bookname);
            }
            else
            {
                printf("sloat is full");
            }
}

int searchbook(char *bookname)
{
    for(int i=0;i<5;i++)
    {
        if(strcasecmp(books[i],bookname)==0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int choice, days, emptyindex=-1;
    char name[50];
    do{
        printf("\n1.List of all books.");
        printf("\n2.Count of books.");
        printf("\n3.Purchase any book.");
        printf("\n4.Calculate Fine.");
        printf("\n5.Return book");
        printf("\n6.Search book");
        printf("\n7.Exit\n");
        printf("enter your choice:");
        scanf("\n%d", &choice);
        getchar();
        if(choice==1)
        {
            displayBooks();
        }
        else if(choice==2)
        {
            printf("\nTotal books are %d\n",getTotalBooks());
        }
        else if(choice==3)
        {
            printf("Enter book name that you want to purchase ");
            fgets(name,sizeof(name),stdin); //input
            name[strcspn(name,"\n")]='\0'; //changes \n to \0 at end of your input
            borrowBook(name);
        }
        else if(choice==4)
        {
            printf("Enter number of days overdue.");
            scanf("%d", &days);
            printf("Total fine is %.2f",calculatefine(days));
        }
        else if(choice==5)
        {
            printf("\nenter book name:");
            fgets(name,sizeof(name),stdin);
            name[strcspn(name,"\n")]='\0';
            returnbook(name);

        }
        else if(choice==6)
        {
            printf("enter book name you want to search:");
            fgets(name,sizeof(name),stdin);
            name[strcspn(name,"\n")]='\0';
            if(searchbook(name)==1)
            {
                printf("book is found");
            }
            else
            {
                printf("book is not found");
            }
        }
        else if(choice==7)
        {
            printf("Bye Bye");
        }
        else
        {
            printf("\nInvalid input.");
        }
        }while(choice!=7);
        printf("bhesdadiya palasi_25CE008");
}
