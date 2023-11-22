#include<stdio.h>
#include<conio.h>
void data (int *);
char group(int);
int main()
{
    int n;
    printf("Enter Number of Entries : ");
    scanf("%d",&n);
    data(&n);
    _getch();
}
void data(int *n)
{
    struct data
    {
        int stud_id[10];
        char name[21];
        struct marks
            {
                int sub1;
                int sub2;
                int sub3;
                int sub4;
                int sub5;
            }mm;
    }stud,*ptr;
    ptr=&stud;
    int i;
    for(i=0;i<*n;i++)
    {
        printf("Enter Student ID : ");
        fflush(stdin);
        scanf("%d",&ptr->stud_id[i]);
        printf("Enter student Name : ");
        fflush(stdin);
        scanf("%20s",ptr->name,21);
        printf("Enter 1st marks : ");
        fflush(stdin);
        scanf("%d",&ptr->mm.sub1);
        printf("Enter 2nd marks : ");
        fflush(stdin);
        scanf("%d",&ptr->mm.sub2);
        printf("Enter 3rd marks : ");
        fflush(stdin);
        scanf("%d",&ptr->mm.sub3);
        printf("Enter 4th marks : ");
        fflush(stdin);
        scanf("%d",&ptr->mm.sub4);
        printf("Enter 5th marks : ");
        fflush(stdin);
        scanf("%d",&ptr->mm.sub5);

        char grade;
        float sum=0,percentage=0;
        printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-STUDENT PERFORMANCE-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
        printf("                                   NAME : %s               ",ptr->name);
        printf("\n                                 Student ID: %d              \n",ptr->stud_id[i]);
        printf("\n             SUBJECT              MARKS           GRADE\n");
        grade=group(ptr->mm.sub1);
        printf("\n             Subject 1            %d              %c",ptr->mm.sub1,grade);
        grade=group(ptr->mm.sub2);
        printf("\n             Subject 2            %d              %c",ptr->mm.sub2,grade);
        grade=group(ptr->mm.sub3);
        printf("\n             Subject 3            %d              %c",ptr->mm.sub3,grade);
        grade=group(ptr->mm.sub4);
        printf("\n             Subject 4            %d              %c",ptr->mm.sub4,grade);
        grade=group(ptr->mm.sub5);
        printf("\n             Subject 5            %d              %c\n\n",ptr->mm.sub5,grade);
        sum=(ptr->mm.sub1)+(ptr->mm.sub2)+(ptr->mm.sub3)+(ptr->mm.sub4)+(ptr->mm.sub5);
        percentage=sum/5;
        printf("  Total marks : %.0f                   Percentage : %.2f \n\n",sum,percentage);
        printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
    }
}
char group(int s)
{
    char g;
    if(s>=85)
    {
        g='O';
    }
    else if(s>=75)
    {
        g='A';
    }
    else if(s>=65)
    {
        g='B';
    }
    else if(s>=55)
    {
        g='C';
    }
    else if(s>=45)
    {
        g='D';
    }
    else
    {
        g='F';
    }
    return g;
}

