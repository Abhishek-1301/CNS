#include<stdio.h>
#include<string.h>
int main(){
	char plain[10],cipher[10];
	int i,key;
	printf("Enter plain text:");
	scanf("%s",&plain);
	printf("Enter key:");
	scanf("%d",&key);
	printf("Encrypted text:");
	for(i=0;i<strlen(plain);i++){
		cipher[i]=plain[i]+key;
		if((isupper(plain[i]) && cipher[i]>'Z') || (islower(plain[i]) && cipher[i]>'z'))
		cipher[i]-=26;
		printf("%c",cipher[i]);
	}
	printf("\nDecrypted text:");
	for(i=0;i<strlen(cipher);i++){
		plain[i]=cipher[i]-key;
		if((isupper(cipher[i]) && plain[i]>'Z') || (islower(cipher[i]) && plain[i]>'z'))
		cipher[i]+=26;
		printf("%c",plain[i]);
	}
}