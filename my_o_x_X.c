/*
** my_o_x_X.c for  in /u/epitech_2012/brenne_t/cu/rendu/c/my_printf
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Fri Dec 28 15:51:02 2007 thomas brennetot
** Last update Fri Dec 28 16:37:58 2007 thomas brennetot
*/

#include <stdarg.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "my_printf.h"

int	my_putnbr_base(int nb, char *base)
{
  int	deb;
  int	fin;
  int	len;

  len = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      my_putnbr_base(-nb, base);
    }
  else
    {
      fin = nb % len;
      deb = (nb - fin) / len;
      if (deb != 0)
        my_putnbr_base(deb, base);
      my_putchar(base[fin]);
    }
  return (0);
}

void	my_printf_o(char *str, va_list *args)
{
  char	*base;
  int	nb;

  base = "01234567";
  nb = va_arg(*args, int);
  my_putnbr_base(nb, base);
  str++;
}

void	my_printf_x(char *str, va_list *args)
{
  char	*base;
  int	nb;

  base = "0123456789abcdef";
  nb = va_arg(*args, int);
  my_putnbr_base(nb, base);
  str++;
}

void	my_printf_X(char *str, va_list *args)
{
  char	*base;
  int	nb;

  base = "0123456789ABCDEF";
  nb = va_arg(*args, int);
  my_putnbr_base(nb, base);
  str++;
}
