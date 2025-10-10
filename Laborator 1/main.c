#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
//    Ex 1
//    printf("Nichita Marian\n");
//    printf("Grupa 3113A\n");
//    printf("Calculatoare\n");


//    Ex 2
//    printf("%-12s %-15s %-10s\n", "Numar Matricol", "Student", "Media");
//    printf("------------------------------------------------------\n");
//
//
//    printf("%-12d %-15s %-2f\n", 111, "Popescu Ioan", 10.00);
//    printf("%-12d %-15s %-2f\n", 2,   "Ionescu Ana", 02.00);
//    printf("%-12d %-15s %-2f\n", 35,  "Popescu Dan", 8.45);
//


//    Ex 3
//    int valoare = 123;
//
//
//    printf("Valoarea in baza 10 (zecimal): %d\n",valoare);
//    printf("Valoarea in baza 8  (octal):   %o\n",valoare);
//    printf("Valoarea in baza 16 (hexa):    %x\n",valoare);
//
//    Ex 4
//    int numar;
//
//    printf("Introdu un numar intreg: ");
//    scanf("%d", &numar);
//    printf("Ai introdus numarul: %d\n", numar);
//
//    Ex 5
//
//      float numar1, numar2;
//
//      printf("Introdu primul numar real: ");
//      scanf("%f",&numar1);
//
//      printf("Introdu al doilea numar real: ");
//      scanf("%f",&numar2);
//
//      printf("Numerele introduse sunt:%.2f si %.2f\n", numar1, numar2);
//
//
//     Ex 6
//
//       int a, b;
//
//       float media;
//
//
//       printf("Introdu primul numar intreg: ");
//       scanf("%d" , &a);
//
//       printf("Introdu al doilea numar intreg: ");
//       scanf("&d" , &b);
//
//       int suma = a + b;
//       media=suma / 2.0;
//
//       printf("Suma numerelor este: %d\n",suma);
//       printf("Media numerelor este: %.2f\n",media);
//
//
//      Ex 7
//
//        float latura, perimetru, aria;
//
//        printf("Introdu latura patratului: ");
//        scanf("%f", &latura);
//
//        perimetru = 4 *latura;
//        aria = latura * latura;
//
//        printf("Perimetrul patratului este: %.2f\n", perimetru);
//        printf("Aria patratului este: %.2f\n",aria);
//
//
//      Ex 8
//
//       float lungime, latime, perimetru, aria;
//
//       printf("Introdu lungimea dreptunghiului: ");
//       scanf("%f" , &lungime);
//
//       printf("Introdu latimea dreptunghiului: ");
//       scanf("%f" , &latime);
//
//       perimetru = 2 * (latime+ lungime);
//       aria = lungime * latime;
//
//       printf("Perimetrul dreptunghiului este: %.2f\n", perimetru);
//       printf("Aria dreptunghiului este: %.2f\n", aria);
//
//
//     Ex 9
//        printf("Introdu laturile triunghiului (a, b, c): ");
//        scanf("%f %f %f", &a, &b, &c);
//
//        if (a + b > c && a + c > b && b + c > a) {
//            float perimetru = a + b + c;
//            float s = perimetru / 2;
//          float aria = sqrt(s * (s - a) * (s - b) * (s - c));
//        printf(" Perimetru triunghiului este: %.2f\n" , perimetru);
//        printf(" Aria triunghiului este: %.2f\n", aria);
//        } else {
//            printf("Laturile introduse nu pot forma un triunghi valid.\n");
//
//     Ex 10
//         double x;
//
//        printf("Introdu un numar real x: ");
//         scanf("%lf", &x);
//
//         double rezultat = fabs(x - 4) + fabs(5 - x);
//         printf("Rezultatul expresiei este: %.2lf\n", rezultat);
//
//       Ex 11
//           double rezultat = 123456.789;
//           printf("Rezultat in notatie stiiintifica este: %e\n", rezultat);
//
//       Ex 12
//
//           int r;
//
//           double lungime, arie;
//
//           printf("Introdu raza cercului (numar intreg):");
//           scanf("&d", &r);
//
//           lungime = 2 * M_PI * r;
//           arie = M_PI * r * r;
//
//           printf("Lungimea cercului este: %.3lf\n", lungime);
//           printf("Aria cercului este: %.3lf\n", arie);
//
//       Ex 13
//
//             char un_caracter = 'a';
//             int un_numar = 2, vector[10] = {5};
//             float un_numar_real = 3.14f;
//             double un_alt_numar_real = 5.654;
//             long int x;
//             long long y;
//
//
//             printf("Dimensiunea lui un_caracter: %zu octeti\n", sizeof(un_caracter));
//             printf("Dimensiunea lui un_numar: %zu octeti\n",sizeof(un_numar));
//             printf("Dimensiunea vectorului vector: %zu octeti\n", sizeof(vector));
//             printf("Dimensiunea unui element din vector: %zu octeti\n", sizeof(vector[0]));
//             printf("Dimensiunea lui un_numar_real: %zu octeti\n", sizeof(un_numar_real));
//             printf("Dimensiunea lui un_alt_numar_real: %zu octeti\n", sizeof(un_alt_numar_real));
//             printf("Dimensiunea lui x(long int): %zu octeti\n", sizeof(x));
//             printf("Dimensiunea lui y(long long): %zu octeti\n", sizeof(y));
//
//        Ex 14
//
//            char student[100];
//            float nota1, nota2, nota3;
//            float media;
//
//            time_t current_time;
//            time (&current_time);
//
//            printf("Introduceti numele studentului: ");
//            fgets(student, sizeof(student), stdin);
//
//         /*   size_t (student);
//            if (len > 0 && student[len -1] == '\n'){
//                student[len -1] = '\0';
//            }
// */
//            printf("Introduceti nota la PCLP: ");
//            scanf("%f", &nota1);
//            printf("Introduceti nota la GAC: ");
//            scanf("%f", &nota2);
//            printf("Introduceti nota la AM: ");
//            scanf("%f",&nota3);
//
//            media= (nota1 + nota2 + nota3) / 3;
//
//            printf("\nCARNET NOTE\n");
//            printf("Data si ora curenta: %s",ctime(&current_time));
//            printf("Student: \"%s\"\n",student);
//            printf("Nr.Crt.\tDisciplina\tNota examen\n");
//           // printf("Disciplina\n");
//           printf("-------------------------------------\n");
//            printf("1.\tPCLP\t\t%.2f\n",nota1);
//          //  printf("PCLP\n");
//            printf("2.\n");
//            printf("3.\n");
//           // printf("GAC\n");
//            printf("AM\n");
//           // printf("%.2f\n",nota1);
//            printf("%.2f\n",nota2);
//            printf("%.2f\n",nota3);
//            printf("Media pentru semestrul I este: %.2f.\n",media);
//
//
//
//
//
//
//
//
//
//
//    return 0;
//
// }
