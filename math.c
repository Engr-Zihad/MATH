#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    printf("enter two number :\n");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    double div=a/b;
    int mod=a%b;
    int power= pow(a,b);
    printf("the addition is:%d\n",sum);
    printf("the subtraction is:%d\n",sub);
    printf("the multiplication is:%d\n",mul);
    printf("the division is:%lf\n",div);
    printf("the modulus is:%d\n",mod);
    printf("the power is:%d\n",power);
    return 0;

}