#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//gotoxy(short int col,short int row);
//void modify(int);
struct stud
{int marks[100],roll;
float percent;
 char name1[100],name2[50],name3[50];
 };
 typedef struct stud stud;
 int main()

{
    char ch;
    int k;
while(1)
{printf("\n");
    printf("\n  1. enter 1 to copy the data of student from one file to another\n  2. enter 2 to delete the data of particular student\n  3. enter 3 to view the report card of student\n  4. enter 4 to insert new data\n  5. enter 5 to view copied data\n  6.enter 6 to exit\n");
scanf("%d",&k);
switch(k)
{
    case 1:
{FILE *q;
  FILE *p,*q1;
    stud s1;
    int u,u1=0;
  p=fopen("emp99.txt","r");
  q=fopen("abc99.txt","a+");
  //q1=fopen("abc99.txt","r");
  printf("enter roll no to be copied : ");//ch=fgetc(p);
//fseek(p,0,SEEK_SET);
  scanf("%d",&u);
 fseek(p,0,SEEK_SET);
   fread(&s1,sizeof(stud),1,p);
  while(feof(p)==0)
  {

  if(s1.roll==u)
  {
  fwrite(&s1,sizeof(stud),1,q);
u1=1;
break;
  }
  fread(&s1,sizeof(stud),1,p);
  }
  if(u1==0)
  {
      printf("oops! record not found\n");
  }
  else
    {printf("record has been copied\n");
    }
  fclose(p);
  fclose(q);

printf("\n");
 /** while(feof(q1)==0)
  {fread(&s1,sizeof(stud),1,q1);
  //fwrite(&s1,sizeof(stud),1,q);
printf("%s\n",s1.name1);
 //printf("enter roll number of student\n");
 printf("%d\n", s1.roll);
 //printf("enter mother's name" );
  printf("%s\n",s1.name2);
 //printf("enter father's name");
 printf("%s\n",s1.name3);
for(int h=0;h<5;h++)
{
    printf("%d\n",s1.marks[h]);
}
printf("%f\n",s1.percent);

}
    fclose(q1); **/
break;
}
case 2:
{int x,y,u1,u2=0,u4=0;
stud s3;
  FILE *q3,*t2,*q2;

  q2=fopen("emp99.txt","r");
  t2=fopen("xyz.txt","a+");
  printf("enter roll no. : ");
  //printf("enter 1 to delete by entering name OR enter 2 to delete by entering roll no.\n");
    scanf("%d",&x);
  fread(&s3,sizeof(stud),1,q2);
  while(feof(q2)==0)
 {if(s3.roll!=x)
  {fwrite(&s3,sizeof(stud),1,t2);
  //u2=1;
  u2++;
  }
 fread(&s3,sizeof(stud),1,q2);
 u4++;
 }
  fclose(q2);
  fclose(t2);
u1=remove("emp99.txt");
rename("xyz.txt","emp99.txt");

  if(u2!=u4)
{
printf("record deleted\n");

}
else if(u2==u4)
    {printf("oops! record not found\n");
    }

printf("\n");
/** q3=fopen("emp99.txt","r");
fread(&s1,sizeof(stud),1,q3);
while(feof(q3)==0)
  {
  //fwrite(&s1,sizeof(stud),1,q);
printf("%s\n",s1.name1);
 //printf("enter roll number of student\n");
 printf("%d\n", s1.roll);
 //printf("enter mother's name" );
  printf("%s\n",s1.name2);
 //printf("enter father's name");
 printf("%s\n",s1.name3);
for(int h=0;h<5;h++)
{
    printf("%d\n",s1.marks[h]);
}
printf("%f\n",s1.percent);
fread(&s1,sizeof(stud),1,q3);
}
    fclose(q3);
**/
break;
}
case 3:
{stud s6;
int d,u3=0;

FILE *o;
o=fopen("emp99.txt","r");
fread(&s6,sizeof(stud),1,o);
printf("enter roll no. you want to see : ");
scanf("%d",&d);
while(feof(o)==0)
{
    if(s6.roll==d)
    {printf("ROLL NO. : %d\n", s6.roll);
        printf("NAME OF STUDENT : %s\n",s6.name1);
     printf("NAME OF MOTHER : %s\n",s6.name2);

    printf("NAME OF FATHER : %s\n",s6.name3);

 for(int h=0;h<5;h++)
{if(h==0)
{
    printf("MATHS : ");
}
    if(h==1)
{
    printf("ENGLISH : ");
}

if(h==2)
{
    printf("SCIENCE : ");
}
if(h==3)
{
    printf("HINDI : ");
}
if(h==4)
{
    printf("S.S.T : ");
}


    printf("%d\n",s6.marks[h]);
}
printf("PERCENTAGE OF STUDENT : %f\n",s6.percent);
u3=1;
    }
    fread(&s6,sizeof(stud),1,o);

}
if(u3==0)
{printf("oops! record not found\n");
}
fclose(o);
printf("\n");
break;

}


case 4:  FILE *p1;
 stud s2;
int t,i,j,l,z,m;
char s[100];
p1=fopen("emp99.txt","a+");
printf("welcome\n");
printf("enter number of students you want to add\n");
scanf("%d",&j);
z=l=j;
//stud s2;
//s1=(stud*)calloc(j,sizeof(stud));
//s1.percent=0;
//s2=(stud*)malloc(sizeof(stud));
//s2=s1;

if(p1==NULL)
{
printf("not found\n");
}
i=1;
while(i<=j)
{ printf("\n\n");
    printf("enter name of student : ");
scanf("%s",s2.name1);
 printf("enter roll number of student : ");
 scanf("%d",&s2.roll);
 printf("enter mother's name : " );
  scanf("%s",s2.name2);
 printf("enter father's name : ");
 scanf("%s",s2.name3);
 printf("marks\n");
//printf("maths\t english\t science\t hindi\t social science\t\n");
s2.percent=0;
for(m=0;m<5;m++)
{
if(m==0)
{printf("maths :  ");}
if(m==1)
{printf("english :  ");}
if(m==2)
{printf("science :  ");}
if(m==3)
{printf("hindi :  ");}
if(m==4)
{printf("s.s.t :  ");}
scanf("%d",&s2.marks[m]);
s2.percent=s2.percent+(s2.marks[m])/5;
}
printf("percentage:  %f",s2.percent);
fwrite(&s2,sizeof(stud),1,p1);
i++;
//s2.percent=0;
}
fclose(p1);
printf("\n");

break;

/** if(k==2)
 {delet();
 }
 if(k==3)
 {report(s);
  }
  if(k==4)
  {insert(l);
  }
  if(k==5)
  {modify(z);
  }
**/
//case 5:modify();
    /*FILE *op1,*op2;
stud s5;
int x2,m1,ss;
ss=sizeof(stud);
op1=fopen("emp99.txt","r");
op2=fopen("emp99.txt","w");
fread(&s5,sizeof(stud),1,op1);
printf("enter roll no.\n");
scanf("%d",&x2);
while(feof(op1)==0)
{
    if(s5.roll==x2)
    {

        printf("enter name of student\n");
        scanf("%s",s1.name1);
        printf("enter mother's name of student\n");
        scanf("%s",s1.name2);
        printf("enter father's name of student\n");
        scanf("%s",s1.name3);
        printf("marks\n");
//printf("maths\t english\t science\t hindi\t social science\t\n");
s5.percent=0;
for(m1=0;m1<5;m1++)
{
if(m1==0)
{printf("maths :  ");}
if(m1==1)
{printf("english :  ");}
if(m1==2)
{printf("science :  ");}
if(m1==3)
{printf("hindi :  ");}
if(m1==4)
{printf("s.s.t :  ");}
scanf("%d",&s5.marks[m]);
s5.percent=s5.percent+(s5.marks[m])/5;
}
printf("percentage:  %f",s5.percent);
fseek(op2,-ss,SEEK_CUR);
fwrite(&s5,sizeof(stud),1,op2);
    }

    fread(&s5,sizeof(stud),1,op1);
    }
    fclose(op1);
    fclose(op2);
    q3=fopen("emp99.txt","r");
fread(&s5,sizeof(stud),1,q3);
while(feof(q3)==0)
  {
  //fwrite(&s1,sizeof(stud),1,q);
printf("%s\n",s5.name1);
 //printf("enter roll number of student\n");
 printf("%d\n", s5.roll);
 //printf("enter mother's name" );
  printf("%s\n",s5.name2);
 //printf("enter father's name");
 printf("%s\n",s5.name3);
for(int h=0;h<5;h++)
{
    printf("%d\n",s5.marks[h]);
}
printf("%f\n",s5.percent);
fread(&s1,sizeof(stud),1,q3);
}
    fclose(q3);

    break;
*/

case 5:
    stud s61;
int d1;

FILE *o1;
o1=fopen("abc99.txt","r");
fread(&s61,sizeof(stud),1,o1);
//printf("enter roll no. you want to see");
//scanf("%d",&d1);
while(feof(o1)==0)
{
    //if(s61.roll==d1)
    {printf("ROLL NO. : %d\n", s61.roll);
        printf("NAME OF STUDENT : %s\n",s61.name1);
     printf("NAME OF MOTHER : %s\n",s61.name2);

    printf("NAME OF FATHER : %s\n",s61.name3);

 for(int h=0;h<5;h++)
{if(h==0)
{
    printf("MATHS : ");
}
    if(h==1)
{
    printf("ENGLISH : ");
}

if(h==2)
{
    printf("SCIENCE : ");
}
if(h==3)
{
    printf("HINDI : ");
}
if(h==4)
{
    printf("S.S.T : ");
}


    printf("%d\n",s61.marks[h]);
}
printf("PERCENTAGE OF STUDENT : %f\n",s61.percent);
printf("\n\n");

    }
    fread(&s61,sizeof(stud),1,o1);

}

fclose(o1);
printf("\n");
break;





case 6: exit(0);
break;
printf("\n");
}


}


/*int size1=sizeof(s1);
//stud s2;
FILE *q=fopen("emp99.txt","r");
//rewind(q);
t=1;
//fseek(p,0,SEEK_SET);
//fseek(q,0,SEEK_SET);
//stud *t1;
//t1=s2;
while(feof(p)==0)
{
fread(&s1,size1,1,q);
//char s2=fgetc(q);
//gotoxy(30,10);
printf("%s\n",s1.name1);
 //printf("enter roll number of student\n");
 printf("%d\n", s1.roll);
 //printf("enter mother's name" );
  printf("%s\n",s1.name2);
 //printf("enter father's name");
 printf("%s\n",s1.name3);
for(int h=0;h<5;h++)
{
    printf("%d\n",s1.marks[h]);
}
printf("%f\n",s1.percent);

}
fclose(q); */
  //fflush(stdin);
  return 0;

}







