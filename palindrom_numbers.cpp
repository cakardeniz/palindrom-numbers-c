
#include <stdio.h>
#include <stdlib.h>


int
main ()
{

    // 1.Adim polindorm hesaplama
    // 2.Adim dizileri olustur. Polindorm non-polindorm dizi ok.
    // En büyük polindormu bul.


  int i, sonuc, kalan, a;
  int sayilar[10] = { 4, 11, 23, 54, 7777, 36, 89, 101, 3003, 4554 };
  int polindormDizi[6] = {};
  int notPolinDizi[4] = {};
  int y=0; 
  int z=0;

  // Polindorm ve Non-Polindorm Sayilarin bulunup, dizilerine atanmasi
  for (i = 0; i < 10; i++)
  {
      a = sayilar[i];
      sonuc = 0;
      while (a > 0)
      {
    
      kalan = a % 10;
      sonuc = sonuc * 10 + kalan;
      a /= 10;
      }
     
      if (sayilar[i] == sonuc)
    {
        polindormDizi[y] = sayilar[i];
        y++;
       //printf ("%d sayisi palindrom sayi \n", sayilar[i]);
    }

      else
    {   
    
       notPolinDizi[z] = sayilar[i];
       z++;
       //printf ("%d sayisi palindrom sayi degil \n", sayilar[i]);
    }
      
  }
   
   // Polindorm ve Non-Polindorm Dizilerinin Ekrana bastirilmasi.
   
    printf("Polindorm Dizisi : ");
	for(int x=0;x<6;x++){
		printf("%d,",polindormDizi[x]);
	}
	
    printf("\nnon-Polindorm Dizisi : ");
	for(int p=0;p<4;p++){
		printf("%d,",notPolinDizi[p]);
	}	
	
	// En büyük polindorm sayi bulma.
	
	int loop,largest;
	
	largest = polindormDizi[0];
	for(loop = 1;loop<6;loop++){
		if( largest < polindormDizi[loop])
			largest = polindormDizi[loop];
	}
	
	printf("\nEn buyuk Polindorm Sayi :  %d", largest);  
	
  return 0;
}

