#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,f;
     float ort;
    printf("arasinav1 notunu giriniz:");
     scanf("%d",&a1);
        printf("arasinav2 notunu giriniz:");
            scanf("%d",&a2);
                printf("final notunu giriniz:");
                    scanf("%d",&f);

            ort=0;

                ort=(a1*0.3+a2*0.2+f*0.5)/3;


                    printf("girilen 3 sinavin ortalamasi=%.2f",ort);

                int i;


            if(i>=0&& i<=39){
            printf("\nnotunuz FF'dir.");
                                    }

           else  if(i>=40&& i<=44){
            printf("\nnotunuz FD'dir.");
 
                                      }

          else   if(i>=45&& i<=49){
            printf("\nnotunuz DD'dir.");
                                       }

          else   if(i>=50&& i<=54){
            printf("\nnotunuz DC'dir.");
                                        }

           else  if(i>=55&& i<=60){
            printf("\nnotunuz CC'dir.");
                                       }

    else  if(i>=61&& i<=69){
            printf("\nnotunuz CB'dir.");
                                      }

          else   if(i>=70&& i<=75){
            printf("\nnotunuz BB'dir.");
                                         }
            else if(i>=76&& i<=84){
            printf("\nnotunuz BA'dir.");
                                  }
           else {
            printf("\nnotunuz AA'dir.");
                       }



 return 0;
 }
