// Bu proje kng14 aittir
// Sorunuz varsa ulanbek.toktogulov@gmail.com uzerinde mail atabilirsiniz.
// This project belongs to kng14
// If you have any questions, you can send an e-mail to ulanbek.toktogulov@gmail.com.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int secenek_at(){
	int yanlis,secenek;
	printf("\tDevam etmek istiyor musunuz Evet-1,Hayir-2: ");
	scanf("%d",&secenek);
	if(secenek==1)
		return 1;
	else if(secenek==2)
		return 0;
}
void vakit_t()
{
	time_t t;
    time(&t);
   //system("clear");
  	 printf("\tTarih: %s",ctime(&t));
  
  
}
void fatura()
{
	printf("%d",(int)sizeof(long long int));
    long long int num;
	int num1,random,yanlis=0,para,makbuz,tel;
	srand(time(NULL));
	do{
	
	printf("\n\tTelefon Numaranizi giriniz: ");
	scanf("%lld",&num);
	
	//printf("%ll",num);
	if(num>1000000000&&num<10000000000){
	
	random=1000+rand()%9000;
	printf("\n\tSifre= %d KANGY_ODEME_SISTEMI Dogrulama Kodunu Giriniz.B001",random);
	printf("\n\tYukaridaki kodu giriniz: ");
	scanf("%d",&num1);
	if(random==num1){
		
	   printf("\n\tPara Yukleyniz:");
	   scanf("%d",&para);
	   makbuz=1000+rand()%9000;
	   printf("\n\t**********Kangy**********");
	   printf("\n\tAgent id 252460");
	   printf("\n\tIHH 25246063749862");
	   printf("\n\t(552)24-22-283");
	   printf("\n\n\n\tAgent id 252460");
	   printf("\n\tMakbuz:%d",makbuz);
	   printf("\n\tYer:Maltepe Mahallesi, Eti Mh.,\n\t Yukselis Sokak, No:5, Ankara\n");
	   vakit_t();
	   printf("\n\tYatirilan Para: %d",para);
	   printf("\n\tKabul edildi: %d",para-5);
	   printf("\n\tKomisyon: %d",5);
	   printf("\n\tTelefon Numarasi: %lld",num);
	   printf("\n\n\n\tDestek Servisi: +90(552) 22-45-265");
	   printf("\n\t*************************\n\n");
	   
	   
}
	else
	{
	
	   printf("\n\tDogrulama Kodunuz Yanlistir!!!");
	   yanlis=1;} 
	   }
	   else{
	   printf("\n\tGirdiginiz numara uygun degildir!!!");
	   yanlis=1;}
	   	
	   }
	   while(yanlis==1);  
}
int greeting() {
	int secim;
	printf("\t=============================================\n");
	printf("\t\tOdeme Sisteme Hos Geldiniz!!!\n");
	printf("\t=============================================\n\n\n");
	printf("\t\tLutfen odeme seklini belirtiniz!!!\n\n");
	printf("\t=============================================\n");
	printf("\t1)Turkcell \t2)Turk Telekom \t3)Vodafone\t\n\n");
	printf("\t4)Electrik \t5)Dogalgaz \t6)Su\n\n");
	printf("\t=============================================\n");
	printf("\tSecim: ");
	scanf("%d",&secim);
	return secim;
	
}
int main(int argc, char *argv[]) {
	int secim,yanlis,secenek;

	
	do{
	secim=greeting();
	
	
	if(secim==1)
	{
	         printf("\n\n\n\n\n\t============Turkcell==============\n\n");
	         printf("\t\tHos geldiniz!!!\n\n");
	         fatura();
	         printf("\tDevam etmek istiyor musunuz Evet-1,Hayir-2: ");
	         scanf("%d",&secenek);
			 if(secenek==1)
			 yanlis=1;
			 else if(secenek==2)
			 return 0;
			 
	}
	else if(secim==2){
		printf("\n\n\n\n\n\t============Turk Telekom ==============\n\n");
	         printf("\t\tHos geldiniz!!!\n\n");
	         fatura();
	        // secenek_at();
	       
	         if(secenek_at()==1)
			 yanlis=1;
			 else 
			 return 0;
	}
	else if(secim==3){
		printf("\n\n\n\n\n\t============Vodafone==============\n\n");
	         printf("\t\tHos geldiniz!!!\n\n");
	         fatura();
	         //secenek_at();
	         if(secenek_at()==1)
			 yanlis=1;
			 else 
			 return 0;
	}
	else if(secim==4){
		printf("\n\n\n\n\n\t============Electrik==============\n\n");
	         printf("\t\tHos geldiniz!!!\n\n");
	         
	        // secenek_at();
	         if(secenek_at()==1)
			 yanlis=1;
			 else 
			 return 0;
	}
	else if(secim==5){
		printf("\n\n\n\n\n\t============Dogalgaz==============\n\n");
	         printf("\t\tHos geldiniz!!!\n\n");
	         
	        // secenek_at();
	         if(secenek_at()==1)
			 yanlis=1;
			 else 
			 return 0;
	}
	else if(secim==6){
		printf("\n\n\n\n\n\t============Su==============\n\n");
	         printf("\t\tHos geldiniz!!!\n\n");
	         
	        // secenek_at();
	         if(secenek_at()==1)
			 yanlis=1;
			 else 
			 return 0;
	}
	else {
	
	printf("\n!!!!! Yanlis sayi girdiniz! Devam etmek istiyor musunuz?(Evet-1/Hayir-2)\n\n\n");
	scanf("%d",&secenek);
			 if(secenek==1)
			 yanlis=1;
			 else if(secenek==2)
			 return 0;}}
	while(yanlis==1);
	
	return 0;
}