#include <stdio.h>
int main(){
int mark1,mark2,mark3,mark4,mark5;
float total,average,percentage;
printf("enter marks of five subjects:\n");
scanf("%d %d %d %d %d",mark1, mark2, mark3, mark4, mark5);
total=mark1+mark2+mark3+mark4+mark5;
average=total/5;
percentage=(total/500)*100;
printf("The total is:%f\n", total);
printf("The average is:%f\n", average);
printf("The percentage is:%f\n", percentage);
return 0;
}
