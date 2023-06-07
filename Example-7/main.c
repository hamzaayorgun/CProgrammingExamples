#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Soru 1)
typedef struct ucgenler{
	float tabanAlani;
	float yukseklik;
}ucgen;

int ucgenAlani(ucgen a){
	float sonuc;
	sonuc = (a.tabanAlani  * a.yukseklik)/2;
	return sonuc;
	
}
//

//Soru 2)
typedef struct uyeler{
	int yil;
	int ay;
	int gun;
}uye;

int gunFarki(uye o[] , int uzunluk ){
  int i , gun1 , gun2 , fark;
  for(i=0; i<uzunluk; i++){
  		
	  	if(i==0){
			gun1 = (o[i].yil*365)+(o[i].ay*30)+o[i].gun;
		}
		else if(i==1){
			gun2 = (o[i].yil*365)+(o[i].ay*30)+o[i].gun;
		}
  }
  
  if(gun1>gun2){
			fark = gun1-gun2;
			return fark;
		}
		else if(gun2>gun1){
			fark = gun2-gun1;
			return fark;
		}
		else{
			return 0;
		}
}
//

//Soru 3)
typedef struct kitap{
	char KitapAdi[50];
	char yazari[50];
	int sayfaSayisi;
	float fiyati;
	
}Kitap;

//a)
void kitapFonksiyon(Kitap o){
	printf("\nKitap Adi:%s\n" , o.KitapAdi);
	printf("Yazari:%s\n" , o.yazari);
	if(o.sayfaSayisi<100){
		printf("Ince Kitap\n");
	}
	else if(o.sayfaSayisi>=100 && o.sayfaSayisi<500){
		printf("Normal Kitap\n");
	}
	else if(o.sayfaSayisi>=500){
		printf("Kalin Kitap\n");
	}
	printf("%f" , o.fiyati);
}
// a bitis

//b)
int kalinKitapFiyat(Kitap o[] , int uzunluk){
	int i;
	float fiyatToplam;
	for(i=0; i<uzunluk; i++){
		
	if(o[i].sayfaSayisi>=500){
		fiyatToplam += o[i].fiyati;
	}
	}
	
	return fiyatToplam;
}


//Soru 4)
typedef struct saatler{
	int saat;
	int dakika;
	int saniye;
	
}saat;

//a)
void vakitFonksiyon(saat o){
	int saat , dakika , sonuc;
	saat = o.saat*60*60;
	dakika = o.dakika*60;
	sonuc = saat + dakika + o.saniye;
	
	if(sonuc>=18000 && sonuc<37800){
		printf("Sabah");
	}
	else if(sonuc>=37800 && sonuc<57600){
		printf("Oglen");
	}
	else if(sonuc>=57600 && sonuc <79200){
		printf("Aksam");
	}
	else if(sonuc>=79200 ||  sonuc<18000){
		printf("Gece");
	}
	
	
}

//b)
void dakikaFonksiyon(saat o){
	int saat , saniye, sonuc , toplam;
	saat = o.saat*60;
	saniye = o.saniye/60;
	toplam = saat + o.dakika + saniye;
	sonuc = 1440 - toplam;
	printf("%d dakika kaldi." , sonuc);
	
	
}

//c)
int saniyeFonksiyon(saat o1 , saat o2){
	int sonuc;
	
	sonuc = ((o1.saat*60*60) + (o1.dakika*60)+ o1.saniye)  - ((o2.saat*60*60) + (o2.dakika*60)+ o2.saniye);
	return sonuc;
}
//Soru 4 bitiþ -- 

//Soru 5)

typedef struct dikdortgenler{
	float kisaKenar;
	float uzunKenar;
}dikdortgen;

