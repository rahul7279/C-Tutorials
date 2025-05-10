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