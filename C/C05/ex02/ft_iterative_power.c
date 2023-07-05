#include <stdio.h>

int ft_iterative_power(int nb, int power){
      int i;
      int j;

      i = 1;
      j = nb;

      if(power == 0){
            return (1);
      }
      if(power < 0){
            return (0);
      }
      while(i < power){
            j = j * nb;
            i++;
      }
      return (j);
}

int main(){
      printf("%d", ft_iterative_power(2,10));
}