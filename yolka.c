# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(){
  


  int height = 0;
  printf("HAPPY NEW YEAR!!!\n");
  printf("Your christmas tree\n");
  printf("Enter the height: ");
  scanf("%d", &height);
  printf("\n");

  for (int i = 0; i <= height; i++){
    int count = (i * 2) - 1;
    int space = height - i + 1;
    for (int j = 0; j < space; j++){
        printf(" ");
    }
    for (int j = 0; j < count; j++){
      printf("*");
    }
    printf("\n");  
  }

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < height; j++){ 
        printf(" ");
    }
    printf("*\n");  
  }

    char c;
  while(scanf("%c", &c) != -1); 

  return 0;
}