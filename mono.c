#include<stdio.h>
int main() {
    char alpha[26][2] = { { 'a', 'f' }, { 'b', 'a' }, { 'c', 'g' }, { 'd', 'u' }, {
    'e', 'n' }, { 'f', 'i' }, { 'g', 'j' }, { 'h', 'k' }, { 'i', 'l' }, {
    'j', 'm' }, { 'k', 'o' }, { 'l', 'p' }, { 'm', 'q' }, { 'n', 'r' }, {
    'o', 's' }, { 'p', 't' }, { 'q', 'v' }, { 'r', 'w' }, { 's', 'x' }, {
    't', 'y' }, { 'u', 'z' }, { 'v', 'b' }, { 'w', 'c' }, { 'x', 'd' }, {
    'y', 'e' }, { 'z', 'h' } };
    char str[20], str2[20];
    int i,j;
    printf("\n Enter String..");
    gets(str);
    for (i = 0; str[i]; i++) {
        for (j = 0; j < 26; j++) {
            if (str[i] == alpha[j][0]){
                str2[i] = alpha[j][1];
                break;
            }
        }
    }
    str2[i] = '\0';
    printf("\n Before Decryption..%s", str);
    printf("\n After Decryption..%s\n", str2);
}