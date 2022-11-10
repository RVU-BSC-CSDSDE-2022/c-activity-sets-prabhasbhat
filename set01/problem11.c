#include <stdio.h>
struct _complex
{
   float real, img;
};

void main()
{
   typedef struct _complex Complex;
   Complex a, b, c;
   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%f%f", &a.real, &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%f%f", &b.real, &b.img);

   c.real = a.real + b.real;
   c.img = a.img + b.img;

   printf("Sum of the complex numbers: (%f) + (%fi)\n", c.real, c.img);
}
// Complex input_complex();
// Complex add_complex(Complex a, Complex b);
// void output(Complex a, Complex b, Complex sum);
// ```