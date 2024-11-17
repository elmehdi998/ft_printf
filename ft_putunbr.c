

#include<unistd.h>

void ft_putunbr(unsigned int nb)
{
          char c;
          if(nb>9)
                    ft_putunbr(nb/10);
          c= nb%10 +48;
          write(1,&c,1);
}