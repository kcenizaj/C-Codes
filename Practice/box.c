// Enter n: 5
// *****
// *****
// *****
// *****
// *****

#include <stdio.h>

// loop i = 0:
//   loop j = 0: j < n = 5
// loop i = 1
//   loop j = 0; j < n = 5

//! OUTPUT
//* loop i = 0: *****
//* loop i = 1: *****
//* loop i = 2: *****
//* loop i = 3: *****
//* loop i = 4: *****

int main(){
  
  int n = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  
  //FOR LOOP CODE!!
  //* Loop para sa row
 /* for(int i = 0; i < n; ++i)
      {
        
        //* loop para sa column
        for(int j = 0; j < n; ++j){
          printf(" * ");
        }
        
        printf("\n");
      }
  */


  //DO WHILE LOOP 
  //row
  int row = 0;
  do 
    {
        printf("\n Loop %d: ",row + 1);
      	++row;
          
    			    //column
              int column = 0; //ooh so you need to reset comlumn back to zero for each row
        			do
        				{
                  printf(" chico ");
                  ++column;			
        				}
        			while(column < n);	
      } 
    
  while(row < n);

  
return 0;
}
