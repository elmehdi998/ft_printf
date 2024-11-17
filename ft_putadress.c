#include <stdint.h>
#include <unistd.h>
static void ft_write(int nb)
{
          char c ;
          c= nb%16;
          if(c >9)
          {
                    if(c==10)
                              write(1,"A",1);
                    if(c==11)
                              write(1,"B",1);
                    if(c==12)
                              write(1,"C",1);
                    if(c==13)
                              write(1,"D",1);
                    if(c==14)
                              write(1,"E",1);
                    if(c==15)
                              write(1,"F",1);
          }
          else
          {
                    c +=48;
                    write(1,&c,1);
          }

}
static void ft_putnbrhex(unsigned int nb)
{
        
          
          if(nb>=16)
          {
                    ft_putnbrhex(nb/16);
          }
          ft_write(nb);
          
}
void ft_putadress(void *adress)
{
          if(!adress)
          {
                    ft_putstr("(nil)");
                    return ;
          }
          ft_putstr("0x");
          ft_putnbrhex((uintptr_t) adress);
}
// uintptr_t: Used for casting the void* pointer to ensure compatibility on both 32-bit and 64-bit systems.
// uintptr_t is specifically designed for storing a pointer value as an integer without losing any information. It is an unsigned integer type that is guaranteed to be able to store a pointer without truncation, regardless of the platform's architecture (32-bit or 64-bit).
// Use uintptr_t when you specifically need to work with pointer values (casting a pointer to an integer to perform pointer arithmetic or address manipulation). This type is meant for this exact purpose.