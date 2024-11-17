
#include<unistd.h>
void ft_putstr(char *str)
{
          int i;
          if(!str)
          {
                    write(1,"(null)",6);
                    return;

          }
          i=0;
          while(str[i])
          {
                    write(1,&str[i],1);
                    i++;
          }
}

int main(void)
{
  
    write(1, "\n=== ft_putstr Tests ===\n\n", 24);

    // Test 1: Normal string
    write(1, "Test 1 - Normal string:\n", 23);
    write(1, "Expected: Hello, World!\n", 23);
    write(1, "Got:      ", 10);
    ft_putstr("Hello, World!");
    write(1, "\n\n", 2);

    // Test 2: Empty string
    write(1, "Test 2 - Empty string:\n", 22);
    write(1, "Expected: (empty)\n", 17);
    write(1, "Got:      ", 10);
    ft_putstr("");
    write(1, "\n\n", 2);

    // Test 3: NULL string
    write(1, "Test 3 - NULL string:\n", 21);
    write(1, "Expected: (null)\n", 16);
    write(1, "Got:      ", 10);
    ft_putstr(NULL);
    write(1, "\n\n", 2);

    // Test 4: String with spaces
    write(1, "Test 4 - String with spaces:\n", 28);
    write(1, "Expected: Hello   World\n", 23);
    write(1, "Got:      ", 10);
    ft_putstr("Hello   World");
    write(1, "\n\n", 2);

    // Test 5: String with numbers
    write(1, "Test 5 - String with numbers:\n", 29);
    write(1, "Expected: 12345\n", 15);
    write(1, "Got:      ", 10);
    ft_putstr("12345");
    write(1, "\n\n", 2);

    // Test 6: String with special chars
    write(1, "Test 6 - Special characters:\n", 28);
    write(1, "Expected: !@#$%^&*()\n", 20);
    write(1, "Got:      ", 10);
    ft_putstr("!@#$%^&*()");
    write(1, "\n\n", 2);

    return (0);
}