
#include <stdio.h>
#include <conio.h>

int main()
{
system ("color c");	
   printf("\t \t \t \t \t Cost & Credit Calculator \n");
   int id;
   
   printf("\n\n\n\nTo Calculate Cost And Credit\n\n\t\t\t\tEnter Last Four Digit Of Your University ID : ");
   scanf("%d",&id);
   
   
   
   if(id==3139)
   {
       printf("Name : Akteruzzaman\n");
       printf("Id : 201-15-3139\n");
       printf("Email : akteruzzaman15-3139@diu.edu.bd\n \n");
       printf("Department of Computer science And Engineering\nfaculty of information and Communication technology \n");
       
   }
  else 
  printf("Not Matched");
{

char name1[]={"International University"};
char store[40]={"Daffodil"};
strcat(store,name1);
printf("%s\n",store);

}

int option;
printf("\nFor More information Input 1 ______");
scanf("%d",&option);
if(option==1)


printf("\n\n\n\t\t\t \t\tSemester Wise Costs And Due Information \n");
int se;
printf("\nEnter Your Running Semester : ");
scanf("%d",&se);
int i;
for(i=se;i<=se;i++)
if(i==2)
printf("\n\nYou Are In Second Semester And Your Current Semesters fee Is 50000BDT\n \n \n ");


}