int dikdortgenMaxAlan(dikdortgen o[] , int uzunluk){
	float alan;
	int i, max=-100000;
	for(i=0; i<uzunluk; i++){
		alan = o[i].kisaKenar*o[i].uzunKenar;
		if(alan>max){
			max = alan;
		}
	}
	return max;
	
}
//Soru 6)

	typedef struct elementler{
		int protonSayisi;
		int notronSayisi;
		char sembol[10];
		float erimeNoktasi;
		float kaynamaNoktasi;
	}element;
	
void elementFonksiyon (element e , int sicaklik){
	if(sicaklik<e.erimeNoktasi){
		printf("Kati");
	}
	else if(sicaklik>=e.erimeNoktasi){
		printf("Sivi");	
	}
	else if(sicaklik>=e.kaynamaNoktasi){
		printf("Gaz");
	}
	
}
int elementIzotop(element o1 , element o2){
	if(o1.protonSayisi == o2.protonSayisi && o1.notronSayisi != o2.notronSayisi ){
		return 1;
	}
	else{
		return 0;
	}
}

//Soru 7
typedef struct cikolatalar{
	float sutMiktari;
	float kakaoMiktari;
	float findikMiktari;
}cikolata;

void cikolataFonksiyon(cikolata o){
	float sonuc;
	sonuc = (100 * o.kakaoMiktari) / (o.kakaoMiktari+o.sutMiktari+o.findikMiktari);
	if(sonuc == 0){
		printf("Beyaz cikolata");
	}
	else if(sonuc>0 && sonuc<45){
		printf("Sütlü Cikolata");
	}
	else if(sonuc>=45){
		printf("Bitter Cikolata");
	}
}

int enYogunKakao(cikolata o[] , int uzunluk){
	int  max=-100000 , i , felaket;
	float sonuc;
	for(i=0; i<uzunluk; i++){
		sonuc = (100 * o[i].kakaoMiktari) / (o[i].kakaoMiktari+o[i].sutMiktari+o[i].findikMiktari);
		if(sonuc>max){
			max = sonuc;
			felaket = i;
		}
	}
	
	return o[felaket].findikMiktari;
	
}

// Soru 9)
typedef struct personeller{
	char ad[50];
	char soyad[50];
	int yas;
	char cinsiyet;
	struct tarih{
		int yil;
		int ay;
		int gun;
	}tarih;
	
}personel;

void personelDizisi(personel o1){
	
	printf("%s %s %d %c %d.%d.%d\n" , o1.ad , o1.soyad, o1.yas , o1.cinsiyet, o1.tarih.yil, o1.tarih.ay, o1.tarih.gun);
	
	if(o1.yas<18){
		printf("COCUK");
	}
	else if(o1.yas>=18 && o1.yas<30){
		printf("GENC");
	}
	else if(o1.yas>=30 && o1.yas<45){
		printf("ORTA YASLI");
	}
	else if(o1.yas>=45){
		printf("YASLI");
	}
	
}

int personelYasToplam(personel dizi[] , int uzunluk){
	int toplam=0 , i;
	for(i=0; i<uzunluk; i++){
		toplam += dizi[i].yas;
	}
	
	return toplam;
}

personelCinsiyet(personel dizi[] , int uzunluk){
	int i , erkekToplam=0, kadinToplam=0 , erkekSayac=0 , kadinSayac=0;
	float erkekOrtalama = 0 , kadinOrtalama=0;
	for(i=0; i<uzunluk; i++){
		if(dizi[i].cinsiyet == 'E'){
			erkekToplam += dizi[i].yas;
			erkekSayac++;
		}
		else if(dizi[i].cinsiyet == 'K' ){
			kadinToplam += dizi[i].yas;
			kadinSayac++;
		}
	}
	erkekOrtalama = (float) erkekToplam / erkekSayac;
	kadinOrtalama = (float) kadinToplam / kadinSayac;
	
	
	if(erkekOrtalama>kadinOrtalama){
		return 'E';
	}
	else {
		return 'K';
	}
}





//Soru 10)
typedef struct adresler{
	char il[50];
	char ilce[50];
	char sokak[50];
	int no;
}adres;

