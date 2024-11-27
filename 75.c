#include<stdio.h>
int main()
{
int r[10],s1[10],s2[10],s3[10],t[10],max1,max2,max3,r1,r2,r3,r4,maximum;
printf("enter the roll nos \t");
for(int i=0;i<10;i++)
{
scanf("%d",&r[i]);
}
printf("\nenter the marks secured in subject 1\t");
for(int i=0;i<10;i++)
{
scanf("%d",&s1[i]);
}
printf("\nenter the marks secured in subject 2\t");
for(int i=0;i<10;i++)
{
scanf("%d",&s2[i]);
}
printf("\nenter the marks secured in subject 3\t");
for(int i=0;i<10;i++)
{
scanf("%d",&s3[i]);
}
printf("\nthe total marks obtained by each student are as \t");
for(int i=0;i<10;i++)
{
t[i]=s1[i]+s2[i]+s3[i];
}
for(int i=0;i<10;i++)
{
printf("%d\t",t[i]);
}
max1=s1[0];
max2=s2[0];
max3=s3[0];
for(int i=0;i<10;i++)
{
if(s1[i]>max1)
{
max1=s1[i];
r1=r[i];
}
if(s2[i]>max2)
{
max2=s2[i];
r2=r[i];
}
if(s3[i]>max3)
{
max3=s3[i];
r3=r[i];
}
}
printf("\nthe highest marks obtained in subject 1 is by roll no %d and the score is %d",r1,max1);
printf("\nthe highest marks obtained in subject 2 is by roll no %d and the score is %d",r2,max2);
printf("\nthe highest marks obtained in subject 3 is by roll no %d and the score is %d",r3,max3);
maximum=t[0];
for(int i=0;i<10;i++)
{
if(t[i]>maximum)
{
maximum=t[i];
r4=r[i];
}
}
printf("\n the student who has obtained the highest total marks is roll no %d and marks are %d",r4,maximum);
}