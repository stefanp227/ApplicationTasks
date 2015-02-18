#include<stdio.h>
#include<stdlib.h> // 20+10 = 30 30-26=4 0+4 [3]
#include<string.h>//   j+n = *  *-26=answer

char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

char caesar_encrypt(char string[], int cipher) {
	char encrypted_str[4];
	int i;

	for(i = 0; i < 3; i++){
		if(string[i] >= 97 && string[i] <= 122 && cipher >= 0){
			int k = string[i] - 'a' + cipher;
			if((string[i] - 'a' + cipher) > 26) {
				k = k - 26;
			};
			encrypted_str[i] = lowercase[k % 26];
			printf("%c", encrypted_str[i]);
		} else if(string[i] >= 65 && string[i] <= 90 && cipher >= 0) {
			int k = string[i] - 'A' + cipher;
			if((string[i] - 'A' + cipher) > 26) {
				k = k - 26;
			};
			encrypted_str[i] = uppercase[k % 26];
			printf("%c", encrypted_str[i]);
		} 
	}

	return 0;

}

int main() {
	int n;
	char c[4] = "abc"; // не успях да намеря начин да направя самите елементи на масива, който ще се шифрова да се задават от потребителя затова ги въвеждам тук
	
	printf("Input cipher number : ");
	scanf("%d", &n);

	caesar_encrypt(c, n); // не намерих начин в c да връщам стринг(масив от char-ове) затова направих функцията да приема целия масив и да принтира шифрованите елементи 1 по 1
	return 0;
}