/*This code calculate and plot the amount of rain in different 
months of 4 subsequent years from 2016 to 2019!*/


#include<iostream>
#include <conio.h>
#include<string.h>
using namespace std;
int main()
{
 char q[4][100][3],p[12][100][3];
	int year[4],month[12][4],i,j,max[4],jmax2=0,max2=0,t[4],t2[4],tt[3],temp,temp2,m[12],mm[12],m2[13],k;
t2[0]=2016;
t2[1]=2017;
t2[2]=2018;
t2[3]=2019;

	
	for (i=0;i<4;i++)
{
cout<<"\n";
cout <<"            Enter the rate of rain in year  (201"<<i+3<<")    : "<<"\n";
cout<<"--------------------------------------------------------------------------------";
max[i]=0;    
  year[i]=0; 
    for (j=0;j<12;j++)
	{
		cout<<"\n"<<" Rate of rain in month ("<<j+1<<") : ";
		cin>>month[j][i];
		year[i] += month[j][i];
		if (month[j][i]>= month[max[i]][i])
			max[i]=j;
}
cout <<"\n"<<".......................................";
	cout<<" Enter the rate of rain in year = ("<<year[i]<<")"<<"\n"<<"\n";
cout<<"....................................... Highest rate of rain =  month ("<<max[i]+1 <<")"<<"\n"<<"\n";
if (max2<year[i])
{   
max2=year[i];
jmax2=i;
}

}
cout<<"********************************************************************************";
cout <<"            The highest rate of rain happened in year (201"<<jmax2+3<<")   Rate:("<<max2<<")"<<"\n";

cout<<"********************************************************************************"<<"\n";

for(i=0;i<4;i++)
   for(j=0;j<3;j++)
       if (year[j]>year[j+1]){
		   temp=year[j];
		   year[j]=year[j+1];
		   year[j+1]=temp;
	   
	   temp=t2[j+1];
	   t2[j+1]=t2[j];
	   t2[j]=temp;
	   	   
	   }
            

	   

	   for(i=0;i<4;i++) 
	   cout<<t2[i]<<" = "<<year[i]<<"\n"<<"\n";

	   if (year[3]<=10 && year[3]>0 )
{
   for(i=0;i<4;i++)
      t[i]=year[i];
}

	   

if (year[3]>10  && year[3]<100)
{
   for(i=0;i<4;i++)
      t[i]=year[i]/5;
}

if (year[3]>100   && year[3]<1000)
{
   for(i=0;i<4;i++)
      t[i]=year[i]/50;
}


if (year[3]>1000 )
{
   for(i=0;i<4;i++)
      t[i]=year[i]/500;
}

for (i=0;i<3;i++)
tt[i]=t[3]-t[i];

for(i=0;i<3;i++)
    for(j=0;j<tt[i];j++)
        strcpy(q[i][j],"  ");


for(i=0;i<3;i++)
    for(j=tt[i];j<t[3];j++)
        strcpy(q[i][j],"[]");

	
	for(i=0;i<t[3];i++)
strcpy(q[3][i],"[]");







cout <<" "<<t2[3]<<"      "<<t2[2]<<"       "<<t2[1]<<"        "<<t2[0]<<"\n";
cout<<"  -----------------------------------"<<"\n";
for (i=0;i<t[3];i++)
cout<<"  "<<q[3][i]<<"        "<<q[2][i] <<"         "<< q[1][i]<<"          "<<q[0][i] <<"\n";

cout<<"  -----------------------------------"<<"\n"<<"\n"<<"\n";

cout<<"================================================================================";
cout<<"           Enter the year to plot the figure"<<"\n";

cout<<"================================================================================";
cout<<"\n";
cout<<"         2016     2017     2018      2019      "<<"\n";
cout<<"         ----     ----     ----      ----"<<"\n";
cout<<" ENTER    (0)      (1)      (2)       (3)"<<"\n";
cout<<" = ";
cin>>k;


for(i=0;i<12;i++)
m2[i]=i;


for(i=0;i<12;i++)
   for(j=0;j<11;j++)
       if (month[j][k]>month[j+1][k]){
		   temp=month[j][k];
		   month[j][k]=month[j+1][k];
		   month[j+1][k]=temp;
	   
	   temp2=m2[j+1];
	   m2[j+1]=m2[j];
	   m2[j]=temp2;
	   	   
	   }
   




if (month[11][k]<=10 && month[11][k]>0 )
{
	for(i=0;i<12;i++)
      m[i]=month[i][k];

}

	   

if (month[11][k]>10 && month[11][k]<=100)
{
	for(i=0;i<12;i++)
      m[i]=month[i][k]/5;
	}

if (month[11][k]>100 && month[11][k]<=1000)
{
	for(i=0;i<12;i++)
      m[i]=month[i][k]/50;
}


if (month[11][k]>1000 )
{
	for(i=0;i<12;i++)
      m[i]=month[i][k]/500;

}



for (i=0;i<11;i++)
mm[i]=m[11]-m[i];

for(i=0;i<11;i++)
for(j=0;j<mm[i];j++)
        strcpy(p[j][i],"  ");
        

for(i=0;i<11;i++)
for(j=mm[i];j<m[11];j++)
        strcpy(p[j][i],"[]");


	for(i=0;i<m[11];i++)
strcpy(p[i][11],"[]");



cout<< " ("<<m2[11]+1 << ")  ("<<m2[10]+1<<")  ("<<m2[9]+1<<")  ("<<m2[8]+1<<")  ("<<m2[7]+1<<")  ("<<m2[6]+1<<")  ("<<m2[5]+1<<")  ("<<m2[4]+1<<")  ("<<m2[3]+1<<")  ("<<m2[2]+1<<")  ("<<m2[1]+1<<")  ("<<m2[0]+1<<")" <<"\n";
cout<<" -------------------------------------------------------------"<<"\n";

for(i=0;i<m[11];i++)
	  cout<<"  "<<p[i][11]<<"   "<<p[i][10]<<"   "<<p[i][9]<<"    "<<p[i][8]<<"   "<<p[i][7]<<"   "<<p[i][6]<<"    "<<p[i][5]<<"   "<<p[i][4]<<"   "<<p[i][3]<<"   "<<p[i][2]<<"  "<<p[i][1]<<"   "<<p[i][0]<<"\n";

cout<<" -------------------------------------------------------------"<<"\n";







getch();
return 0;
}