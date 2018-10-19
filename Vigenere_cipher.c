#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Insert[1000], Key[1000],function;
	int letter_to_num, move, i;
	char big_letter[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	
	printf("Encrypt or Decrypt? E or D :");
	scanf("%c",&function);//选择加密 or 解密
	
	if (function == 'E'){//加密
		printf("Please input the Key:");
		scanf("%s",Key);//输入密匙
		printf("Please input the Insert:");
		scanf("%s", Insert);//输入明文
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
	else if (function == 'D'){//解密
		printf("Please input the Key:");
		scanf("%s",Key);//输入密匙
		printf("Please input the Insert:");
		scanf("%s", Insert);//输入密文
		int len = strlen(Key);

		for (i = 0; i <= len - 1; i++){

			for (letter_to_num = 0; letter_to_num <= 25; letter_to_num++){//将Key转化为偏移量
				if (big_letter[letter_to_num] == Key[i]){
					move = letter_to_num;
				}
			}
			 		if(Insert [i]- move <'A'){//输出结果
					  putchar(Insert [i]- move + 26);
				    } else {
					  putchar(Insert [i]- move);
			        }
        }
}
	return 0;
}
