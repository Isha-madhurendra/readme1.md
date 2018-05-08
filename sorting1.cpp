import java.io.*;
class sorting1.cpp
{
public static void main(String args[])
{
int a[]=new int [10];
int i,j,t;
a[]={1,3,2,4,5,8,7,9,0}
for(i=0;i<10;i++)
{
for(j=0;j<9-i;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
}
}
