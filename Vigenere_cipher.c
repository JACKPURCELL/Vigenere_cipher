#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Insert[1000], Key[1000],function;
	int letter_to_num, move, i;
	char big_letter[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	
	printf("Encrypt or Decrypt? E or D :");
	scanf("%c",&function);//Encrypt or Decrypt

	if (function == 'E'){//Encrypt
		printf("Please input the Key:");
		scanf("%s",Key);//Input key
		printf("Please input the Insert:");
		scanf("%s", Insert);//Input plaintext
		int len = strlen(Key);
		for (i = 0; i <= len - 1; i++){

			for (letter_to_num = 0; letter_to_num <= 25; letter_to_num++){//将Key转化为偏移量
				if (big_letter[letter_to_num] == Key[i]){
					move = letter_to_num ;
				}
			}
			 		if(Insert [i]+ move>'Z'){//输出结果
				      putchar(Insert [i]+ move - 26);
			  		} else {
			  		  putchar(Insert [i]+ move);
					}
		}

}
	else if (function == 'D'){//Decrypt
		printf("Please input the Key:");
		scanf("%s",Key);//Input key
		printf("Please input the Insert:");
		scanf("%s", Insert);//Input ciphertext
		int len = strlen(Key);

		for (i = 0; i <= len - 1; i++){

			for (letter_to_num = 0; letter_to_num <= 25; letter_to_num++){//Convert Key to move
				if (big_letter[letter_to_num] == Key[i]){
					move = letter_to_num;
				}
			}
			 		if(Insert [i]- move <'A'){//Output
					  putchar(Insert [i]- move + 26);
				    } else {
					  putchar(Insert [i]- move);
			        }
        }
}
	return 0;
}
