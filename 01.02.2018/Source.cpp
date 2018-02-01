#include <stdio.h>

#define Month 12
#define SIZE 4

using namespace std;

int strlen(char*s);

int sum(int *ar, int *end);


int main()

{



	int urn[5] = { 100,200,300,400,500 };
	int *ptrl, *ptrl2, *ptrl3;

	//Prisvaivanie znachenie ukazatelyu

	ptrl = urn;//prisvaivanie ukaztelyu adresa

	//1-ptrl = &urn[2];//adress 3 go elementa

	printf("ptrl = %p, *ptrl = %d, &ptrl= %p \n", ptrl, *ptrl, &ptrl);

	//2-Opredelenie znacheniya
	printf("*ptrl = %d\n", *ptrl);

	//3-Adress ukazatelya
	printf("&ptrl = %d\n", &ptrl);

	//4-slozhenie celochislennogo znacheniya s ukazatelem

	for (int i = 0; i < 5; i++)
	{
		printf("ptrl + %d = %p-%d\n", i, ptrl + i, *(ptrl + i));
	}

	//5- Inkriment znacheniya
	printf("adress ukazatelya ptrl do ptrl++\n", &ptrl);
	printf("ptrl = %p,*ptrl=%d,&ptrl=%p\n", ptrl, *ptrl, &ptrl);
	printf("adress ukazatelya ptrl do ptrl++ = %p\n", &ptrl);
	ptrl++;//uvelichivaem znazhenie na 1
	printf("adress ukazatelya ptrl do ptrl++\n", &ptrl);
	printf("ptrl = %p,*ptrl=%d,&ptrl=%p\n", ptrl, *ptrl,&ptrl);


	//6- vichitanie celochislennyh znacheniy
	printf("vichitanie *ptrl=  %d\n",*(ptrl-1));

	//7-Dikrement
	--ptrl;
	printf("vichitanie *ptrl=  %d\n", *(ptrl));

	ptrl2 = &urn[3];
	//8- Vichislenie raznostey ukazateley
	printf("Vychislenie raznosti ukazateley \n");
	printf("ptrl2 = %p(%d),ptrl = %p(%d),ptrl2-ptrl = %d\n", ptrl2, *ptrl2, ptrl, *ptrl, ptrl2 - ptrl);

	//8.1- Sravneniy ukazateley
	printf("Sravneniy ukazateley \n");
	printf("ptrl2 = %p(%d),ptrl = %p(%d),ptrl2-ptrl = %d\n", ptrl2, *ptrl2, ptrl, *ptrl, ptrl2 > ptrl);

	return 0;
	//char name[50] = "Lesson References";
	//int result = strlen(name);
	///*printf("Dlina stroki = %d \n\n", result);*/

	//int a[4] = { 12,586,48,178 };
	//int *pa = NULL;

	//pa = &a[0];
	//int x = *pa;
	//pa = a;

	////*(pa+1)=*(a+1)
	//printf("- %p -  %p \n", &a[1], a + 1);

	int days[Month] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	printf("obem pamyati pod massiv days = %d; \n", sizeof(days));

	printf("Summa elenmentov massiva = %d \n"),sum(days,days+Month);

}

/*
int days[Month] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

printf("days =%p;&days[0]=%p\n\n", days, &days[0]);

if (days == &days[0])
printf("YES \n");

short dates[SIZE] = { 516,156,48,98 };
short*pti = NULL;
short index;

double bills[SIZE];
double * ptf = NULL;

pti = dates;
ptf = bills;

printf("\t\t short       double  \n");

for (index = 0; index < SIZE; index++)
{
printf("ukazteli + %d : %10p %10p \n",
index, pti + index, ptf + index);
}

printf("\n");
for (index = 0; index < SIZE; index++)
{
printf("adress %d elementa : %d  \n",
index,*(pti+index));
}
*/

int strlen(char*s)
{
	int i;

	for (int i = 0; s != '\0'; s++)
	{
		i++;
	}
	return i;
}


int sum(int *ar,int *end)
{
	int total = 0;
	while (ar < end)
	{
		total += *ar++;
	}
	/*printf("obem pamyati pod massiv ar = %d; \n", sizeof(ar));
	for (int i = 0; i < end; i++)
	{		
		total += *(ar + i);
	}*/
	return total;
}