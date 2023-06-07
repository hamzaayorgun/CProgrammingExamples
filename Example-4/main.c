#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Soru 1
float virgulSayi(float a , float b){
	float sonuc;
	sonuc = a + b;
	return sonuc;
}
// Soru 2
float ortalama(int a , int b , int c){
	
	float toplam, ortalama;
	toplam = a+b+c;
	ortalama = toplam / 3;
	return ortalama;
	
}
//Soru 3 
int kupHesap(int a){
	
	int kup;
	kup = a*a*a;
	return kup;
	
}

//Soru 4 
int tabanus(int taban , int us){
	
	int carpim=1, i;
	for(i=0; i<us ; i++){
		
		carpim=carpim * taban;
		
	}
	return carpim;
}
//Soru 5 
int maksimum(int sayi1 , int sayi2){
	
	int max;
	if(sayi1>sayi2){
		max=sayi1;
	}
	else {
		max=sayi2;
	}
	return max;
	
	
}

//Soru 6
float minumum(float sayi1 , float sayi2 , float sayi3){
	
	float min;
	if(sayi1<=sayi2 && sayi1<=sayi3 ){
		min=sayi1;
	}
	else if (sayi2<=sayi1 && sayi2<=sayi3) {
		min=sayi2;
	}
	else {
		min=sayi3;
	}
	return min;
}

//Soru 7
float daireAlani(float yaricap){
	float sonuc;
	sonuc = 3.14*(yaricap*yaricap);
	return sonuc;
	
	
}

//Soru 8
float ucgenAlani(float yukseklik , float tabanAlani){
	
	return tabanAlani*yukseklik/2;
	
	
}


//Soru 9
int faktoriyel(int sayi){
	
	int i , carpim=1;
	for(i=sayi; i>=1 ; i--){
		
		carpim=carpim*i;
		
		
	}
	
	return carpim;
}

//Soru 10
int tekcift(int sayi){
	
	if(sayi%2 == 0 ){
		
		sayi=1;
		
		
	}
	else if(sayi%2 !=0 ) {
		
		sayi=-1;
			
	}
	return sayi;
	
}

//Soru 11
float diziOrtalama(float sayilar [] , float uzunluk){
	 int i;
	 float toplam=0 ,ortalama=0;
	for(i=0; i<uzunluk ; i++){
		toplam = toplam + sayilar[i];
		
		}
	ortalama = toplam / uzunluk;	
	return ortalama;
	
}

//Soru 12
int negatifToplam(int dizi [] , int uzunluk){
	int i, toplam=0;
	for(i=0; i<uzunluk; i++){
	
		if(dizi[i]<0){
			toplam = toplam+dizi[i];
			
		}
		
		
	}
	
	return toplam;
	
}

//Soru 13
int ciftSayi(int sayilar [] , int uzunluk){
	int i   ;
	for(i=0; i<uzunluk;i++){
		if(sayilar[i] % 2 == 0){
		printf("%d\n" , sayilar[i]);
		}
	}
}


//Soru 14
int diziKare(int sayilar [] , int uzunluk){
	int i, toplam=0;
	for(i=0; i<uzunluk; i++){
		
		toplam = toplam + (sayilar[i]*sayilar[i]);
	}
	return toplam;
}

//Soru 15
int arananDizi(int dizi[] , int aranan , int uzunluk){
	
	int i;
	for(i=0; i<uzunluk; i++){
		
		if(aranan==dizi[i]){
			return i;
			
		}
		
		
		
	}
	
	return -1;
	
}

//Soru 16
int diziMax(int dizi[] , int uzunluk){
	int i , max;
	max = dizi[0];
	for(i=1; i<uzunluk; i++){
		if(max < dizi[i]){
			max = dizi[i];
		}
	}
	return max;
}
//Soru 17
int asalSayi(int sayi){
	int i;
	if(sayi<2){
		return -1;
	}
	for(i=2; i<sayi; i++){
		
		if(sayi%i==0){
			
			return -1;
		}
		
	}
	
	return 1;
}

