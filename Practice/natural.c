#include <stdio.h>
#include <stdbool.h>

int main()
{
    //enter number
    //output: generate amount of numbers
    // loop siya if ang n below zero
    int n;
    bool error = false;

    do
    {
        if(error){
            printf("Please put positive numbers\n\n");
        }
        printf("Enter number: ");
        scanf("%d", &n);
    } while (error = n < 0);
    
    int i = 0;
    while(i < n){
        printf("%d ", i + 1);
        ++i;
    }

}