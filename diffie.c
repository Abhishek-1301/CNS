#include<stdio.h>
#include<math.h>
int main()
{
long long int P, G, x, a, y, b, ka, kb;
P = 23;
printf("The value of P : %lld\n", P);
G = 9;
printf("The value of G : %lld\n\n", G);
a = 4;
printf("The private key a for Alice : %lld\n", a);
x = pow(G, a) % P;
b = 3;
printf("The private key b for Bob : %lld\n\n", b);
y = pow(G, b) % P;
ka = pow(y, a) % P; // Secret key for Alice
kb = power(x, b) % P; // Secret key for Bob
printf("Secret key for the Alice is : %lld\n", ka);
printf("Secret Key for the Bob is : %lld\n", kb);
return 0;
}