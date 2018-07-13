int main()
{
	int i;
	float a,toplam=0;
	float ort;
	int max=-999999, min=999999; // başlangıçta max mümkün olduğunca küçük, min ise mümkün olduğunca büyük seçilir.
	for(i=0; i<10; i++)
	{
		printf("10 sayidan %d. sayiyi giriniz: ", i+1);
		scanf("%f", &a);
		toplam+=a;
		if(a>max) // max, min bulma kodu
			max=a;
		else
			min=a;
	}
	printf("Girilen sayilarin toplami = %f\n", toplam);
	ort=toplam/10;
	printf("Girilen sayilarin ortalamasi= %.1f\n", ort);
	printf("En kucuk sayi = %d\n", min);
	printf("En buyuk sayi= %d", max);	
	return 0;
}