void adresFonksiyon(adres o[] , int uzunluk){
	int i;
	fflush(stdin);
	char kullaniciIl[50];
	printf("Bir il giriniz:");
	gets(kullaniciIl);
	for(i=0; i<uzunluk; i++){
		
		if(strcmp(o[i].il, kullaniciIl) == 0){
			printf("%s %s %s %d" , o[i].il , o[i].ilce , o[i].sokak , o[i].no);
		}
	}
	
}

int main(int argc, char *argv[]) {
	
	//Soru 1)
	float sonucDegiskeni;
	ucgen o;
	printf("Taban Alani giriniz:");
	scanf("%f" , &o.tabanAlani);
	printf("Yukseklik giriniz:");
	scanf("%f" , &o.yukseklik);
	sonucDegiskeni  =	ucgenAlani(o);
	printf("%f" , sonucDegiskeni);
	
	//Soru 2)
	uye  o [2] ;
	int i , fark ;
	for(i=0; i<2; i++){
		printf("yil giriniz:");
		scanf("%d" , &o[i].yil);
		printf("ay giriniz:");
		scanf("%d" , &o[i].ay);
		printf("gun giriniz:");
		scanf("%d" , &o[i].gun);
		
	}
	
	fark = gunFarki(o , 2);
	printf("Gunler farki:%d" , fark);
	*/
	
	//Soru 3)
	
	//a)
	Kitap o;
	printf("Kitap adi giriniz:");
	gets(o.KitapAdi);
	printf("Yazari giriniz:");
	gets(o.yazari);
	printf("Sayfa sayisini giriniz:");
	scanf("%d" , &o.sayfaSayisi);
	printf("Fiyatini giriniz:");
	scanf("%f" , &o.fiyati);
	kitapFonksiyon(o);
	
	
	//b)
	
	Kitap a[2];
	int i ;
	float sonuc;
	
	
	for(i=0; i<2; i++){
	
	printf("Kitap adi giriniz:");
	gets(a[i].KitapAdi);
	
	printf("Yazari giriniz:");
	gets(a[i].yazari);
	
	printf("Sayfa sayisini giriniz:");
	scanf("%d" , &a[i].sayfaSayisi);
	
	
	printf("Fiyatini giriniz:");
	scanf("%f" , &a[i].fiyati);
	
	fflush(stdin);
	
	}
	
	sonuc = kalinKitapFiyat(a , 2);
	printf("%f" , sonuc);
	
	
	//Soru 4)
	saat o1 , o2;
	printf("saat giriniz:");
	scanf("%d" , &o1.saat);
	printf("dakika giriniz:");
	scanf("%d" , &o1.dakika);
	printf("saniye giriniz:");
	scanf("%d" , &o1.saniye);
	
	printf("saat giriniz:");
	scanf("%d" , &o2.saat);
	printf("dakika giriniz:");
	scanf("%d" , &o2.dakika);
	printf("saniye giriniz:");
	scanf("%d" , &o2.saniye);
	
	vakitFonksiyon(o1);
	dakikaFonksiyon(o1);
	printf("%d" , saniyeFonksiyon(o1 , o2));
	
	//Soru 5)
	dikdortgen o[2];
	int i;
	for(i=0; i<2; i++){
		printf("Kisa kenari giriniz:");
		scanf("%f" , &o[i].kisaKenar);
		printf("Uzun kenari giriniz:");
		scanf("%f" , &o[i].uzunKenar);
	}
	
	printf("%d" , dikdortgenMaxAlan(o , 2));
	*/
	
	//Soru 6)
	element o, o2;
	float sicaklik;
	printf("Proton sayisi giriniz:");
	scanf("%d" , &o.protonSayisi);
	printf("Notron sayisi giriniz:");
	scanf("%d" , &o.notronSayisi);
	fflush(stdin);
	printf("Sembol giriniz:");
	gets(o.sembol);
	printf("Erime noktasi giriniz:");
	scanf("%f" , &o.erimeNoktasi);
	printf("Kaynama noktasi giriniz:");
	scanf("%f" , &o.kaynamaNoktasi);
	printf("Sicaklik giriniz:");
	scanf("%f" , &sicaklik);
	
	printf("Proton sayisi giriniz:");
	scanf("%d" , &o2.protonSayisi);
	printf("Notron sayisi giriniz:");
	scanf("%d" , &o2.notronSayisi);
	fflush(stdin);
	printf("Sembol giriniz:");
	gets(o2.sembol);
	printf("Erime noktasi giriniz:");
	scanf("%f" , &o2.erimeNoktasi);
	printf("Kaynama noktasi giriniz:");
	scanf("%f" , &o2.kaynamaNoktasi);
	//a)
	elementFonksiyon(o , sicaklik);
	//b)
	printf("%d" , elementIzotop(o ,o2));
	
	//c)
	element o[2];
	int i , max=-1000000 , kutNumara , symbol;
	for(i=0 ; i<2; i++){
	
	printf("Proton sayisi giriniz:");
	scanf("%d" , &o[i].protonSayisi);
	printf("Notron sayisi giriniz:");
	scanf("%d" , &o[i].notronSayisi);
	fflush(stdin);
	printf("Sembol giriniz:");
	gets(o[i].sembol);
	printf("Erime noktasi giriniz:");
	scanf("%f" , &o[i].erimeNoktasi);
	printf("Kaynama noktasi giriniz:");
	scanf("%f" , &o[i].kaynamaNoktasi);
	
	kutNumara = o[i].protonSayisi + o[i].notronSayisi;
	
	if(kutNumara>max){
		symbol = i;
	}
	
	}
	
	printf("%s" , o[symbol].sembol);
	
	//Soru 7
	//a)
	
	cikolata o;
	printf("Kakao miktari giriniz:");
	scanf("%f" , &o.kakaoMiktari);
	printf("Sut miktari giriniz:");
	scanf("%f" , &o.sutMiktari);
	printf("Findik miktari giriniz:");
	scanf("%f" , &o.findikMiktari);
	
	cikolataFonksiyon(o);
	
	//b)
	cikolata o[2];
	int i ;
	float sonuc;
	for(i=0; i<2; i++){
	
	printf("Kakao miktari giriniz:");
	scanf("%f" , &o[i].kakaoMiktari);
	printf("Sut miktari giriniz:");
	scanf("%f" , &o[i].sutMiktari);
	printf("Findik miktari giriniz:");
	scanf("%f" , &o[i].findikMiktari);
	}
	sonuc = enYogunKakao(o , 2);
	printf("%f" , sonuc);
	
	
	//Soru 10)
	
	adres o[4];
	int i;
	for(i=0; i<4; i++){
		printf("Il giriniz:");
		scanf("%s" , o[i].il);
		printf("Ilce giriniz:");
		scanf("%s" , o[i].ilce);
		printf("Sokak giriniz:");
		scanf("%s" , o[i].sokak);
		printf("Numara giriniz");
		scanf("%d" , &o[i].no);
	}
	
	
	adresFonksiyon(o , 4);
	
	
	personel o1 = {"mehmet", "can", 20, 'E' , 1999 , 2, 2 };
	personel o2 = {"kemal", "can", 40, 'E' , 1970, 4, 6 };
	personel o3 = {"hasan", "can", 17, 'E' , 2001, 5, 12 };
	personel o4 = {"hamide", "canli", 50, 'K', 1965, 6, 6 };
	
	personel dizi[] = {o1, o2 ,o3 , o4};
	
	
	
	
	personelDizisi(o1 );
	
	printf("\nYas toplami:%d" , personelYasToplam(dizi , 4));
	
	printf("\n%c" , personelCinsiyet(dizi , 4));
	
	return 0;
}
