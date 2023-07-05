#include <stdio.h>

int ft_iterative_factorial(int nb){
    int j;
    j = 1;
    if (nb < 0)
		return (0);
		
    while(nb > 0){
        j *= nb;
        nb--;
    }
    return (j);
}

int main() {
	int i;

	i = 0;
	printf("%d\n", ft_iterative_factorial(3));

}