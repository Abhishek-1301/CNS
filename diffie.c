#include<stdio.h>
#include<math.h>
int main()
{
int P, G, x, a, y, b, ka, kb;
P = 23;
printf("The value of P : %d\n", P);
G = 9;
printf("The value of G : %d\n\n", G);
a = 4;
printf("The private key a for Alice : %d\n", a);
x = pow(G, a) % P;
b = 3;
printf("The private key b for Bob : %d\n\n", b);
y = pow(G, b) % P;
ka = pow(y, a) % P; // Secret key for Alice
kb = power(x, b) % P; // Secret key for Bob
printf("Secret key for the Alice is : %d\n", ka);
printf("Secret Key for the Bob is : %d\n", kb);
return 0;
}