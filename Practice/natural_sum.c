#include <stdio.h>
#include <stdbool.h>

/*

Explaination:

loop i = 0:
sum = 0;
i = 0;
sum = 0 + 0 + 1

sum = 1
i = 1

loop i = 1:
sum = 1
i = 1

sum = 1 + (1 + 1) = 3

sum = 3
i = 2


loop i = 2:
sum = 3
i = 2

sum = 3 + (2 + 1) = 6

sum = 6
i = 3

loop i = 3:
sum = 6
i = 3

sum = 6 + (3 + 1) = 10
i = 4

stop i < n(5)
loop i = 4:
sum = 10
i = 4

sum = 10 + (4 + 1) = 15
i = 5

i(5) < 5 t or f?? f, therefore mo stop na ang loop

sum = 15
*/
int main()
{
    //enter number
    //output: generate amount of numbers
    // loop siya if ang n below zero
    int n;
    bool error = false;
    int sum = 0;
    // do
    // {
    //     if(error){
    //         printf("Please put positive numbers\n\n");
    //     }
    printf("Enter number: ");
    scanf("%d", &n);
    // } while (error = n < 0);
    
    int i = 0;
    while(i < n){
        printf("%d ", i + 1);
        
        // sum += i + 1;
        sum = sum + (i + 1);

        ++i;
    }

    printf("\nThe sum is: %d ", sum);
    
}