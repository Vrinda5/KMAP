#include<stdio.h>
#include<string.h>
void main()
{
int i,j,temp,a[4][4],flag=0,f[80],m,n, c;
char z [81]="";
char s[16][4];
printf("Enter the variables\n");
for(j=0;j<4;j++)
{
for(i=0;i<4;i++)
{
scanf("%d",&a[i][j]);
}
}
for(j=0;j<4;j++)
{
temp=a[2][j];
a[2][j]=a[3][j];
a[3][j]=temp;
}
for(i=0;i<4;i++)
{
temp=a[i][2];
a[i][2]=a[i][3];
a[i][3]=temp;
}
printf("The kmap is:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<80;i++)
        f[i]=0;
printf("Answer is:");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(a[i][j]==1)
flag++;
}
}
if(flag==16)
printf("1\n");
else
{
if(a[0][0]==1 && a[0][1]==1 && a[0][2]==1 && a[0][3]==1 && a[1][3]==1 && a[1][0]==1 && a[1][1]==1 && a[1][2]==1)
{
strcat(z,"c+");
f[0]=1;
}
if(a[1][0]==1 && a[1][1]==1 && a[1][2]==1 && a[1][3]==1 && a[2][0]==1 && a[2][1]==1 && a[2][2]==1 && a[2][3]==1)
{
strcat(z,"D+");
f[1]=1;
}
if(a[2][0]==1 && a[2][1]==1 && a[2][2]==1 && a[2][3]==1 && a[3][0]==1 && a[3][1]==1 && a[3][2]==1 && a[3][3]==1)
{
strcat(z,"C+");
f[2]=1;
}
if(a[0][0]==1 && a[0][1]==1 && a[0][2]==1 && a[0][3]==1 && a[3][0]==1 && a[3][1]==1 && a[3][2]==1 && a[3][3]==1)
{
strcat(z,"d+");
f[3]=1;
}
if(a[0][0]==1 && a[0][1]==1 && a[1][0]==1 && a[1][1]==1 && a[2][0]==1 && a[2][1]==1 && a[3][0]==1 && a[3][1]==1)
{
strcat(z,"a+");
f[4]=1;
}
if(a[0][1]==1 && a[0][2]==1 && a[1][1]==1 && a[1][2]==1 && a[2][1]==1 && a[2][2]==1 && a[3][1]==1 && a[3][2]==1)
{ 
strcat(z,"B+");
f[5]=1;
}
if(a[0][2]==1 && a[0][3]==1 && a[1][2]==1 && a[1][3]==1 && a[2][2]==1 && a[2][3]==1 && a[3][2]==1 && a[3][3]==1)
{
strcat(z,"A+");
f[6]=1;
}
if(a[0][0]==1 && a[0][3]==1 && a[1][0]==1 && a[1][3]==1 && a[2][0]==1 && a[2][3]==1 && a[3][0]==1 && a[3][3]==1)
{
strcat(z,"b+");
f[7]=1;
}
if(a[0][0]==1 && a[0][3]==1 && a[3][0]==1 && a[3][3]==1 && f[7]!=1 && f[3]!=1)
{
strcat(z,"bd+");
f[8]=1;
}
if(a[0][0]==1 && a[0][1]==1 && a[3][0]==1 && a[3][1]==1 && f[0]!=1 && f[2]!=1 && f[3]!=1)
{
strcat(z,"ad+");
f[9]=1;
}
if(a[0][1]==1 && a[0][2]==1 && a[3][1]==1 && a[3][2]==1 && f[0]!=1 && f[2]!=1)
{
strcat(z,"Bd+");
f[10]=1;
}
if(a[0][2]==1 && a[0][3]==1 && a[3][2]==1 && a[3][3]==1 && f[0]!=1 && f[2]!=1 && f[6]!=1)
{
strcat(z,"Ad+");
f[11]=1;
}
if(a[0][0]==1 && a[0][1]==1 && a[1][0]==1 && a[1][1]==1 && f[0]!=1 && f[4]!=1)
{
strcat(z,"ac+");
f[12]=1;
}
if(a[1][0]==1 && a[1][1]==1 && a[2][0]==1 && a[2][2]==1 && f[1]!=1 && f[4]!=1)
{
strcat(z,"aD+");
f[13]=1;
}
if(a[2][0]==1 && a[2][1]==1 && a[3][0]==1 && a[3][1]==1 && f[2]!=1 && f[4]!=1)
{
strcat(z,"aC+");
f[14]=1;
}
if(a[0][1]==1 && a[0][2]==1 && a[1][1]==1 && a[1][2]==1 && f[5]!=1 && f[0]!=1)
{
strcat(z,"Bc+");
f[15]=1;
}
if(a[1][1]==1 && a[1][2]==1 && a[2][1]==1 && a[2][2]==1 && f[1]!=1 && f[5]!=1)
{
strcat(z,"BD+");
f[16]=1;
}
if(a[2][1]==1 && a[2][2]==1 && a[3][1]==1 && a[3][2]==1 && f[5]!=1 && f[2]!=1)
{
strcat(z,"BC+");
f[17]=1;
}
if(a[0][2]==1 && a[0][3]==1 && a[1][2]==1 && a[1][3]==1 && f[6]!=1 && f[0]!=1)
{
strcat(z,"Ac+");
f[18]=1;
}
if(a[1][2]==1 && a[1][3]==1 && a[2][2]==1 && a[2][3]==1 && f[6]!=1 && f[1]!=1)
{
strcat(z,"AD+");
f[19]=1;
}
if(a[2][2]==1 && a[2][3]==1 && a[3][2]==1 && a[3][3]==1 && f[6]!=1 && f[2]!=1)
{
strcat(z,"AC+");
f[20]=1;
}
if(a[1][0]==1 && a[2][0]==1 && a[1][3]==1 && a[2][3]==1 && f[1]!=1 && f[7]!=1 && f[4]!=1 && f[6]!=1)
{
strcat(z,"bD+");
f[21]=1;
}
if(a[2][0]==1 && a[2][3]==1 && a[3][0]==1 && a[3][3]==1 && f[7]!=1 && f[2]!=1 && f[4]!=1 && f[6]!=1)
{
strcat(z,"bC+");
f[22]=1;
}
if(a[0][1]==1 && a[0][3]==1 && a[1][0]==1 && a[1][3]==1 && f[7]!=1 && f[4]!=1 && f[6]!=1 && f[0]!=1)
{
strcat(z,"bc+");
f[23]=1;
}
if(a[0][0]==1 && a[0][1]==1 && a[0][2]==1 && a[0][3]==1 && f[0]!=1 && f[3]!=1)
{
strcat(z,"cd+");
f[24]=1;
}
if(a[1][0]==1 && a[1][1]==1 && a[1][2]==1 && a[1][3]==1 && f[0]!=1 && f[1]!=1)
{
strcat(z,"cD+");
f[25]=1;
}
if(a[2][0]==1 && a[2][1]==1 && a[2][2]==1 && a[2][3]==1 && f[1]!=1 && f[2]!=1)
{
strcat(z,"CD+");
f[26]=1;
}
if(a[3][0]==1 && a[3][1]==1 && a[3][2]==1 &&a[3][3]==1 && f[2]!=1 && f[3]!=1)
{
strcat(z,"Cd+");
f[27]=1;
} 
if(a[0][0]==1 && a[1][0]==1 && a[2][0]==1 && a[3][0]==1 && f[4]!=1 && f[7]!=1)
{
strcat(z,"ab+");
f[28]=1;
}
if(a[0][1]==1 && a[1][1]==1 && a[2][1]==1 && a[3][1]==1 && f[4]!=1 && f[5]!=1)
{
strcat(z,"aB+");
f[29]=1;
}
if(a[0][2]==1 && a[1][2]==1 && a[2][2]==1 && a[3][2]==1 && f[5]!=1 && f[6]!=1)
{
strcat(z,"AB+");
f[30]=1;
}
if(a[0][3]==1 && a[1][3]==1 && a[2][3]==1 && a[3][3]==1 && f[6]!=1 && f[7]!=1)
{
strcat(z,"Ab+");
f[31]=1;
}
if(a[0][0]==1 && a[0][1]==1 && f[0]!=1 && f[3]!=1 && f[4]!=1 && f[9]!=1 && f[12]!=1 && f[24]!=1)
{
strcat(z,"acd+");
f[32]=1;
}
if(a[0][1]==1 && a[0][2]==1 && f[0]!=1 && f[3]!=1 && f[5]!=1 && f[10]!=1 && f[15]!=1 && f[24]!=1)
{
strcat(z,"Bcd+");
f[33]=1;
}
if(a[0][2]==1 && a[0][3]==1 && f[0]!=1 && f[3]!=1 && f[6]!=1 && f[11]!=1 && f[18]!=1 && f[24]!=1)
{
strcat(z,"Acd+");
f[34]=1;
}
if(a[1][0]==1 && a[1][1]==1 && f[0]!=1 && f[1]!=1 && f[4]!=1 && f[12]!=1 && f[13]!=1 && f[25]!=1)
{
strcat(z,"acD+");
f[35]=1;
}
if(a[1][1]==1 && a[1][2]==1 && f[0]!=1 && f[1]!=1 && f[5]!=1 && f[15]!=1 && f[25]!=1 && f[16]!=1)
{
strcat(z,"BcD+");
f[36]=1;
}
if(a[1][2]==1 && a[1][3]==1 && f[0]!=1 && f[1]!=1 && f[6]!=1 && f[18]!=1 && f[19]!=1 && f[25]!=1)
{
strcat(z,"AcD+");
f[37]=1;
}
if(a[2][0]==1 && a[2][1]==1 && f[1]!=1 && f[2]!=1 && f[4]!=1 && f[13]!=1 && f[14]!=1 && f[26]!=1)
{
strcat(z,"aCD+");
f[38]=1;
}
if(a[2][1]==1 && a[2][2]==1 && f[1]!=1 && f[2]!=1 && f[5]!=1 && f[16]!=1 && f[17]!=1 && f[26]!=1)
{
strcat(z,"BCD+");
f[39]=1;
}
if(a[2][2]==1 && a[2][3]==1 && f[1]!=1 && f[6]!=1 && f[2]!=1 && f[19]!=1 && f[20]!=1 && f[26]!=1)
{
strcat(z,"ACD+");
f[40]=1;
}
if(a[3][0]==1 && a[3][1]==1 && f[2]!=1 && f[3]!=1 && f[4]!=1 && f[9]!=1 && f[14]!=1 && f[27]!=1)
{
strcat(z,"aCd+");
f[41]=1;
}
if(a[3][1]==1 && a[3][2]==1 && f[2]!=1 && f[3]!=1 && f[5]!=1 && f[10]!=1 && f[17]!=1 && f[27]!=1)
{
strcat(z,"BCd+");
f[42]=1;
}
if(a[3][2]==1 && a[3][3]==1 && f[2]!=1 && f[3]!=1 && f[6]!=1 && f[11]!=1 && f[20]!=1 && f[27]!=1)
{
strcat(z,"ACd+");
f[43]=1;
}
if(a[0][0]==1 && a[1][0]==1 && f[0]!=1 && f[4]!=1 && f[7]!=1 && f[12]!=1 && f[23]!=1 && f[28]!=1)
{
strcat(z,"abc+");
f[44]=1;
}
if(a[0][1]==1 && a[1][1]==1 && f[0]!=1 && f[5]!=1 && f[4]!=1 && f[12]!=1 && f[15]!=1 && f[29]!=1)
{
strcat(z,"aBc+");
f[45]=1;
}
if(a[0][2]==1 && a[1][2]==1 && f[0]!=1 && f[5]!=1 && f[6]!=1 && f[15]!=1 && f[18]!=1 && f[30]!=1)
{
strcat(z,"ABc+");
f[46]=1;
}
if(a[0][3]==1 && a[1][3]==1 && f[0]!=1 && f[6]!=1 && f[7]!=1 && f[11]!=1 && f[18]!=1 && f[31]!=1)
{
strcat(z,"Abc+");
f[47]=1;
}
if(a[1][0]==1 && a[2][0]==1 && f[1]!=1 && f[4]!=1 && f[7]!=1 && f[13]!=1 && f[21]!=1 && f[28]!=1)
{
strcat(z,"abD+");
f[48]=1;
}
if(a[1][1]==1 && a[2][1]==1 && f[1]!=1 && f[4]!=1 && f[5]!=1 && f[13]!=1 && f[16]!=1 && f[29]!=1)
{
strcat(z,"aBD+");
f[49]=1;
}
if(a[1][2]==1 && a[2][2]==1 && f[1]!=1 && f[5]!=1 && f[6]!=1 && f[16]!=1 && f[19]!=1 && f[30]!=1)
{
strcat(z,"ABD+");
f[50]=1;
}
if(a[1][3]==1 && a[2][3]==1 && f[1]!=1 && f[6]!=1 && f[7]!=1 && f[19]!=1 && f[21]!=1 && f[31]!=1)
{
strcat(z,"AbD+");
f[51]=1;
}
if(a[2][0]==1 && a[3][0]==1 && f[2]!=1 && f[4]!=1 && f[7]!=1 && f[14]!=1 && f[22]!=1 && f[28]!=1)
{
strcat(z,"abC+");
f[52]=1;
}
if(a[2][1]==1 && a[3][1]==1 && f[2]!=1 && f[4]!=1 && f[5]!=1 && f[14]!=1 && f[17]!=1 && f[29]!=1)
{
strcat(z,"aBC+");
f[53]=1;
}
if(a[2][2]==1 && a[3][2]==1 && f[2]!=1 && f[5]!=1 && f[6]!=1 && f[17]!=1 && f[20]!=1 && f[30]!=1)
{
strcat(z,"ABC+");
f[54]=1;
}
if(a[2][3]==1 && a[3][3]==1 && f[2]!=1 && f[6]!=1 && f[7]!=1 && f[20]!=1 && f[22]!=1 && f[31]!=1)
{
strcat(z,"AbC+");
f[55]=1;
}
if(a[0][0]==1 && a[0][3]==1 && f[0]!=1 && f[7]!=1 && f[23]!=1 && f[24]!=1 && f[3]!=1 && f[8]!=1)
{
strcat(z,"bcd+");
f[56]=1;
}
if(a[0][0]==1 && a[3][0]==1 && f[3]!=1 && f[4]!=1 && f[7]!=1 && f[28]!=1 && f[8]!=1 && f[9]!=1)
{
strcat(z,"abd+");
f[57]=1;
}
if(a[0][3]==1 && a[3][3]==1 && f[3]!=1 && f[6]!=1 && f[7]!=1 && f[31]!=1 && f[8]!=1 && f[11]!=1)
{
strcat(z,"Abd+");
f[58]=1;
}
if(a[0][1]==1 && a[3][1]==1 && f[3]!=1 && f[4]!=1 && f[5]!=1 && f[29]!=1 && f[9]!=1 && f[10]!=1)
{
strcat(z,"aBd+");
f[59]=1;
}
if(a[0][2]==1 && a[3][2]==1 && f[3]!=1 && f[5]!=1 && f[6]!=1 && f[30]!=1 && f[10]!=1 && f[11]!=1)
{
strcat(z,"ABd+");
f[60]=1;
}
if(a[3][0]==1 && a[3][3]==1 && f[2]!=1 && f[3]!=1 && f[22]!=1 && f[27]!=1 && f[9]!=1 && f[11]!=1 && f[7]!=1)
{
strcat(z,"bCd+");
f[61]=1;
}
if(a[1][0]==1 && a[1][3]==1 && f[7]!=1 && f[21]!=1 && f[23]!=1 && f[23]!=1 && f[0]!=1 && f[1]!=1)
{
strcat(z,"bcD+");
f[62]=1;
}
if(a[2][0]==1 && a[2][3]==1 && f[7]!=1 && f[21]!=1 && f[22]!=1 && f[26]!=1 && f[2]!=1 && f[3]!=1)
{
strcat(z,"bCD+");
f[63]=1;
}

if(a[0][0]==1 && a[0][1]==0 && a[1][0]==0 && a[1][1]==0 && a[3][0]==0)
{
strcat(z,"abcd+");
f[65]=1;
}
if(a[0][1]==1 && a[0][0]==0 && a[0][2]==0 && a[1][1]==0 && a[3][1]==0)
{
strcat(z,"aBcd+");
f[66]=1;
}
if(a[0][2]==1 && a[0][1]==0 && a[0][3]==0 && a[1][2]==0 && a[3][2]==0)
{
strcat(z,"ABcd+");
f[67]=1;
}
if(a[0][3]==1 && a[0][0]==0 && a[3][3]==0 && a[1][3]==0 && a[0][2]==0)
{
strcat(z,"Abcd+");
f[68]=1;
}
if(a[1][0]==1 && a[0][0]==0 && a[1][1]==0 && a[2][0]==0 && a[1][3]==0)
{
strcat(z,"abcD+");
f[69]=1;
}
if(a[1][1]==1 && a[0][1]==0 && a[1][0]==0 && a[1][2]==0 && a[2][1]==0)
{
strcat(z,"aBcD+");
f[70]=1;
}
if(a[1][2]==1 && a[0][2]==0 && a[1][1]==0 && a[1][3]==0 && a[2][2]==0)
{
strcat(z,"ABcD+");
f[71]=1;
}
if(a[1][3]==1 && a[0][3]==0 && a[1][0]==0 && a[1][2]==0 && a[2][3]==0)
{
strcat(z,"AbcD+");
f[72]=1;
}
if(a[2][0]==1 && a[1][0]==0 && a[2][1]==0 && a[3][0]==0 && a[2][3]==0)
{
strcat(z,"abCD+");
f[73]=1;
}
if(a[2][1]==1 && a[2][0]==0 && a[2][2]==0 && a[3][1]==0 && a[1][1]==0)
{
strcat(z,"aBCD+");
f[74]=1;
}
if(a[2][2]==1 && a[2][1]==0 && a[1][2]==0 && a[2][3]==0 && a[3][2]==0)
{
strcat(z,"ABCD+");
f[75]=1;
}
if(a[2][3]==1 && a[1][3]==0 && a[2][2]==0 && a[3][3]==0 && a[2][0]==0)
{
strcat(z,"AbCD+");
f[76]=1;
}
if(a[3][0]==1 && a[2][0]==0 && a[0][0]==0 && a[3][1]==0 && a[3][3]==0)
{
strcat(z,"abCd+");
f[77]=1;
}
if(a[3][1]==1 && a[3][0]==0 && a[3][2]==0 && a[2][1]==0 && a[0][1]==0)
{
strcat(z,"aBCd+");
f[78]=1;
}
if(a[3][2]==1 && a[3][3]==0 && a[3][1]==0 && a[2][2]==0 && a[0][2]==0)
{
strcat(z,"ABCd+");
f[79]=1;
}
if(a[3][3]==1 && a[2][3]==0 && a[3][2]==0 && a[0][3]==0 && a[3][0]==0)
{
strcat(z,"AbCd+");
f[80]=1;
}
}
printf("%s",z);
m=0;
n=0;
i=0;
while(z[i]!='\0')
{
s[m][n]=z[i];
n++;
if(z[i]=='+')
{
m++;
n=0;
}
i++;
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%c",s[i][j]);
}
printf("\n");
}
printf("\n");
}





























































































