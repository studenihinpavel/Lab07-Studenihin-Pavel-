#include <stdlib.h>
#include <stdio.h> 
#include<locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int k;
	    printf("Введите число k<20\n"); scanf_s("%d", &k);
		switch (k)
		{
		case 0: case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:
		case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
			break;
		default:
			printf("Ошибка ввода");
			return 1;
		}
	switch (k)
	{
	
	case 1: printf("В программе найдена %d ошибка", k);
		break;
	case 2: case 3: case 4: printf("В программе найдены %d ошиби", k);
		break;
	case 0: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
		printf("В программе найдены %d ошибок", k);
	default:
		return 0;
	}
	return 0;
}