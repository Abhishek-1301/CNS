#include<stdio.h>
#include<math.h>
//to find gcd
int gcd(int a, int b)
{
    if(b==0) return a;
    else{
        if(a>b){
            int t=a;
            a=b;
            b=t;
        }
        return gcd(a,b%a);
    }
}
int main()
{
double p = 3;
double q = 7;
double n=p*q;
double totient = (p-1)*(q-1);
double e=2;
while( e < totient && gcd(e,totient)!=1){
    e++;
}
double d;
double k = 2;
d = (1 + (k*totient))/e;
double msg = 12;
double c = pow(msg,e);
double m = pow(c,d);
c=fmod(c,n);
m=fmod(m,n);
printf("\nEncrypted data = %.lf",c);
printf("\nOriginal Message Sent = %.lf",m);
return 0;
}