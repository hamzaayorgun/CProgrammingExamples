#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   /*
	//Soru 1) Hamza Yorgun
	//25.10.2018
	int sonuc = 0 , temp = 0 , yil;
    printf("bir yil giriniz:");
    scanf("%d", &yil);
    	
	sonuc = yil % 4;
	if(sonuc == 0 ) {
        
		printf("Artik yildir.");
	}
	else {
		printf("Artik yil degildir.");
	}
    
    
	//Soru 2) Hamza Yorgun
	//25.10.2018
	int   rakam , sayi , toplam=0;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi != 0){
	
	rakam = sayi % 10;
	
	sayi = sayi / 10;
	
	
	
	toplam = toplam + rakam;
    
   }
    
	
    

	printf("rakamlarin toplami : %d dir", toplam);
	
	
	
	//Soru 3) Hamza Yorgun
	//25.10.2018
	int i , carpim=1 , sayi  ;
	printf("faktoriyel giriniz:");
	scanf("%d" , &sayi);
	for(i=1; i<=sayi; i=i+1){
		carpim = carpim*i;
		
	}
	  printf("%d" , carpim);
	
	
	//Soru 4) Hamza Yorgun
	//25.10.2018
	int i , carpim=1 , sayi  ;
	printf("faktoriyel giriniz:");
	scanf("%d" , &sayi);
	for(i=1; i<=sayi; i=i+1){
		carpim = carpim*i;
		printf("\n%d" , carpim);
	}
		

	*/
	//Soru 5) Hamza Yorgun
	//25.10.2018
	int sayi, rakam;
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	
	while(sayi != 0){
		
		rakam = sayi % 2;
		printf("%d", rakam);
		sayi = sayi / 2;
		
	}
 	
  	/*
	//Soru 6) Hamza Yorgun
	//26.10.2018
	int     taban=1 ,   toplam=0   , basamak=0 ,  sayi, rakam;
	printf("2lik tabanda bir sayi giriniz:");
	scanf("%d" , &sayi);
	
       
	
	       
		while(sayi !=0){
		
		rakam = sayi % 10;
		printf("rakam :%d\n" , rakam);
		sayi = sayi /10;
	    
	    
	    
		printf("taban :%d\n", taban);
		
		basamak = rakam * taban ;
		toplam = toplam + basamak;
         		taban = taban*2;
	   }

	   
    printf("\n sayiniz : %d dir\n" , toplam); 
	
		
	
	

	/* 
	//Soru 7) Hamza Yorgun
	//25.10.2018
    
	// degiskenleri tan�mlad�m
	int sayi, rakam, tersi = 0;
	//Kullan�c�dan bir say� istedim.
	printf("Sayi giriniz: ");
	//Istedi�im say�y� taratt�m.
	scanf("%d", &sayi);
	// sayiyi temp diye bir de�i�kene atad�m ��nk� sayi while d�ng�s�nde 0 oluyor ve
	// ben sayinin tersini sorgularken bana sayinin ilk de�eri laz�m ve bu y�zden sayiyi temp de�i�kenine atad�m.
	int temp =sayi;
	//Sayi 0'dan farkl�ysa d�ng�ye gir demek.
	while(sayi != 0){
		//Rakamlar� buluyoruz bu �ekilde.
		rakam = sayi % 10;
		//Rakamlar� ekrana yaz�yoruz.
		printf("%d \n", rakam);
		//Say�y� 10'a b�lmezsek s�rekli son basama�� buluruz bu y�zden b�l�yoruz ve bu sayi de�i�keninde tutuluyor.
		sayi = sayi / 10;
		//Burada say�n�n tersini buluyoruz mant���n� anlatm��t�m sana
		tersi = tersi*10 + rakam;
	}
    //�u anda d�ng�den ��kt���nda sayi 0 oldu d�ng�den ��kt� ��nk� sayi 0'dan farkl�ysa dedim ama en sonunda sayi 0'dan farkl� olmad�.
    //Bende bunun i�in yukar�da sayiyi temp ad�nda bir de�i�kene atad�m.
	
	
	
	printf("\n Tersi: %d" , tersi);	
	//ve tempin de�eri hi� de�i�medi�i i�in burada tersi k�sm�nda tempi sorgulad�m.
	if(tersi==temp){
		printf("\n palindrom sayidir.");
	}
	else {
		printf("\n palindrom sayi degildir.");
	}
	
	
	
	
	
	
	
	
    //Soru 8) Hamza Yorgun
	//26.10.2018
	int tersi= 0 , i=1 , rakam , sayi=1,temp=1;
	
	while (i<=1000){
    	temp=i;
		
		rakam = temp % 10;
		
		tersi = tersi*10+rakam;
		
	   temp = temp / 10;
	    
	    

	    if(temp!=0){
	
 		
	    	rakam = temp % 10;
	
			tersi = tersi*10+rakam;
			
			}
		
		
		temp = temp / 10;
	    
	    
		if(temp!=0){
		
	    	rakam = temp % 10;
	
			tersi = tersi*10+rakam;
	
		}
	    
		temp = temp / 10;
	    
		if(temp !=0){
	    	
	    	rakam = temp % 10;
		
			tersi = tersi*10+rakam;
		
	}
		
		if(tersi==i){
			printf(" %d\n", i);
		}
		
		i++;
	    tersi = 0;
	    
	 }
		

	
	//Soru 9 Hamza Yorgun
	//28.10.2018
	int i, n, sayi1 = 0, sayi2 = 1, temp;
	printf("Fibonacci Serileri: ");
  	printf("N'inci sayiyi giriniz': ");
    scanf("%d", &n);
	for(i=1; i<=n;i++){
	
		printf("%d, ", sayi1);
        temp = sayi1 + sayi2 ;
        sayi1 = sayi2;
        sayi2 = temp;
   }
	
	
	//Soru 10 Hamza Yorgun
	//28.10.2018
	int i, n, sayi1 = 0, sayi2 = 1, temp;

    printf("N'inci sayiyi giriniz': ");
    scanf("%d", &n);

    printf("Fibonacci Serileri: ");

    for (i = 1; i <= n; ++i)
    {
        if(i==n){
		printf("\n%d'inci terim %d ", i , sayi2 );
		}
		else {
		printf("%d, ", sayi2);
        temp = sayi1 + sayi2 ;
        sayi1 = sayi2;
        sayi2 = temp;
		}
	}
		
		
	//Soru 11) Hamza Yorgun
	//26.10.2018
	int basamak=0 ,sonuc ,  sayi , rakam, tersi = 0;
	
	
	
	printf("bir sayi giriniz:");
	scanf("%d", &sayi);
	
	while(sayi != 0 ){
		 
		rakam = sayi % 10;
		printf(" rakam: %d ", rakam);
		
	    sayi = sayi / 10;
		
		tersi = tersi*10 + rakam;
	    basamak = basamak+1;
	    
	    
	}
            printf("\n Girilen sayi %d basamaklidir", basamak);
			printf("\n Tersi: %d\n" , tersi);
	
	//Soru 12 Hamza Yorgun
    //30.10.2018
    int  temp2 , temp , carpim = 1 , toplam = 0 ,rakam , sayi , i , j , k;
    // Kulan�can sayi girmesini istedim.
	printf("bir sayi giriniz:");
	//De�eri okudum.
    scanf("%d" , &sayi);
    // Burda yapt���mda sayiyi temp2'ye atamak oldu sebebini a�a��da anl�ycaks�n.
	temp2= sayi;
	// Burdada girilen sayiyi tempe atad�m.
	temp = sayi;
	//temp 0 dan farkl�ysa gir demek.
	while(temp!=0){
    	//burada �rne�in 12 say�s�n� ele alal�m birler basama�� nedir 2 onu buldum.
		rakam = temp % 10;
    	//Burada sayiyi 10'a b�ld�m ��nk� onlar basama��n� bulmam gerekiyor ve i�lemler tekrarlan�yor bir sonraki i�lemde onlar basama�� bulunucak sayi 0 olana kadar.
		temp= temp/10;
    	// i de�i�kenini burda say�n�n ka� basamakl� oldu�unu yani i�lemin ka� kez yap�ld���n� bulmak i�in kulland�m.
		i++;
		
    	
	}
   //j yi dan ba�latt�m ve i'ye git dedim �rne�in 123 say�s� 3 basamakl� oldu�u i�in ayn� i�lemide a�a��da 3 defa yap�cam 
   for(j=0; j<i ; j++){  
   	// �nce birler sonra onlar sonra 100ler basama��n� bulucak girilen sayi 3 basamakl� ise.
	   rakam = sayi % 10;
   	   //k 0dan ba�la ve basamak say�s� kadar i�lemi tekrarla dedim.
		  for(k=0; k<i ; k++){  
		    
		  
		  
		  carpim = carpim * rakam;
		  
 	      
		   
	 }
     toplam = toplam + carpim;
	 
	 sayi= sayi/10;
	 carpim=1;
	}
   printf("toplam  : %d ", toplam);
   if(temp2==toplam){
   	 printf("\n %d Armstrong sayidir." , temp2);
   }
   else {
   	 printf("\n %d Armstrong sayi degildir." , temp2);
   }
   
    
	
    //Soru 13 Hamza Yorgun
    //30.10.2018
	int temp , rakam , i , j , carpim=1 , toplam=0;
	for(i=1; i<1000 ; i++){  
   	temp=i;
	   rakam = temp % 10;
   	   if(rakam!=0 & temp <10){
   	   	  carpim= carpim * rakam;
		 
		  if(carpim==i){
		  	//printf("%d\n" , i);
		  }	   	  
		  temp = temp/10;
		  
			carpim=0;	 
		  }
		  
	  else if(i>=10 && i<=99){
      rakam = temp % 10;
	  carpim= rakam * rakam;
      
	  toplam=toplam + carpim;
	  
	  
	  
 	  temp = temp /10;
	  rakam = temp % 10;	 
	  carpim = rakam * rakam;
	  
	  toplam = toplam + carpim; 	
	  	   	 	
	 if(toplam==i){
	 	printf("%d\n", i);
	 }
	 toplam=0;
	 }
	
	
	else if(i>=100 && i<=999){
      rakam = temp % 10;
	  carpim= rakam * rakam* rakam;
      
	  toplam=toplam + carpim;
	  
	  
	  
 	  temp = temp /10;
	  rakam = temp % 10;	 
	  carpim = rakam * rakam * rakam;
	  
	  toplam = toplam + carpim; 
	  
	  temp = temp /10;
	  rakam = temp % 10;	 
	  carpim = rakam * rakam * rakam;
	  	
	 toplam = toplam + carpim;   	 	
	 if(toplam==i){
	 	printf("%d\n", i);
	 }
	 toplam=0;
	 }
   }
	
	
	
	
		 
		 
 	//Soru 14 Hamza Yorgun
    //28.10.2018
    int  degisken=0,temp, sayi, rakam, i=1;
	printf("bir sayi giriniz:");
	scanf("%d", &sayi);
	while(i!=sayi) {
		temp = i;
		rakam = temp % 10;
		degisken = rakam;
		
	    temp = temp / 10;
		rakam = temp % 10;
		
		
		if(degisken==rakam || degisken != 0 && rakam == 0 ){
		printf("\n %d", i);
		}
	
		
		
			i++;
	
   }
   
   //Soru 15 Hamza Yorgun
   //28.10.2018
   int sonuc , sayac,sayi,i;
   printf("bir sayi giriniz:");
   scanf("%d", &sayi);
   for(i=2; i<sayi; i++){
   	  sonuc = sayi%i;
		 if(sonuc==0){
		 	sayac++;
		 }
		 
	}
	if(sayac==0){
		printf("Sayi asaldir.");
	}
	else {
		printf("Sayi asal degildir.");
	}
	
	
	
	//Soru 16 Hamza Yorgun
   //30.10.2018
   int sonuc , sayac = 0, i , n;
   //1'den 999'a kadar gidecek bu d�ng� yaln�zca say�n�n kalan� var veya yoku kontrol etmek ama�l�
   for(n=1; n<1000; n++){
   
   // Bu d�ng�de 1 asal olmad��� i�in 2'den ba�latt�m 
   for(i=2; i<n; i++){
   	     // 5 i�in ele alal�m n=5 ve i=2 i 4'e kadar gelicek d�nerek ve hi�birine b�l�nemeyece�i i�in say�y� a�a��da yaz�cak
		 sonuc = n % i;
		 // burada kalan s�f�rsa say� asal de�idlir ve sayac sayar
		if(sonuc==0){
		 	sayac++;
			}
	}// �� D�ng� burada bitiyor 

		//e�er ki sayac hi� artmam�� ise say� asald�r ve ekrana yaz�cak 
		if(sayac==0){
		printf("%d \n" , n);
		}
		//Her say� i�in ayr� ayr� bak�ca��m�z i�in sayac� s�f�rlar�m yoksa sayac hep artar ve ekrana say� yazmaz.
		sayac=0;
 }
    
	
	//Soru 17 Hamza Yorgun
   //30.10.2018
   int max , temp , sonuc , sayac = 0, i , n;
   
   for(n=1; n<10000; n++){
   
   for(i=2; i<n; i++){
   	  
		 sonuc = n % i;
		 
		if(sonuc==0){
		 	sayac++;
			}
	}

		
		if(sayac==0){
		temp=n;
		}
		if(temp>=n){
			max=temp;
		}
		
		sayac=0;
 }
  printf("%d", max);
	
	
	//Soru 18 Hamza Yorgun
   //30.10.2018
   float  temp , rakam , ortalama = 0 , toplam = 0 , max=-10000000 , min=10000000 , sayi , adet , i=0;
   printf("Kac tane sayi giriceksiniz? :");
   scanf("%f" , &adet);
   while(i<adet){
   	temp=sayi;
	printf("bir sayi giriniz:");
   	scanf("%f" , &sayi);
   	
	toplam = toplam + sayi;
   
   if(sayi>max){
   		max=sayi;
   }
   if(sayi<min){
   		min=sayi;
   }
    i++;
   }
   printf("Girdiginiz en buyuk sayi : %f" , max);
   printf("Girdiginiz en kucuk sayi : %f" , min);
   printf("toplaminiz: %f\n", toplam);
   ortalama = toplam / adet;
   printf("ortalamaniz: %f\n", ortalama);
	
	
  //Soru 19 Hamza Yorgun
  //30.10.2018
  double pi=0.0;
  int  i;
  float j=1;
  for(i=0; i<1000; i++){
  
 
  if(i%2==0){
  	pi = pi + (1/(2*j-1));
  
  }
  
  else{
  	pi = pi - 1/(2*j-1);
  	
  	}
  j++;
  
  
  }
  pi = 4 * pi;
  printf("%lf\n" , pi);
	
	
	//Soru 20) Hamza Yorgun
	//25.10.2018
	double  e , i , carpim=1 , sayi  ;
	
	for(i=1; i<=10000; i++){
		carpim = carpim*i;
		e = e + 1/carpim;
		
	}
	e = 1+e;
    printf("\n%lf" , e);
	
	
	//Soru 21 Hamza Yorgun
   //30.10.2018
   float sonuc , sayi;
   printf("bir sayi giriniz.");
   scanf("%f", &sayi);
   int temp;
  	temp=sayi;
  	sonuc = sayi - temp;
  	printf("%f" , sonuc);
	
	
	//Soru 22 Hamza Yorgun
	//28.10.2018
    int i,j, n;
    printf("bir n degeri giriniz:");
    scanf("%d", &n);
	for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf(" ", i); 
			printf("*");
        }
            printf("\n");
      
    }
  	
	  
    //Soru 23 Hamza Yorgun
    //28.10.2018
   int i,j,n;
   printf("bir n degeri giriniz:");
   scanf("%d", &n);
   for(i=0;i<n;i++){
   	
   	for(j=0; j<=i; j++){
   		printf(" ", i); 
		   printf("*", i);
	   }
   	  printf("\n");
   }
   
   	
  
	
	//Soru 24 Hamza Yorgun
	//28.10.2018
	int i,j, k , n;
   printf("bir n degeri giriniz:");
   scanf("%d", &n);
   for(i=1;i<=n;i++){
   	
   	 for(j=0; j<=i;j++){
   	 	
		printf(" " , i);
		}
	   
	   for(k=n; k>=i; k--){
          	
		   printf("*");
	   
	   }
   	  
		 printf("\n");
        
    }
   
    
	
	//Soru 25 Hamza Yorgun
	//28.10.2018
	int i , j , k , n;
	printf("bir n degeri giriniz:");
	scanf("%d", &n);
	for (i=0; i<=n; i++){
		for(j=n; j>=i; j--){
			printf(" ");
		}
	for(k=0; k< 2*j+1; k++){
	 	printf("*");
	}
		
		printf("\n");
	
	}
	 
	
	
	//Soru 26 Hamza Yorgun
	//28.10.2018
	int  i , j , k , n , temp  ;
	printf("bir n degeri giriniz:");
	scanf("%d", &n);
	
	for (i=0; i<=n; i++){
		for(j=n; j>=i; j--){
			printf(" ");
		}
	for(k=0; k< 2*j+1; k++){
	 	printf("*");
	 	
		}
		temp=k;	
			
			
			printf("\n");
	}
	 
	for (i=0; i<=n; i++){
		
		
		for(j=-1; j<=i; j++){
			printf(" ");
		}
	for(k = temp; k >= 2*j+1; k--){
	 	printf("*");
	 	
		}
			printf("\n");

	}
	
	
	
	//Soru 27 Hamza Yorugn
   //30.10.2018
   int i , j , k , n;
   printf("bir N degeri giriniz:");
   scanf("%d" , &n);
   for(i=0; i<=n; i++){
   	for(j=1; j<=i; j++){
   		printf(" " , i);
   		printf("%d" , i);
	   }
   	printf("\n");
   	
   }
	//Soru 28 Hamza Yorgun
	//30.10.2018
	int giris,i,j;
	printf("bir sayi giriniz:");
	scanf("%d", &giris);
	
	for (i=0;i<=giris;i++){
		for (j=1;j<=i;j++){
			printf("%d\t",j*2);
		}
		
		printf("\n");
	}
	
	//Soru 29 Hamza Yorgun
	//30.10.2018
	int giris,i,j;
	printf("bir sayi giriniz:");
	scanf("%d",&giris);
	
	for (i=giris;i>0;i--){
		for (j=0;j<i;j++){
			printf("%X ",j+10);
		}
		printf("\n");
	}
	
	//Soru 30 Hamza Yorgun
	//30.10.2018
	int giris,i,j;
	printf("bir sayi giriniz:");
	scanf("%d",&giris);
	
	for (i=0;i<=giris;i++){
		for (j=0;j<=i;j++){
			printf("%d ",j*i);
		}
		printf("\n");
	}
	
	//Soru 31 Hamza Yorgun
	//30.10.2018
	int i ,  j , sayi , sonuc  , carpim = 1 , toplam=0;
	printf("bir sayi giriniz:");
	scanf("%d", &sayi);
	for(i=1; i<=sayi; i++){
		sonuc = i % 7;
		if(sonuc==0){
			for (j=1; j<=3; j++) {
			carpim = carpim*i;
			
			
			}
		toplam = toplam + carpim;
		carpim=1;
		
		}
		
		
	}
	printf("7'nin kati olan sayilarin toplami : %d" , toplam );
	
	
	//Soru 32 Hamza Yorgun
	//30.10.2018
	int toplam = 0 , sonuc = 0 , sayi=1;
	
	
	while(sayi!=0){
	printf("bir sayi giriniz:");
	scanf("%d", &sayi);
	sonuc = sayi % 2;
     if(sonuc==0){
     	toplam = toplam+sayi;
	 }
	 }
     	printf("\nGirilen cift sayilarin toplami: %d",toplam);

	
	//Soru 33 Hamza Yorgun
	//30.10.2018
	int i=1 , temp, rakam , sayi;
    printf("5 rakaml� 2'lik tabanada bir sayi giriniz:");
    scanf("%d", &sayi);
    while(i<=5){
    	
    
	rakam = sayi % 2;
	printf("%d\n", rakam);
	sayi = sayi / 10;
		
	temp = rakam;
	i++;
	}
	 
	 if(temp==1){
	 	printf("Even parity.");
	 }
	else {
		printf("Odd parity");
		
	}
		
	
	//Soru 34 Hamza Yorgun
	//30.10.2018
	int sicaklik , basinc;
	printf("basinc degerini giriniz:");
	scanf("%d" , &basinc);
	printf("sicaklik degerini giriniz:");
	scanf("%d" , &sicaklik);
	if(basinc>15){
		if(sicaklik<10){
		
			printf("Snowy");
		}
		else if(sicaklik>=10 && sicaklik <=25){
			printf("Rainy");
		}
		else{
			printf("Open");
		}
	}
	else if (basinc<=15){
		if(sicaklik<15){
		
			printf("Dry");
		}
		else if(sicaklik>=15 && sicaklik <=20){
			printf("Normal");
		}
		else if (sicaklik>20){
			printf("Humid");
		}
	}
	
	
	
	//Soru 35 Hamza Yorgun
  //30.10.2018
  int saat1 , dakika1 , saat2 , dakika2 , sonucsaat , sonucdakika;
  printf("1.saati giriniz:");
  scanf("%d" , &saat1);
  if(saat1>24){
  	printf("Hatali giris");
  }
  printf("1.dakikayi giriniz:");
  scanf("%d" , &dakika1);
  if(dakika1>60){
  	printf("Hatali giris")
  }
  printf("2.saati giriniz:");
  scanf("%d" , &saat2);
  if(saat2>24){
  	printf("Hatali giris");
  }
  printf("2.dakikayi giriniz:");
  scanf("%d" , &dakika2);
  if(dakika2>60){
  	printf("Hatali giris")
  }
  saat1 = saat1*60 + dakika1;
  saat2=  saat2*60 + dakika2 ;
  
  if(saat2>saat1){
  	sonucsaat = saat2-saat1;
  	  dakika2 = sonucsaat % 60;
  	  
	  sonucsaat = sonucsaat /60;
	  printf("Saat : %d / Dakika : %d" , sonucsaat , dakika2);
  }
  else {
  	sonucsaat = saat2-saat1;
  	  dakika1 = sonucsaat % 60;
  	  
	  sonucsaat = sonucsaat /60;
	  printf("Saat : %d / Dakika : %d" , sonucsaat , dakika2);
  }
	
	//Soru 36 Hamza Yorgun
	//30.10.2018
	int sayi, rakam;
   printf("iki basamakli bir sayi giriniz:");
   scanf("%d" , &sayi);
   while(sayi!=0){
   	rakam = sayi % 10;
   	sayi= sayi / 10;
    if(rakam % 2 == 0 || rakam % 4 == 0 || rakam % 6 == 0 || rakam % 8 == 0){
    	printf(" cift ");
	}
	else {
	  printf(" tek ");
	}
    
		
   }
	
	//Soru 37 Hamza Yorgun
	//30.10.2018
	float ortalama= 0 , toplam=0 , sayi , i=1;
	while(i<=10){
		printf("bir sayi giriniz:");
		scanf("%f", &sayi);
		toplam=toplam+sayi;
		
		ortalama=toplam / i;
		
		i++;	
	}
	printf("aritmetik ortalamaniz: %f" , ortalama); 
   
	//Soru 38 Hamza Yorgun
	//30.10.2018
	int i , taban , us , sonuc = 1;
	printf("tabani giriniz:");
	scanf("%d" , &taban);
	printf("usu giriniz:");
	scanf("%d" , &us);
	for(i=0; i<us; i++)
	sonuc=sonuc*taban;
	printf("%d", sonuc);
	
	
	//Soru 39 Hamza Yorgun
	//30.10.2018
	int giris,i,j;
	printf("bir sayi giriniz:");
	scanf("%d",&giris);
	
	for (i=0;i<giris;i++){
		for (j=1;j<=i;j++){
			printf("%d ",j);
		}
		for (j=i+1;j>0;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
    
	  //Soru 40 Hamza Yorgun
	  //30.10.2018
	  int giris,i,j;
	printf("bir sayi giriniz");
	scanf("%d",&giris);
	
	for (i = 0; i <= giris; i++) {
	   
	    for (j=1;j<=i;j++) {
	      printf("%d ",j);
	    }
	    
	    for (j = 0; j < giris - i; j++) {
	        printf("    ");
	    }
	    
	    for (j=i;j>0;j--) {
	      printf("%d ",j);
	    }
	    printf("\n");
	  
	
    
   
}
    
  
  int temp , n , i;
  printf("bir n degeri giriniz:");
  scanf("%d" , &n);
  for(i=1; i<=n; i++){
  	temp=i;
  	printf("%d \n", i);
  	
	  if(i==n){
  		break;
	  }
  	
	  if(temp==i){
  		printf("%d\n" , temp);
	  }
  }
  
  
  
	char harf, j;
	
	for(harf= 'A'; harf<='F'; harf++){
		
		for(j='A'; j<= 'A' + ('F'- harf); j++){
			printf("%c ", j);
		}
		printf("\n");
	}
  return 0;
  */
  //Soru 39 Hamza Yorgun
	//30.10.2018
	int giris,i,j;
	printf("bir sayi giriniz:");
	scanf("%d",&giris);
	
	for (i=0;i<giris;i++){
		for (j=1;j<=i;j++){
			printf("%d ",j);
		}
		for (j=i+1;j>0;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
 
 
   return 0;
}
   





