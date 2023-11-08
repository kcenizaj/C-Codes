// The pattern like :

// Enter n: 4
// *
// **
// ***
// ****

// Maka input ta sa n, size sa pyramid
// maka print ta sa pyramid
// loop sa row === checked
// loop sa col ===

// i = 0 *
// i = 1 **
// i = 2 ***
// i = 3 ****

// loop i = 0:
// j = 0 ; 

//   for loop 
//   is j < i + 1?? true
//   loop j = 0:
//     print *
//     ++j => 1
//     is j < i + 1? false
  
// loop i = 1:
// j = 0;
//   for loop
//   is j < i + 1 ?? true
//   j = 0 => print * => ++j => j = 1
//   j = 1 => print * => ++j => j = 2
//   is j (2) < i(1) + 1? false
  
// loop i = 2:
// j = 0:
//   for loop
//   is j < i + 1 ?? true
//   ***
  
// loop i = 3
//   for loop j
//   ****
// n = 4
// loop i = 4

// i = 0 *
// i = 1 **
// i = 2 ***
// i = 3 ****


#include <stdio.h>

int main() {
  
  int n = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  
  // Nested loop, row col
  
  for(int i = 0; i < n; ++i){
    // printf("*");
    for(int j = 0; j < i + 1; ++j){
      printf(" * ");
    }
    
    printf("\n");
  }
  
}