//Soru 18
int sayiTersi(int sayi){
	int rakam , tersi=0;
	while(sayi != 0){
		rakam = sayi % 10;
		sayi = sayi / 10;
		tersi = tersi*10 + rakam;
	}
	return tersi;
}
//Soru 19
int sayiRakamToplam(int sayi){
	int rakam , toplam = 0;
	while(sayi != 0){
		rakam = sayi % 10;
		sayi = sayi / 10;
		toplam = toplam + rakam;
	}
	return toplam;
}

//Soru 24
int fibonacciSeries(int nDegeri){
	int sayi1=0 , sayi2=1 , i , temp;
	for(i=0; i<nDegeri; i++){
		
		printf("%d, ", sayi1);
        temp = sayi1 + sayi2 ;
        sayi1 = sayi2;
        sayi2 = temp;
		
		
		
		
	}
}

//Soru 25
int ucgen_olusur_mu(int kenar1, int kenar2, int kenar3){
	if(kenar1+kenar2>kenar3 && kenar1+kenar3>kenar2 && kenar2+kenar3>kenar1 ){
		return 1;
	}
	else{
		return -1;
	}
	
	
}
//Soru 26
float harmonik(int nDegeri){
	float i , toplam=0;
	for(i=1; i<=nDegeri ; i++){
		
		toplam = toplam + 1/i;
		
	}
	return toplam;
	
}

//Soru 27
int tek_rakam_toplami(int sayi){
	int rakam, toplam=0;
	while(sayi!=0){
		rakam = sayi % 10;
		if(rakam%2==1){
			toplam = toplam + rakam;
		}
		sayi = sayi / 10; 
	}
	return toplam;
}

//Soru 28
int ikilikTaban(int sayi){

	int binary = 0 , rakam , kat =1;
	while(sayi> 0){
	rakam= sayi%2;
	binary = binary + rakam*kat;
	sayi /=2;
	kat *= 10;
	}
	return binary;
}
	
//Soru 29
int max_min_fark(int dizi[] , int uzunluk){
	int i,  max , min , maxMinFark;
	max=dizi[0];
	for(i=1; i<uzunluk; i++){
		if(max<dizi[i]){
			max=dizi[i];
		}
	}
	i=0;
	min=dizi[0];
	for(i=0; i<uzunluk; i++){
		if(dizi[i] < min){
			min=dizi[i];
		}
	}
	
		
	maxMinFark = max - min;
	
	return maxMinFark;
}


//Soru 30
int en_buyuk_rakam(int sayi){
	int max=-1 , rakam;
	while(sayi!=0){
		rakam = sayi % 10;
		if(max < rakam){
			max=rakam;
		}
		sayi = sayi/10;
		}
	return max;
}

//Soru 31
int diziAsal(int dizi[] , int uzunluk){
	int sayac=0 , i , j;
	for(i=0; i<uzunluk; i++){
		
		for(j=2; j<dizi[i]; j++){
			if(dizi[i]%j==0 ){
				sayac++;
			}
		}
		if( sayac==0 && dizi[i] > 1){
			printf("%d\n" , dizi[i]);
			
		}
	}
	
	
}

//Soru 33
int rakamlar_esit_mi(int sayi){
	int i , rakam=0 , temp , degisken=0 , sayac=0;
	for(i=10; i<=sayi; i++){
	temp=i;
	
	degisken = temp % 10;
	temp/= 10; 
	while(temp!=0){
	rakam=temp % 10;
	temp/= 10;
	 	if(degisken!=rakam){
	 		sayac++;
			}
	}
	degisken=0;
	rakam=0;
	if(sayac==0){
		printf("%d\n" , i);
	}
	sayac=0;
	
	}
	
}
//Soru 34
int rakamlar_ardisik_mi(int sayi){

	int i , simdiki , temp , onceki , sayac=0;
	for(i=10; i<sayi; i++){
	temp=i;
	onceki = temp %10;
	temp /=10;

	while(temp!=0){
	simdiki = temp % 10;
	temp/=10;	
	
	
	 	if(simdiki != --onceki){
	 		sayac++;
	 		break;
		 }
		 
	}
	if(sayac==0){
		printf("%d\n" , i);
	}
	sayac=0;
	
	}

}

