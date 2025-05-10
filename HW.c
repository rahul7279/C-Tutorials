# include<stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf(" %d ", &n);

    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum = sum + i;// sum += i
    }

    printf("The sum of first n natural numbers is %d \n", sum);
    
    for (int i =n; i>=1; i--) {
        printf("%d \n", i );
    }
    return 0;
} 
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a no.: ");
//     scanf("%d", &n);
//     for(int i = 1; i<=10; i++) {
//         printf("%d \n", i*n);
//     }
//     return 0;
// }
/* Write a program to check if a given number is
Armstrong number or not.
(Search what is Armstrong number)*/
/*# include <stdio.h>
# include <math.h>

int main() {
    int num, original_num, remainder, n =0;
    double remainder_result = 0.0;
    printf("Enter an Integer: ");
    scanf("%d", &num);
    original_num = num;

    while(original_num != 0) {
        original_num /= 10;
        ++n;
    }
    original_num = num;

    while(original_num != 0) {
        remainder = original_num % 10;
        remainder_result += pow(remainder, n);
        original_num /= 10;
    }
    if ((int)remainder_result == num) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}*/

# include <stdio.h>
int main() {
    int n;
    printf("Enter the no.: ");
    scanf("%d", &n);
    if (n<=1) {
        printf("It is not a Prime no.");
    } else {
        int i;
        for(i=2; i<=n / 2; i++) {
            if(n%i ==0) {
                printf("It is not a Prime no.");
                break;
            }
        }
        if (i > n/2) {
            printf("It is Prime no.");
        }
    }
}