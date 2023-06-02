// Задание 1

// #include <stdio.h>
// int main() {
//     int a, b, c, d;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     scanf("%d", &c);
//     scanf("%d", &d);
//     int counter = a;
//     while (counter <= b) {
//         if (counter % d == c) {
//             printf("%d ", counter);
//         }
//         counter++;
//     }
//     return 0;
// }





// Задание 2

// #include <stdio.h>

// char* join(char* words[], int n) {
//     int len = n - 1;
//     for (int i = 0; i < n; i++)
//         len += sizeof(words[i]);
//     char arr[len];
//     int x = 0;
//     for (int i = 0; i < n; i++) {
//         for (int g = 0; g < sizeof(words[i]); g++)
//             arr[x] = words[i][g];
//         x += 1;
//     }
//     return arr;
// }

// int main() {
//     char* words[] = {"Hello", "World"};
//     int count = sizeof(words) / sizeof(words[0]);
//     char* result = join(words, count);
//     printf("Result: %s\n", result);
//     return 0;
// }


// Задание 3.

// #include <stdio.h>

// int main() {
//     int n, m = 0, x = 1, u = 1;
//     scanf("%d", &n);

//     for (int i = 1; i < n; i++) {
//         u = x + m;
//         m = x;
//         x = u;
//     }

//     printf("%d\n", x);

//     return 0;
// }



// Задание 4.



// #include <stdio.h>

// int sumDigits(int num) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }

// int main() {
//     int n = 123;
//     int a = sumDigits(n);
//     printf("Sum of digits: %d\n", a);
//     return 0;
// }



// Задание 5.




// #include <stdio.h>

// int ispolnitel(int num) {
//     int a, b, c, x, y, z;
//     c = num % 10;
//     num /= 10;
//     b = num % 10;
//     num /= 10;
//     a = num % 10;
//     x = a * b;
//     y = b * c;
//     if (y < 10)
//         z = 10;
//     else
//         z = 100;
//     return x * z + y;
// }

// int main() {
//     int n = 456;
//     int a = ispolnitel(n);
//     printf("Result: %d\n", a);
//     return 0;
// }
