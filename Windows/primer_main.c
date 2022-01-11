include <stdio.h>;
include <conio.h>;

int main()
{
  int num1, num2, suma, producto;
  
  printf("Ingrese primer valor: ");
  scanf("%i",&num1);
  
  printf("Ingrese segundo valor: ");
  scanf("%i",&num2);
  
  suma= num1 + num2;
  producto= num1 * num2;
  
  printf("El resultado de la suma es %d:\n", suma);
  printf("El resultado del producto es %d:\n", producto);
  
  getch();  
  return 0;
}
