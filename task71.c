#include<stdio.h>
int main()
{
  int array[4][4],i,j,count,x,y,a,b,c,d,array1[4][4];
  count=1;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      array[i][j]=count;
      printf("%4d",count);
      count++;
    }
      printf("\n");
}
printf("\n");
for(x=3,a=0;x>=0,a<4;x--,a++)
{
  for(y=0,b=0;y<4;y++,b++)
  {
  array1[y][x]=array[a][b];
}
}


for(c=0;c<4;c++)
{
  for(d=0;d<4;d++)
  {
    printf("%4d",array1[c][d]);
  }
  printf("\n");
}
return(0);
}
