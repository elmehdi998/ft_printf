


#include<unistd.h>

void ft_writel(int nb)
{
          char c ;
          c= nb%16;
          if(c >9)
          {
                    if(c==10)
                              write(1,"a",1);
                    if(c==11)
                              write(1,"b",1);
                    if(c==12)
                              write(1,"c",1);
                    if(c==13)
                              write(1,"d",1);
                    if(c==14)
                              write(1,"e",1);
                    if(c==15)
                              write(1,"f",1);
          }
          else
          {
                    c +=48;
                    write(1,&c,1);
          }

}
void ft_puthex(int nb)
{
        
          if(nb<0)
          {
                    if(nb== -2147483648)
                    {
                              write(1,"-80000000",9);
                              return ;
                    }
                    nb= -nb;
                    write(1,"-",1);
          }
          if(nb>16)
                    ft_puthex(nb/16);
          ft_writel(nb);
          
}

