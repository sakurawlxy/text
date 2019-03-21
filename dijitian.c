#include<stdio.h>
int main(){
  int a,b,c,day,i;
  int d[12];
  scanf("%d-%d-%d",&a,&b,&c);
  day=0;
  d[1]=31;
  d[2]=28;
  d[3]=31;
  d[4]=30;
  d[5]=31;
  d[6]=30;
  d[7]=31;
  d[8]=31;
  d[9]=30;
  d[10]=31;
  d[11]=30;
  d[12]=31;
  if((a%400==0||(a%4==0&&a%100!=0)&&b>=3))
  {
  day+=1;
 }
  for(i=1;i<b;i++){
   day+=d[i];
    }
  day+=c;
  printf("%d",day);
  return 0;
  
}
