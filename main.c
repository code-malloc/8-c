#include <stdio.h>

int otzhimaniya()
{
	int result, rost, ves, vozrast;
	result=0;

	printf("Ваш рост (см): ");
	scanf("%d", &rost);
	printf("Ваш вес (кг): ");
	scanf("%d", &ves);
	printf("Ваш возраст: ");
	scanf("%d", &vozrast);

	return result=(rost+ves)/((vozrast+10)/10);
}

int podtyagivaniya()
{
	int result, rost, ves, vozrast;
	result=0;

	printf("Ваш рост (см): ");
	scanf("%d", &rost);
	printf("Ваш вес (кг): ");
	scanf("%d", &ves);
	printf("Ваш возраст: ");
	scanf("%d", &vozrast);

	return result=(rost+ves)/vozrast;
}

int prisedaniya()
{
	int result, vozrast;
	result=0;

	printf("Ваш возраст: ");
	scanf("%d", &vozrast);

	return result=120-vozrast;
}

int main()
{
	int num;

	printf("\tТри золотых упражнения.\n");
	printf("1.  Отжимания\n");
	printf("2.  Подтягивания\n");
	printf("3.  Приседания\n\n");
	
	printf("Выбор: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1: printf("Кол-во отжиманий = %d\n", otzhimaniya()); break;
	case 2: printf("Кол-во подтягиваний = %d\n", podtyagivaniya()); break;
	case 3: printf("Кол-во приседаний = %d\n", prisedaniya()); break;
	default:
		printf("\nчто то пошло не так =(\n");
	}
	
	return 0;
}
