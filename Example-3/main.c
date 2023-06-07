#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	
	
	/*
	//Soru 1 
	//Hamza Yorgun 6.11.2018
	int   maksimum1 , maksimum2 , i  , dizi [] = {20,-30,-10,65,7,-63 , -200 , 65 , 54 , 3 ,5 , -6 , -8 , -10 , -50 , 40 , 20 , 10 , -7 -65};
	if(	dizi[0] < dizi[1]){
		maksimum1=dizi[1];
		maksimum2=dizi[0];
	}
	
	else if (dizi[1] < dizi[0]) {
		maksimum1=dizi[0]; 
		maksimum2=dizi[1]; 
	}


	for(i=2 ; i<20; i++){
		
			       		
		if(dizi[i] > maksimum2){
			maksimum2= dizi[i];
			//printf("maksimum2:%d\n" , maksimum2);
		}
				        
				    if(maksimum1 < maksimum2){
				    	   
						maksimum2=maksimum1;
				    	maksimum1=dizi[i];
				    	
					}
	}
	printf("%d", maksimum2);
	
	
	//Soru 2 
	//Hamza Yorgun 6.11.2018
	int i , maxMinFarki , max=-10000000000 , min=10000000000000 ,dizi [] = {20,-30,-10,65,7,-63 , -200 , 100 , 54 , 3 ,5 , -6 , -8 , -10 , -50 , 40 , 20 , 10 , -7 -65 };
	for(i<0 ; i<20; i++){
		
		if(dizi[i]>max){
			max=dizi[i];
		} 
		if(dizi[i]<min){
			min=dizi[i];
		}
		
	}
	maxMinFarki= max - min;
	printf("%d" , maxMinFarki);
	
	//Soru 3
	//Hamza Yorgun 7.11.2018
	int maxFark=-100000000, i , fark , dizi [] = {5,-3,9,10,400};
	for(i=0; i<4; i++){
		fark = dizi[i] - dizi[i+1];
		printf("%d\n" , fark);
		if(fark>maxFark){
			maxFark=fark;
		}
	}
	printf("%d" , maxFark);
	
	//Soru 4
	//Hamza Yorgun 7.11.2018
	int sayac , maxFark, i , fark , dizi [] = {20,-30,-10,65,7,-63 , -200 , 100 , 54 , 3 ,5 , -6 , -8 , -10 , -50 , 40 , 20 , 10 , -7 -65};
	for(i=0; i<19; i++){
		
		if(dizi[i]<dizi[i+1]){
			
			sayac++;
			
		}
		
		else {
			printf(" DIZI SIRALI DEGIL");
			break;
		}
	}
	if(sayac==i){
		printf("DIZI SIRALIDIR.");
	}
	
	
	//Soru 5
	//Hamza Yorgun 6.11.2018
	int toplam , ortalama , i , sayac , dizi [] = {20,-30,-10,65,7,-63 , -200 , 100 , 54 , 3 ,5 , -6 , -8 , -10 , -50 , 40 , 20 , 10 , -7 -65 };
	for(i=0; i<20; i++){
		if(dizi[i]%3==0 && dizi[i]%2!=0 ){
			sayac++;
			toplam= toplam + dizi[i];
			ortalama = toplam / sayac;
		}
	
	
			}
	
	printf("3'un kati olup 2'nin kati olmayan sayilarin sayisi :%d\n" , sayac);
	printf("ortalamaniz:%d" , ortalama);
	
	//Soru 6
	//Hamza Yorgun 6.11.2018
	int toplam , i , j , ortalama, dizi [] = {20,-30,-10,65,7,-63 , -200 , 100 , 54 , 3 ,5 , -6 , -8 , -10 , -50 , 40 , 20 , 10 , -7 -65};
	for(i=0; i<20; i++){
		toplam = toplam + dizi[i];
		ortalama = toplam / 20;
	}
	printf("ortalamaniz:%d\n" , ortalama);
	
	for(j=0; j<20; j++){
		
		if(dizi[j] < ortalama ){
			printf("%d\n" , dizi[j]);
			
		}
	}
	
	
	//Soru 7
	//Hamza Yorgun 6.11.2018
	int sayac , sag=0 , sol=19 , dizi[] = {1,2,3,4,5,6 , 7 , 8 , 9 , 11 , 11 ,  9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 ,1};
    while(sag<sol){
	
	
	
	if(dizi[sag]==dizi[sol]){
    	
		sayac++;
		}
	sag++;
	sol--;
	}
			if(sayac==10){
	
	printf("palindrom dizidir\n");
	}
	else {
 		
		 printf("Palindrom dizi degildir.\n");
	 }
	
	//Soru 8
	//Hamza Yorgun 6.11.2018
	int  sifiraYakin=100000000000 , toplam=0 , i  , dizi [] = {20,-30,-10,65,7,-63 , -200 , 100 , 54 , 3 ,5 , -6 , -8 , -10 , -50 , 40 , 20 , 10 , -7 -65};
	for(i=0;  i<20; i++){
		
		if(dizi[i]<0){
			toplam = (dizi[i])*-1;
		}
		if(dizi[i]>0) {
			toplam = dizi[i];
		}
		
		if(toplam<sifiraYakin){
			sifiraYakin=toplam;
		}
		
	}
	printf("%d", sifiraYakin);
	
	//Soru 9 
	//Hamza Yorgun 7.11.2018
	int  sayac , max=100 , i  , dizi [] = {20,-30,-10,65,7,-63 , -200 , 100 , 54 , 3 ,5 , -6 , -8 , -10 , -50 , 40 , 20 , 10 , -7 -65};
	for(i=0; i<20; i++){
		
		if(dizi[i]==max){
			sayac++;
			
		}
		
		
	}
	printf("%d kere tekrar etmistir" , sayac);
	
		//Soru 10
	//Hamza Yorgun 7.11.2018
	int temp ,rakam=0 , sayi , tersi=0  , max=-10000000 , i  , dizi [] = {20,-30,-10,65,7,-63 , -200 , 100 , 54 , 3 ,5 , -6 , -8 , -10 , -50 , 40 , 20 , 10 , -7 -65};
	for(i=0; i<20; i++){
		sayi = dizi[i];
		
		while(sayi!=0){
		
		rakam = sayi % 10;
		tersi = tersi*10 + rakam;
		
		if(sayi!=0){
		
		sayi = sayi / 10;
		rakam = sayi % 10;
		tersi = tersi*10 + rakam;
		}
		if(sayi!=0){
		
		sayi = sayi / 10;
		rakam = sayi % 10;
		tersi = tersi*10 + rakam;
		}
		
		}
		
		temp=tersi;
		tersi=0;
		if(temp>max){
			max=temp;
		}
		
		
	}
	printf("%d\n" , max);
	
	//Soru 15
	//Hamza Yorgun 6.11.2018
	
	int notharfi;
	printf("bir not harfi giriniz:");
	scanf("%c" , &notharfi);
	switch (notharfi){
		case 'A' :  printf("Excellent"); break;
		case 'B' :  printf("Good"); break; 
		case 'C' :  printf("Avarage"); break;
		case 'D' :  printf("Low"); break;
		case 'E' :  printf("Very Low"); break;
	}
	
	//Soru 16
	//Hamza Yorgun 6.11.2018
	int islem;
	printf("notunuz 100 ve 90 arasinda ise 1 giriniz:\n notunuz 89 ve 80 arasindaysa 2 giriniz:\n notunuz 79 ve 70 arasindaysa 3 giriniz:\n notunuz 69 ve 60 arasindaysa 4 giriniz: \nnotunuz 59 ve 50 arasindaysa 5 giriniz\n notunuz 50'nin altindaysa 6 giriniz:");
	printf("\nislem seciniz:");
	scanf("%d" , &islem);
	switch(islem){
		case 1: printf("AA"); break;
		case 2: printf("BA"); break;
		case 3: printf("BB"); break;
		case 4: printf("CB"); break;
		case 5: printf("CC"); break;
		case 6: printf("DD"); break;
		
	}
	
	//Soru 17
	//Hamza Yorgun 6.11.2018
	int notharfi;
	printf("bir not harfi giriniz:");
	scanf("%c" , &notharfi);
	switch (notharfi){
		case 'A' :  
	    case 'B' :
	    case 'C' :  printf("Gecer"); break;
		case 'D' :  
		case 'E' :  printf("Kalir"); break;
	
		
	}
	
	//Soru 18
	//Hamza Yorgun 6.11.2018
	int sayac , n , i , toplam = 0 , ortalama = 0;
	printf("bir n degeri giriniz:");
	scanf("%d" , &n);
	for(i=1; i<n; i++){
		if(i%11==0){
			toplam=toplam+i;
			sayac++;
			
			
		}
		
		
		
	}
	ortalama = toplam / sayac;
	printf("%d" , ortalama);
	
	
	//Soru 19
	//Hamza Yorgun 6.11.2018
	int nkare , n , x;
	printf("bir x degeri giriniz:");
	scanf("%d", &x);
	for(n=1; n<x; n++){
		nkare=n*n;
		if(nkare>x){
			break;
			
		}
		
	}
	printf("%d" , n);
	
	//Soru 20
	//Hamza Yorgun 6.11.2018
	int n , x , nkup;
	printf("bir x degeri giriniz:");
	scanf("%d" , &x);
	for(n=1; n<x; n++){
		nkup=n*n*n;
		if(nkup<x){
			
		}
		if(nkup>x){
			n--;
			break;
		}
		
		
	}
	printf("%d" , n);
	
	//Soru 21
	//Hamza Yorgun 6.11.2018
	int rakam , sayi , max=-1000000000;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	while(sayi!=0){
		rakam = sayi % 10;
		sayi = sayi / 10;
		if(max<rakam){
		   max=rakam;
		}
		
	}
	printf("%d" , max);
	
	
	//Soru 22
	//Hamza Yorgun 6.11.2018
	int i , j , sayac , terssayac , rakam , sayi , tersi;
	for(i=1; i<1000; i++){
		for(j=2; j<i; j++){
			if(i%j==0){
				sayac++;
			}
	       sayi=i;
		   while(sayi!=0){
	       	rakam = sayi % 10;
	       	sayi = sayi / 10;
	       	tersi = tersi*10 + rakam;
		   	
				}
		   		
				if(tersi%j==0){
				terssayac++;
		   }		 
		}
		
		if(i!=1){
		
		if(sayac==0 && terssayac==0){
			 	printf("%d\n" , i  );
			 	}
		}
			sayac=0;
		 	terssayac=0;
		 	tersi=0;
	}
	
	//Soru 23
	//Hamza Yorgun 6.11.2018
	int n , i , j , k;
	printf("bir n  degeri giriniz:");
	scanf("%d" , &n );
	for(i=0 ; i<n ; i++){
		for(j=0; j<i;j++){
		   printf(" ", j);
		}
			for(k=0; k<1; k++){
			printf("*");
			}
			printf("\n");
	}
	
	
	//Soru 24
	//Hamza Yorgun 6.11.2018
	int sayi2 , sayi1 , islem , toplam=0 , cikarma=0 , carpma=0 , bolme=0;
	printf("HOSGELDINIZ!\n");
	
	    while(islem!=0){
		
		printf("\n1) Toplama\n");
		printf("1) Cikarma\n");
		printf("1) Carpma\n");
		printf("1) Bolme\n");
		printf("\n<Cikmak istiyorsaniz 0 giriniz>\n");
		printf("\nLutfen yapmak istediginiz islemi girin:");
		scanf("%d" , &islem);
		if(islem==0){
			printf("IYI GUNLER DILERIZ..."); 
		    break;
			
		}
		
		printf("Lutfen ilk sayiyi giriniz:");
		scanf("%d" , &sayi1);
		printf("Lutfen ikinci sayiyi giriniz:");
		scanf("%d" , &sayi2);
		
		if(islem==1){
			toplam = sayi1+sayi2;
			printf("Sonuc:%d\n" , toplam);
		}
		
		else if(islem==2){
			cikarma = sayi1-sayi2;
			printf("Sonuc:%d\n" , cikarma);

		}
		
		else if (islem==3){
			carpma = sayi1*sayi2;
			printf("Sonuc:%d\n" , carpma);
		}
		else if(islem==4){
			bolme = sayi1/sayi2;
			printf("Sonuc:%d\n" , bolme);
		}
		
		printf("---------------------------");
	}
	
	//Soru 25
	//Hamza Yorgun 6.11.2018
	int n, i , j , k;
	printf("bir n degeri giriniz:");
	scanf("%d" , &n);
	for(i=0; i<n; i++){
		if(i%2!=0){
			for(j=0; j<1;j++){
				printf(" " , j);
			}
		}
			for(k=0; k<n; k++){
				printf("#");
			}
		 printf("\n");
	}
	
	//Soru 28
	//Hamza Yorgun 6.11.2018
	int i , j , k , a=0 ,  n;
	printf("bir n degeri giriniz:");
	scanf("%d" , &n);
	for(i=n; i>=1 ; i--){
		for(k=0; k<a; k++){
			printf(" " , k);
		}
		
		for(j=i; j>=1; j--){
			printf("%d" , j);
			
		}
		printf("\n");
		a++;
	}
	
	//Soru 29
	//Hamza Yorgun 6.11.2018
	int i,j,n;
	printf("bir n degeri giriniz:");
	scanf("%d" , &n);
	for(i=1; i<=n; i++){
		for(j=i; j>=1; j--){
		 printf("%d " , j);
		 printf(", ");
		}
		printf("\n");
	}	
	
	//Soru 31
	//Hamza Yorgun 7.11.2018
	int i,j,k, a,b,c,n;
	printf("bir n degeri giriniz:");
	scanf("%d" , &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf(" ");
	}
		for(k=1; k<=1; k++){
			printf("v" , k);
		}
		printf("\t");
		for(b=n; b>=i; b--){
				printf(" ");
			}
		
		for(c=1; c<=1; c++){
			
			printf("v" , c);
		}
		
		printf("\n");
		}
	
	//Soru 32
	//Hamza Yorugn 7.11.2018
	int i, sayi,bolum;
	printf("bir sayi giriniz:");
	scanf("%d", &sayi);
	for(i=1; i<=sayi; i++){
		
		if(sayi%i==0){
			printf("asal carpanlari:%d\n", i);
		}
		
		
	}	
	
	//Soru 33
	int i, j , k , n , a , b;
	printf("bir n degeri giriniz:");
	scanf("%d" , &n);
	for(i=1; i<=n; i++){
		for(j=n; j>i ; j--){
			printf(" ", j);
		}
		
		int kat=1;
		for(k=1; k<=i; k++){
		
			printf("%d" , kat);
			
			kat=2*kat;
		
		}
			
		printf("\n");	
			
			
		}  
		
		for(i=1; i<=n; i++){
		for(j=n; j>i ; j--){
			printf(" ");
		}
		
		int kat=1;
		for(k=1; k<=i; k++){
			printf("\t");
			printf("%d" , kat);
			
			kat=2*kat;
		
		}
		printf("\n");
	
}
	

	
	
	
	return 0;
	
}
