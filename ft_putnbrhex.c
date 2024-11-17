
#include<unistd.h>

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
void ft_putnbrhex(int nb)
{
        
          if(nb<0)
          {
                    if(nb== -2147483647)
                    {
                              write(1,"-80000000",9);
                              return ;
                    }
                    nb= -nb;
                    write(1,"-",1);
          }
          if(nb>=16)
          {
                    ft_putnbrhex(nb/16);
          }
          ft_write(nb);
          
}

