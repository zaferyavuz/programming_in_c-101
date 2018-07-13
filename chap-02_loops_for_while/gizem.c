int main()
{
	int i;
	float a,toplam=0;
	float ort;
	int max, min;
	for(i=0; i<10; i++)
	{
		printf("10 sayidan %d. sayiyi giriniz: ", i+1);
		scanf("%f", &a);
		toplam+=a;
    // MİN VE MAX BURADA BULUNMASI GEREKİR
	}
	printf("Girilen sayilarin toplami = %f\n", toplam);
	ort=toplam/10;
	printf("Girilen sayilarin ortalamasi= %.1f\n", ort);
	
	if(i==0)
	{
		max=min=a;
        }
		for(i=0; i<10; i++)
	{
		if(min>a)
	    	min=a;
        else if(max<a)
            max=a;
	}
	printf("En kucuk sayi = %d\n", min);
	printf("En buyuk sayi= %d", max);
	
	return 0;
}
