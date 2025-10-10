#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846
int main() {
//
//    EX 1
//
//
//  int a, b;
//  printf("introdu doua numere: ");
//    scanf("%d %d", &a, &b);
//
//    printf("Maximul dintre  %d si %d este: %d\n", a, b, (a > b) ? a : b);
//
//
//   EX 2
//     float numar;
//
//     printf("Introduceti un numar: ");
//     scanf("%f", &numar);
//
//     if (numar > 0) {
//          printf("Numarul este pozitiv. \n");
//    } else if (numar < 0) {
//          printf ("Numarul este negativ. \n");
//    } else {
//          printf("Numarul este zero. \n");
//    }
//   Ex 3
//      int numar;
//
//      printf("Introduceti un numar intreg: ");
//      scanf("%d", &numar);
//
//      if (numar % 2 == 0) {
//        printf("Numarul este par. \n");
//        } else {
//        printf("Numarul este impar. \n");
//        }
//
//   Ex 4
//
//
//           float x;
//
//           printf("Introduceti un numar real (raza sferei): ");
//           scanf("%f", &x);
//
//           if (x > 0) {
//            float volum = (4.0 / 3.0) * PI * pow(x, 3);
//            float aria = 4 * PI * pow(x, 2);
//
//            printf("Volumul sferei este: %.2f\n", volum);
//            printf("Aria sferei este: %.2f\n", aria);
//           } else {
//               printf("Numarul introdus nu poate fi o raza valida (trebuie sa fie pozitiv).\n");
//           }
//
//   Ex 5
//
//          int a, b;
//
//          printf("Introduceti primul numar intreg: ");
//          scanf("%d", &a);
//
//          printf("Introduceti al doilea numar intreg: ");
//          scanf("%d", &b);
//
//          if (a > b) {
//            printf("Maximul este: %d\n", a);
//            printf("minimul este: %d\n", b);
//          } else if (b > a) {
//              printf("Maximul este: %d\n", b);
//              printf("Minimul este: %d\n", a);
//          } else {
//              printf("Ambele numere sunt egale: %d\n", a);
//}
//
//      Ex 6
//
//        float numar, a, b;
//
//        printf("Introduceti un numar real: ");
//        scanf("%f", &numar);
//
//        printf("Introduceti capatul stang al intervalului: ");
//        scanf("%f", &a);
//
//        printf("Introduceti capatul drept al intervalului: ");
//        scanf("%f", &b);
//
//        if (a>b) {
//            float temp=a;
//            a=b;
//            b=temp;
//        }
//        if (numar >= a && numar <=b ) {
//            printf("Numarul %.2f apartine intervalului [%.2f, %.2f].\n", numar, a, b);
//        } else {
//            printf("Numarul %.2f NU apartine intervalului [%.2f, %.2f].\n", numar, a, b);
//        }
//
//     Ex 7
//         float a, b, x;
//
//         printf("Rezolvam ecuatia de forma ax + b = 0\n");
//         printf("Introduceti coeficientul a: ");
//         scanf("%f", &a);
//         printf("Introduceti coeficientul b: ");
//         scanf("%f", &b);
//
//         if (a !=0) {
//            x=-b/a;
//            printf("Solutia ecuatiei este: x= %.2f\n", x);
//         } else {
//            if(b==0){
//               printf("Ecuatia are o infinitate de solutii (0x + 0 = 0).\n");
//            } else {
//               printf("Ecuatianu are solutii (0x + b = 0 cu b != 0).\n");
//
//            }
//         }
//      Ex 8
//
//         float a, b, c;
//         float delta, x1, x2;
//
//         printf("Rezolvam ecuatia de forma ax^2 + bx + c = 0\n");
//         printf("Introduceti coeficientul a: ");
//         scanf("%f", &a);
//         printf("Introduceti coeficientul b: ");
//         scanf("%f", &b);
//         printf("Introduceti coeficientul c: ");
//         scanf("%f", &c);
//
//         if (a==0) {
//            if (b !=0){
//                float x = -c / b;
//                printf("Ecuatia este de gradul I si are solutia: x=%.2f\n",x);
//            } else if (c==0) {
//                printf("Ecuatia are o infinitate de solutii (0=0).\n");
//            } else {
//                printf("Ecuatia nu are solutii (0x+0x+c=0 cu c != 0). \n");
//            }
//         } else {
//             delta = b * b - 4 * a * c;
//
//             if (delta > 0) {
//                x1 = (-b + sqrt(delta)) / (2 * a);
//                x2 = (-b - sqrt (delta)) / (2 * a);
//                printf("Ecuatia are doua solutii reale distincte:\n");
//                printf("x1=%.2f\n", x1);
//                printf("x2=%.2f\n", x2);
//             } else if (delta == 0) {
//                x1 = -b / (2 * a);
//                printf("Ecuatia are o solutie reala dubla: x = %.2f\n", x1);
//             } else {
//                float parteReala = -b / (2 * a);
//                float parteImaginara = sqrt (-delta) / (2 * a);
//                printf("Ecuatia are doua solutii complexe:\n");
//                printf("x1 = %.2f + %.2fi\n", parteReala, parteImaginara);
//                printf("x2 = %.2f - %.2fi\n", parteReala, parteImaginara);
//             }
//         }
//
//       Ex 9
//
//            double a, b, c, temp;
//
//            printf("Introdu trei numere: ");
//            if(scanf("%lf %lf %lf", &a, &b, &c) !=3);
//
//            if (a > b) {temp = a; a = b; b = temp;}
//
//            if (b > c) {temp = b; b = c; c = temp;}
//
//            if (a > b) {temp = a; a = b; b = temp;}
//
//            printf("Minim: %.2lf\n", a);
//            printf("Maxim: %.2lf\n", c);
//            printf("Ordine crescatoare: %.2lf %.2lf %.2lf\n", a, b, c);
//
//        Ex 10
             int a, b, E;

             printf("Introduceti a si b: ");
             scanf("%d %d", &a, &b);

             if (a>=10)
                E=2*a-2*b;
             else if (a> -3 && a<10)
                E=a*b;
             else
                E=5;
             printf("E = %d\n", E);


    return 0;

}
