#include <stdio.h>
#include <stdlib.h>

int main() {
//   Ex 1.1
//
//    int x, N;
//
//    printf("Dati valoarea lui N: ");
//    scanf("%d", &N);
//
//    do {
//        printf("\nDati o valoare lui x: ");
//        scanf("%d", &x);
//    } while (x < 0 || x > N);
//
//
//   Ex 1.2
//
//
//     int x, N;
//
//        printf("Dati valoarea lui N: ");
//        scanf("%d", &N);
//
//     do {
//        printf("\nDati o valoare lui x: ");
//        scanf("%d", &x);
//     } while (x < 0 || x > N);
//
//   Ex 1.3
//
//
//    int x;
//
//    while (1)
//        scanf("%d", &x);
//        printf("Ati tastat: %d\n", x);
//        if (x == 0)
//            break;
//
//   Ex 1.4
//
//
//    int i, x, N, pare = 0;
//
//    printf("Dati valoarea lui N: ");
//    scanf("%d", &N);
//
//    for (i = 0; i < N; i++)
//        {
//        scanf("%d", &x);
//        if ((x % 2) != 0)
//            continue;
//        pare++;
//     }
//
//    printf("Sunt %d numere pare si %d impare.\n", pare, N - pare);
//
//
//    Ex 2
//
//            int N;
//            long long factorial = 1;
//
//            printf("Introduceți N: ");
//            scanf("%d", &N);
//
//            if (N < 0) {
//                printf("Eroare: Factorialul nu este definit pentru numere negative!\n");
//                return 1;
//                }
//
//        for (int i = 1; i <= N; i++) {
//
//            if (factorial > LLONG_MAX / i) {
//                printf("Eroare: Overflow! N=%d este prea mare.\n", N);
//                return 1;
//            }
//            factorial *= i;
//        }
//            printf("%d! = %lld\n", N, factorial);
//
//
//      Ex 3
//
//            int numar, suma = 0, copie;
//
//            printf("Introduceti un numar natural: ");
//            scanf("%d", &numar);
//
//            if (numar < 0) {
//                printf("Eroare:Introduceti un numar natural (pozitiv)!\n");
//                return 1;
//            }
//            copie = numar;
//            while (numar > 0) {
//                suma += numar % 10;
//                numar /=10;
//            }
//            printf("Suma cifrelor numarului %d este: %d\n", copie, suma);
//
//     Ex 4
//
//           int numar, suma = 0;
//
//           printf("Introduceti un sir de numere (se termina cu 0):\n");
//
//           do {
//               scanf("%d", &numar);
//               suma += numar;
//           } while (numar != 0);
//
//           printf("Suma numerelor este: %d\n", suma);
//
//     Ex 5
//
//        int n;
//
//        printf("Introduceti un numar natural n: ");
//        scanf("%d", &n);
//
//        if(n < 0) {
//            n = -n;
//        }
//
//        int cifraMaxima = 0;
//
//        while(n > 0) {
//            int cifra = n % 10;
//            if (cifra > cifraMaxima) {
//                cifraMaxima = cifra;
//        }
//            n = n / 10;
//        }
//        printf("Cea mai mare cifra este: %d\n", cifraMaxima);
//
//     Ex 6
//
//        int n;
//
//        printf("Introduceti un numar n: ");
//        scanf("%d", &n);
//
//        if (n < 0) {
//            n =- n;
//        }
//        int cifraCurenta, cifraAnterioara;
//        int strictCrescator = 1;
//
//        cifraAnterioara = n % 10;
//        n = n / 10;
//
//        while(n > 0) {
//            cifraCurenta = n % 10;
//
//            if (cifraCurenta >= cifraAnterioara) {
//                strictCrescator = 0;
//                break;
//            }
//            cifraAnterioara = cifraCurenta;
//            n = n / 10;
//        }
//        if(strictCrescator) {
//            printf("DA\n");
//        } else {
//            printf("NU\n");
//        }
//
//    Ex 7
//
//        int n, i;
//        long long S = 0, P = 1;
//
//        printf ("n = ");
//        scanf("%d", &n);
//
//        for(i=1; i<=n; i++) {
//            P = P * i;
//            S = S + P;
//        }
//        printf("Suma este: %11d\n", S);
//
//    Ex 8
//
//        int n, c;
//        int S = 0;
//
//        printf("n = ");
//        scanf("%d", &n);
//
//        while (n > 0)
//        {
//            c = n % 10;
//            S = S + c * c;
//            n = n / 10;
//        }
//        printf("Suma patratelor cifrelor este: %d\n", S);
//
//     Ex 9
//
//        int n, c, pare = 0, impare = 0;
//
//        printf("n = ");
//        scanf("%d", &n);
//
//        while (n > 0) {
//            c = n % 10;
//            if(c % 2 == 0)
//                pare++;
//            else
//                impare++;
//            n = n / 10;
//        }
//        printf("Cifre pare:%d\n", pare);
//        printf("Cifre impare:%d\n",impare);
//
//     Ex 10
//
//        int n, i;
//        int S1 = 0, S2 = 0, S3 = 0;
//
//        printf("n = ");
//        scanf("%d", &n);
//
//        for(i = 1; i <= n; i += 2)
//            S1 +=i;
//
//        for(i = 2; i <=n; i += 2)
//            S2 +=i;
//
//        for(i = 1; i <=n; i +=3)
//            S3 +=i;
//
//        printf("a) S1 = %d\n", S1);
//        printf("b) S2 = %d\n", S2);
//        printf("c) S3 = %d\n", S3);
//
//    Ex 11
//
//        int n, x, S=0;
//
//        printf("Introdu numarul de valori n: ");
//        scanf("%d", &n);
//
//        for(x = 1; x <=n; x++)
//        {
//            printf("Numarul %d: ", x);
//            scanf("%d", &x);
//
//            if(x % 2 == 0)
//                S += x;
//        }
//        printf("Suma numerelor pare este: %d\n", S);
//
//    Ex 12
//
//        int n;
//
//        printf("Introduceti numarul de elemente: ");
//        scanf("%d", &n);
//
//        int produs = 1;
//        int suma = 0;
//        int numar;
//        int exista_pozitive = 0;
//        int exista_negative = 0;
//
//        printf("Introduceti %d numere intregi:\n", n);
//
//        for(n = 0; n < n; n++)
//        {
//            scanf("%d", &numar);
//
//            if(numar > 0)
//            {
//               produs *= numar;
//               exista_pozitive = 1;
//            }
//            else if(numar < 0)
//                suma += numar;
//                exista_negative = 1;
//        }
//
//        printf("Produsul numerelor pozitive: ");
//        if(exista_pozitive)
//        {
//            printf("%d\n", produs);
//        }
//        else
//        {
//            printf("Nu exista numere pozitive\n");
//        }
//
//        printf("Suma numerelor negative: ");
//        if(exista_negative)
//        {
//            printf("%d\n", suma);
//        }
//        else
//        {
//            printf("Nu exista numere negative: ");
//        }
//
//
//     Ex 13
//
//        int n, numar;
//        int count_pozitive = 0;
//
//        printf("Introduceti numarul de elemente: ");
//        scanf("%d", &n);
//
//        printf("Introduceti %d numere intregi:\n", n);
//
//        for( int i = 0; i < n; i++)
//        {
//            scanf("%d", &numar);
//
//            if(numar > 0)
//            {
//                count_pozitive++;
//           }
//        }
//        printf("Numarul de valori pozitive citite: %d\n", count_pozitive);
//
//
//      Ex 14
//
//          int n, numar;
//          int count_rest3 = 0;
//
//          printf("Introduceti numarul de elemente: ");
//          scanf("%d", &n);
//
//          if(n <= 0) {
//            printf("Numarul de elemente trebuie sa fie pozitiv!\n");
//            return 1;
//          }
//          printf("Introduceti %d numere intregi:\n", n);
//
//          for (int i=0; i<n; i++) {
//            scanf("%d", &numar);
//               if(numar % 5==3 || numar % 5==-2) {
//                count_rest3++;
//               }
//          }
//          if (count_rest3==0) {
//              printf("Nu au fost citite numere care au dau restul 3 la impartirea cu 5.\n ");
//          } else {
//              printf("Numarul de valori care dau restul 3 la impartirea cu 5: %d\n", count_rest3);
//          }
//
//     Ex  15
//
//        int n, numar;
//        int suma_pare = 0;
//        int count_pare = 0;
//
//        printf("Introduceti numarul de elemente: ");
//        scanf("%d", &n);
//
//        if(n <= 0)
//        {
//            printf("Numarul de elemente trebuie sa fie pozitiv!\n");
//            return 1;
//        }
//
//        printf("Introduceti %d numere intregi:\n", n);
//
//        for(int i = 0; i < n; i++)
//        {
//            scanf("%d", &numar);
//
//            if(numar % 2 == 0)
//            {
//                suma_pare += numar;
//                count_pare++;
//            }
//        }
//        if(count_pare > 0)
//        {
//            float media = (float)suma_pare / count_pare;
//            printf("S-au gasit %d numere pare.\n", count_pare);
//            printf("Suma numerelor pare: %d\n", suma_pare);
//            printf("Media aritmetica a numerelor pare: %.2f\n", media);
//        }
//        else
//        {
//            printf("Nu au fost citite numere pare.\n");
//        }
//
//      Ex 16
//
//        int n;
//
//        printf("Introduceti numarul de termeni: ");
//        scanf("%d", &n);
//
//        if(n <= 0)
//        {
//            printf("Numarul de termeni trebuie sa fie pozitiv!\n");
//            return 1;
//        }
//        printf("Primii %d termeni din sirul lui Fibonacci (f0=1, f1=1):\n", n);
//
//        if(n == 1)
//        {
//            printf("1\n");
//        }
//        else if(n == 2)
//        {
//            printf("1 1\n");
//        }
//        else
//        {
//            long long a = 1, b = 1, c;
//            printf("1 1");
//
//            for(int i = 3; i <= n; i++)
//            {
//                c = a + b;
//                printf(" %11d", c);
//                a = b;
//                b = c;
//            }
//            printf("\n");
//        }
//
//      Ex 17
//
//        int n;
//        float numar, maxim;
//
//        printf("Introduceti numarul de elemente: ");
//        scanf("%d", &n);
//
//        if(n <= 0)
//        {
//            printf("Numarul de elemente trebuie sa fie pozitiv!\n");
//            return 1;
//        }
//        printf("Intreduceti %d numere reale: \n", n);
//        scanf("%f", &maxim);
//
//        for(int i; i < n; i++)
//        {
//            scanf("%f", &numar);
//            if(numar > maxim)
//            {
//                maxim = numar;
//            }
//        }
//        printf("Maximul elementelor citite: %.2f\n", maxim);
//
//      Ex 18
//
//        int n, original, p = 0;
//
//        printf("Introduceti un numar natural: ");
//        scanf("%d", &n);
//
//        if(n < 0)
//        {
//            printf("Numarul trebuie sa fie natural (pozitiv)!\n");
//            return 1;
//        }
//
//        original = n;
//
//        while(n > 0)
//        {
//            int cifra = n % 10;
//            p = p * 10 + cifra;
//            n = n /10;
//        }
//        printf("Oglinditul lui %d este: %d\n", original, p);
//
//      Ex 19
//
//        int x, y, a, b, rest;
//
//        printf("Introduceti primul numar (x): ");
//        scanf("%d", &x);
//        printf("Introduceti al doilea numar (y): ");
//        scanf("%d", &y);
//
//        if(x <= 0 || y <= 0)
//        {
//            printf("Numerele trebuie sa fie naturale nenule!\n");
//            return 1;
//        }
//
//        a = x;
//        b = y;
//         while(b != 0)
//         {
//            rest = a % b;
//            a = b;
//            b = rest;
//         }
//         printf("Cel mai mare divizor comun al lui %d si %d este: %d\n", x, y, a);
//
//      Ex 20
//
//        int n, k, original, gasit = 0, cifra;
//
//        printf("Introduceti un numar natural n: ");
//        scanf("%d", &n);
//        printf("Introduceti cifra k: ");
//        scanf("%d", &k);
//
//        if (n < 0)
//        {
//            printf("Numarul trebuie sa fie natural (pozitiv)!\n");
//            return 1;
//        }
//
//        if (k  < 0 || k > 9)
//        {
//            printf("k trebuie sa fie o cifra (0-9)!\n");
//            return 1;
//        }
//
//        original = n;
//
//        if (n == 0 && k == 0)
//        {
//            gasit = 1;
//        }
//
//        while (n > 0 && !gasit)
//        {
//            cifra = n % 10;
//
//            if (cifra == k)
//            {
//                gasit = 1;
//            }
//            n = n / 10;
//        }
//
//        printf("Cifra %d ", k);
//
//        if (gasit)
//        {
//            printf("apare ");
//        }
//        else
//        {
//            printf("nu apare ");
//        }
//
//        printf("in numarul %d.\n", original);
//
//        if (gasit)
//        {
//            printf("DA\n");
//        }
//        else
//        {
//            printf("NU\n");
//        }
//
//      Ex 21
//
//        int n, k = 0, putere = 1;
//
//        printf("Introduceti un numar natulat n: ");
//        scanf("%d", &n);
//
//        if(n <= 0) {
//            printf("Numarul trebuie sa fie natural (pozitiv)!\n");
//            return 1;
//        }
//        if (n==1) {
//            printf("Nu exista k natural astfel incat 2^k < 1\n");
//            return 0;
//        }
//        int putere = 1;
//        while (putere * 2 < n) {
//            putere = putere * 2;
//            k++;
//        }
//        printf("Cel mai mare k natural pentru care 2^k < %d este: %d\n", n, k);
//        printf("Verificare: 2^%d = %d < %d\n", k, putere, n);
//
//      Ex 22
//
//        int n, original, count_zero = 0;
//
//        printf("Introduceti un numar natural n: ");
//        scanf("%d", &n);
//
//        if(n < 0)
//        {
//            printf("Numarul trebuie sa fie natural (pozitiv)!\n");
//            return 1;
//        }
//        original = n;
//
//        if(n ==0)
//        {
//            printf("Numarul 0 are 1 cifra de 0 la sfarsit.\n");
//            return 0;
//        }
//
//        while(n > 0 && n % 10 == 0)
//        {
//            count_zero++;
//            n = n / 10;
//        }
//        printf("Numarul %d se termina cu %d cifre de zero.\n", original, count_zero);
//
//      Ex 23
//
//        int n, k, original, count = 0, cifra;
//
//        printf("Introduceti un numar natural n: ");
//        scanf("%d", &n);
//        scanf("%d", &k);
//
//        if(n < 0)
//        {
//            printf("Numarul trebuie sa fie natural (pozitiv)!\n");
//            return 1;
//        }
//
//        if(k < 0 || k > 9)
//        {
//            printf("Cifra k trebuie sa fie intre 0 si 9!\n");
//            return 1;
//        }
//
//        original = n;
//
//        if(n == 0 && k == 0)
//        {
//            count = 1;
//        }
//
//        while(n > 0)
//        {
//            cifra = n % 10;
//            if(cifra == k)
//            {
//                count++;
//           }
//            n = n / 10;
//        }
//        printf("Cifra %d apare de %d ori in numarul %d.\n", k, count, original);
//
//      Ex 24
//
//        int n1, n2, original_n1, original_n2;
//        int suma_patrate = 0, suma_cifre = 0;
//
//        printf("Introduceti primul numar (n1): ");
//        scanf("%d", &n1);
//        printf("Introduceti al doilea numar (n2): ");
//        scanf("%d", &n2);
//
//        if(n1 < 0 || n2 < 0)
//        {
//            printf("Numerele trebuie sa fie naturale (pozitive)!\n");
//            return 1;
//        }
//        original_n1 = n1;
//        original_n2 = n2;
//
//        int temp = n1;
//        while(temp > 0)
//        {
//            int cifra = temp % 10;
//            suma_patrate *= cifra * cifra;
//            temp = temp / 10;
//        }
//
//         temp = n2;
//         while(temp > 0)
//         {
//             int cifra = temp % 10;
//             suma_cifre += cifra;
//             temp = temp / 10;
//        }
//
//        printf("\n Pentru n1 = %d:\n", original_n1);
//        printf("Suma patratelor cifrelor = %d\n", suma_patrate);
//
//        printf("\n Pentru n2 = %d:\n", original_n2);
//        printf("Suma cifrelor = %d\n", suma_cifre);
//
//        printf("Rezultat: ");
//
//        if(suma_patrate == suma_cifre)
//        {
//            printf("da\n");
//        }
//        else
//        {
//            printf("nu\n");
//        }
//
//      Ex 25
//
//        int n, i, suma = 0;
//
//        printf("Introduceti valoarea lui n: ");
//        scanf("%d", &n);
//
//        for(i = 1; i <= n; i++)
//        {
//            if(i % 2 != 0)
//            {
//                suma = suma + i;
//            }
//        }
//        printf("Suma numerelor impare mai mici sau egale cu %d este: %d\n", n, suma);
//
//      Ex 26
//
//        int n, i, este_prim = 1;
//
//        printf("Introduceti un numar natural n: ");
//        scanf("%d", &n);
//
//        if(n < 2)
//        {
//            este_prim = 0;
//        }
//        else
//        {
//            for(i = 2; i * i <= n; i++)
//            {
//                if(n % i == 0)
//                {
//                    este_prim = 0;
//                }
//            }
//        }
//        if(este_prim == 1)
//            printf("%d este numar prim.\n", n);
//        else
//            printf("%d NU este numar prim.\n", n);
//
//      Ex 27
//
//        int sumaDivizori(int n)
//        {
//            int s = 0;
//            for (int i = 1; i <= n; i++)
//            {
//                if(n % i == 0)
//                {
//                    s += i;
//                }
//            }
//            return s;
//        }
//
//        int a, b;
//
//        printf("Introduceti capetele intervalului [a, b]: ");
//        scanf("%d %d", &a, &b);
//
//        printf("Numerele prietene din intervalul [%d, %d] sunt:\n", a, b);
//
//        for(int x = a; x <= b; x++)
//        {
//            for(int y = x + 1; y <= b; y++)
//            {
//                if(sumaDivizori(x) == sumaDivizori(y))
//                {
//                    printf("(%d, %d)\n", x, y);
//                }
//            }
//        }
//
//      Ex 28
//
//        int n, copie, inv = 0, cifra;
//
//        printf("Introduceti un numar natural n: ");
//        scanf("%d", &n);
//
//        copie = n;
//
//        while(n > 0)
//        {
//            cifra = n % 10;
//            inv = inv * 10 + cifra;
//            n = n / 10;
//        }
//        if(inv == copie)
//            printf("%d este palindrom.\n", copie);
//        else
//            printf("%d NU este palindrom.\n", copie);
//
//      Ex 29
//
//        int a, b, c;
//
//        printf("Numerele de 3 cifre cu cifrele in ordine crescatoare si suma 18 sunt:\n");
//
//        for(a = 1; a <= 9; a++)
//        {
//            for(b = a + 1; b <= 9; b++)
//            {
//                for(c = b + 1; c <=9; c++)
//                {
//                    if(a + b + c == 18)
//                    {
//                        printf("%d\n", 100 * a + 10 * b + c);
//                    }
//                }
//            }
//        }
//
//      Ex 30
//
//        int este_prim(int n)
//        {
//            if(n < 2)
//                return 0;
//            for(int i = 2; i * i <= n; i++)
//            {
//                if(n % i == 0)
//                    return 0;
//            }
//            return 1;
//        }
//
//        int p, n, a, b, c;
//
//        printf("Introduceti valoarea lui p: ");
//        scanf("%d", &p);
//
//        printf("Numerele prime de 3 cifre cu produsul cifrelor egal cu %d sunt:\n", p);
//
//        for(n = 100; n <= 999; n++)
//        {
//            a = n / 100;
//            b = (n / 10) % 10;
//            c = n % 10;
//
//            if(a * b * c == p && este_prim(n))
//            {
//                printf("%d\n", n);
//            }
//        }



     return 0;
}

