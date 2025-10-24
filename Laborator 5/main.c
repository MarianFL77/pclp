#include <stdio.h>
#include <stdlib.h>

int main() {
// Ex 1
//
//   int n, countDiv3 = 0, countGreater7 = 0;
//
//   printf("Introduceti numere intregi (se opreste la 0):\n");
//
//   do{
//      scanf("%d", &n);
//      if(n==0) {
//         break;
//      }
//      if (n==0) {
//         countDiv3++;
//      }
//      if (n > 7) {
//         countGreater7++;
//      }
//
//   } while (n != 0);
//
//   printf("Numere divizibile cu 3: %d\n", countDiv3);
//   printf("Numere mai mari decat 7: %d\n", countGreater7);
//
// Ex 2
//
//    int a, b, n, count = 0;
//
//    printf("Introduceti a: ");
//    scanf("%d",&a);
//    printf("Introduceti b: ");
//    scanf("%d", &b);
//
//    if(a > b) {
//        printf("Eroare: a trebuie sa fie mai mic sau egal cu b!\n");
//        printf("Interval corectat: [%d, %d]\n",b,a);
//
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//
//    printf("Introduceti numere (se opreste la 0):\n");
//
//    do {
//        scanf("%d", &n);
//        if (n != 0 && n >= a && n <= b) {
//            count ++;
//        }
//    } while (n != 0);
//    printf("Numere din intervalul [%d, %d]: %d\n", a, b, count);
//
//  Ex 3
//
      int n, i = 0, num, suma = 0;
      while (1) {
        printf("Introduceti n (1-50): ");
        scanf("%d", &n);

        if (n>=1 && n<=50) {
            break;
        } else {
            printf("Eroare: n trebuie sa fie intre 1 si 50!\n");
            }
      }
      printf("Introduceti %d numere intregi:\n", n);
      while (i < n) {
         scanf(num > 0);

         if (num>0) {
            suma+=num;
         }
        i++;
      }
      printf("Suma numerelor pozitive: %d\n", suma);











    return 0;
}