//Soru 36
int mutlakdeger(int sayi){

	if(sayi>=0){
	return sayi;
	}
	else{
	return sayi*(-1);
	}
}
//Soru 37
int liderSayi(int sayi){
	int rakam;
	while(sayi!=0){
		rakam = sayi % 10;
		sayi /= 10;
	}
	return rakam;
}

//Soru 38
int sayilar_arasi_asal(int sayi1 , int sayi2){
	int sayac=0 , i , j;
	for(i=sayi1; i<sayi2 ; i++){
		
		for(j=2 ; j<i ; j++){
			
			if(i%j==0 ){
				sayac++;
			}
			
		}
		if(sayac==0 && i>1){
			printf("%d\n" , i);
		}
		sayac=0;
		
	}
	
}

//Soru 39
int ucgen_piramid(int sayi){
	int i , j , k;
	for(i=0; i<sayi; i++ ){
		for(j=sayi; j>i ; j--){
			printf(" ");
		}
		for(k=0; k<2*i+1 ; k++){
			printf("*");
		}
		printf("\n");
		
	}
	
}



int main(int argc, char *argv[]) {
	
	//Soru 1) Hamza Yorgun
	// 15.11.2018
	float sayi1,sayi2 , toplam;
	printf("virgullu sayi giriniz:");
	scanf("%f" , &sayi1);
	printf("virgullu sayi giriniz:");
	scanf("%f" , &sayi2);
	toplam = virgulSayi(sayi1,sayi2);
	printf("%f" , toplam);
	
	
	//Soru 2)Hamza Yorgun
	// 15.11.2018
	int sayi1,sayi2,sayi3;
	printf("birinci sayiyi giriniz:");
	scanf("%d" , &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d" , &sayi2);
	printf("ucuncu sayiyi giriniz:");
	scanf("%d" , &sayi3);
	printf("%f" , ortalama(sayi1,sayi2,sayi3));
	
	
	//Soru 3)Hamza Yorgun
	// 15.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d", &sayi);
	printf("%d" , kupHesap(sayi));
	
	
	//Soru 4)Hamza Yorgun
	// 15.11.2018
	int taban , us;
	printf("bir taban giriniz:");
	scanf("%d" , &taban);
	printf("bir us giriniz:");
	scanf("%d" , &us);
	printf("%d" , tabanus(taban,us));
	
	
	
	//Soru 5)Hamza Yorgun
	// 15.11.2018
	int sayi1,sayi2;
	printf("birinci sayiyi giriniz:");
	scanf("%d" , &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d" , &sayi2);
	printf("Buyuk sayi:%d" , maksimum(sayi1,sayi2));
	

	
	//Soru 6)Hamza Yorgun
	// 15.11.2018
	float sayi1,sayi2,sayi3;
	printf("birinci sayiyi giriniz:");
	scanf("%f" , &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%f" , &sayi2);
	printf("ucuncu sayiyi giriniz:");
	scanf("%f" , &sayi3);
	printf("Kucuk sayi:%f" , minumum(sayi1,sayi2,sayi3));
	
	
	//Soru 7) Hamza Yorgun
	// 16.11.2018
	float r;
	printf("yaricap giriniz:");
	scanf("%f" , &r);
	printf("%f" , daireAlani(r));
	
	
	
	//Soru 8) Hamza Yorgun
	// 16.11.2018
	float yukseklik , tabanAlani;
	printf("yukseklik giriniz:");
	scanf("%f" , &yukseklik);
	printf("taban alani giriniz:");
	scanf("%f" , &tabanAlani);
	printf("Ucgenin Alani:%f" , ucgenAlani(yukseklik,tabanAlani));
	
	
	//Soru 9) Hamza Yorgun
	// 16.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("faktoriyel:%d" , faktoriyel(sayi));
	
	
	//Soru 10) Hamza Yorgun
	// 16.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("%d" , tekcift(sayi));
	
	
	
	//Soru 11) Hamza Yorgun
	// 16.11.2018
	float  ortalama , sayilar[] = {3,5,6,7,9,11,16};
	ortalama = diziOrtalama(sayilar , 7);
	printf("Ortalama:%f" , ortalama);
	
	
	//Soru 12) Hamza Yorgun
	// 16.11.2018
	int toplam=0 , sayilar [] = {3,5,-7,-8};
	toplam = negatifToplam(sayilar,4);
	printf("%d" , toplam );
	
	
	//Soru 13) Hamza Yorgun
	// 16.11.2018
	int  sayilar [] = {3,5,6,8};
	 ciftSayi(sayilar, 4);
	 
	
	
	//Soru 14) Hamza Yorgun
	// 16.11.2018
	int sayilar[] = {3,5,7,8};
	printf("%d" , diziKare(sayilar,4));
    
	
	//Soru 15) Hamza Yorgun
	// 16.11.2018
	int aranan , dizi[] = {11,32,100,49};
	printf("Aranan degeri giriniz:");
	scanf("%d" , &aranan);
	printf("%d" , arananDizi(dizi , aranan , 4));
	
	
	//Soru 16) Hamza Yorgun
	// 16.11.2018
	int dizi[] = {11,32,100,49};
	printf("%d" , diziMax(dizi , 4));
	
	
	
	//Soru 17) Hamza Yorgun
	// 16.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi );
	printf("%d" , asalSayi(sayi));
	
	
	//Soru 18) Hamza Yorgun
	//16.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("Sayinin tersi:%d" , sayiTersi(sayi));
	
	
	//Soru 19) Hamza Yorgun
	//16.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("Sayinin rakamlarinin toplami:%d" , sayiRakamToplam(sayi));
	
	
	//Soru 20)Hamza Yorgun
	//16.11.2018
	int aralik , i , toplam=0;
	srand(time(NULL)); 
	for(i=0; i<10000;i++){
	aralik = -100 + rand()%200; 
	toplam = toplam + aralik;
	}
	printf("%d" , toplam);
	
	
	//Soru 21) Hamza Yorgun
	//17.11.2018
	int sayac=0 , aralik , ilksayi;
	srand(time(NULL)); // Bunu bir kez kullaniyoruz baslangicta
	ilksayi  = 1 + rand()%100; // Random sayi uretme
	printf("Ilk uretilen sayi%d\n",ilksayi);
	while(ilksayi!=aralik){
		
		aralik=1+rand()%1000;
		
		sayac++;
		
	}
	printf("Son uretilen sayi:%d\n" , aralik);
	printf("%d sayi sonra uretilmistir " , sayac);
	
	
	//Soru 22) Hamza Yorgun
	// 17.11.2018
	int i, aralik , birSayac=0 , ikiSayac=0 , ucSayac=0;
	srand(time(NULL));
	for(i=0; i<10000; i++){
	
	aralik = 1+rand()%3;
	if(aralik==1){
		birSayac++;
	}
	else if(aralik==2){
		ikiSayac++;
	}
	else{
		ucSayac++;
	}
	
	}
	printf("%d kez bir uretilmistir \n %d kez iki uretilmistir \n %d kez uc uretilmistir " , birSayac , ikiSayac , ucSayac);
	
	//Soru 23) Hamza Yorgun
	// 17.11.2018
	int rastgeleIndex , i , dizi [ ] = {1,2,3,4,5,6,7,8,9,10};
	srand(time(NULL));
	for(i = 0; i<10; i++){
     rastgeleIndex = rand()%10;
     rastgeleIndex = dizi[i];
     printf("%d\n" , rastgeleIndex);
	}

	
	
	//Soru 24) Hamza Yorgun
	// 18.11.2018
	int nDegeri;
	printf("bir N degeri giriniz:");
	scanf("%d" , &nDegeri);
	fibonacciSeries(nDegeri);
	
	
	//Soru 25) Hamza Yorgun
	//18.11.2018
	int kenar1,kenar2,kenar3;
	printf("birinci kenari giriniz:");
	scanf("%d" , &kenar1);
	printf("ikinci kenari giriniz:");
	scanf("%d" , &kenar2);
	printf("ucuncu kenari giriniz:");
	scanf("%d" , &kenar3);
	printf("%d" , ucgen_olusur_mu(kenar1,kenar2,kenar3));
	

	
	
	//Soru 26) Hamza Yorgun
	// 18.11.2018
	int nDegeri;
	printf("bir N degeri giriniz:");
	scanf("%d" , &nDegeri);
	printf("%f" , harmonik(nDegeri));
	
		
	//Soru 27) Hamza Yorgun
	// 18.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("%d" , tek_rakam_toplami(sayi));
	
	
	//Soru 28) Hamza Yorgun
	// 18.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("binary karsiliginiz:%d" , ikilikTaban(sayi));
	
	
	//Soru 29) Hamza Yorgun
	// 18.11.2018
	int dizi[] = {3,18,100,-75,-54};
	printf("%d" , max_min_fark(dizi,5));
	
	
	//Soru 30) Hamza Yorgun
	// 18.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("%d" , en_buyuk_rakam(sayi));
	
	
	//Soru 31) Hamza Yorgun
	//18.11.2018
	int dizi[] = {2,3,5,1,8};
	diziAsal(dizi,5);

	
	//Soru 32) Hamza Yorgun
	//18.11.2018
	int rastgele , tahmin=0 , tahminSayac;
	printf("SAYI TAHMINI OYUNU\n----------------------\n");
	srand(time(NULL));
	rastgele = 1+rand()%1000;

	while(rastgele!=tahmin){
		printf("1 ile 1000 Arasindaki sayiyi bulunuz:");
		scanf("%d" , &tahmin);
		if(tahmin<rastgele){
			printf("ARTTIR\n\n");
		}
		else if (tahmin>rastgele){
			printf("AZALT\n");
		}
		tahminSayac++;
	}
	printf("TEBRIKLER\n");
	printf("%d hamlede buldunuz." , tahminSayac);
		
	
	
	//Soru 33) Hamza Yorgun
	// 18.11.2018
	int sayi;
	printf("bir N degeri giriniz:");
	scanf("%d" , &sayi);
	rakamlar_esit_mi(sayi);
	
	
	
	//Soru 34) Hamza Yorgun
	// 18.11.2018
	
	int sayi;
	printf("bir N degeri giriniz:");
	scanf("%d" , &sayi);
	rakamlar_ardisik_mi(sayi);
	
	
	//Soru 35) Hamza Yorgun
	//19.11.2018
	int toplam2=0 , temp ,   rakam , toplam=0 , sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	while(sayi!=0){
		rakam = sayi % 10; 
		sayi /= 10;			
		toplam += rakam;  
		if(toplam>9 && sayi==0){
			sayi=toplam; 
			toplam=0; 
		}
		
	}
 	printf("%d" , toplam);
	
	
	//Soru 36) Hamza Yorgun
	// 19.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" ,  &sayi);
	printf("Mutlak deger:%d" , mutlakdeger(sayi));
	
	
	//Soru 37) Hamza Yorgun
	// 19.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	printf("%d" , liderSayi(sayi));
	
	
	//Soru 38) Hamza Yorgun
	// 19.11.2018
	int sayi1,sayi2;
	printf("birinci sayiyi giriniz:");
	scanf("%d" , &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d" , &sayi2);
	sayilar_arasi_asal(sayi1,sayi2);
	
	
	//Soru 39) Hamza Yorgun
	// 19.11.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	ucgen_piramid(sayi);
	
	
	return 0;
	
}
