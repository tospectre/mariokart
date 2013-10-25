/*
** my.h for libmy_fhaiem_r in /home/fhaiem_r/explora
** 
** Made by rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Tue Oct 22 16:54:46 2013 rachid
** Last update Tue Oct 22 17:37:33 2013 rachid
*/

#ifndef		_MY2_H_
#define		_MY2_H_

#ifndef		MAX_INT
 #define	MAX_INT 0x7FFFFFFF
#endif

#ifndef		MIN_INT
 #define	MIN_INT 0x80000000
#endif

#ifndef		MY_NULL
 #define	MY_NULL 0x0
#endif

#ifndef		NULL
 #define	NULL 0x0
#endif

char		*read_all();
int		my_getnbr_base(char *str, char *base);
int		my_aff_sign(char *str);
char		*get_next_line(const int fd);
int		compar(int i, int nb);
void		my_putchar(char c);
int		my_isneg(int nb);
void		my_put_nbr(int nb);
int		my_putnbr_base(int nbr, char *base);
void		my_swap(int *a, int *b);
void		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
void		my_sort_int_tab(int *tab, int size);
int		my_power_rec(int nb, int power);
int		my_square_root(int nb);
int		my_is_prime(int nombre);
int		my_find_prime_sup(int nb);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *dest, char *src, int nb);
char		*my_revstr(char *str);
char		*my_strstr(char *str, char *to_find);
int		my_strcmp(char *s1, char *s2);
int		my_strncmp(char *s1, char *s2, int nb);
char		*my_strupcase(char *str);
char		*my_strlowcase(char *str);
char*		my_strcapitalize(char *str);
int		my_str_isalpha(char *str);
int		my_str_isnum(char *str);
int		my_str_islower(char *str);
int		my_str_isupper(char *str);
int		my_str_isprintable(char *str);
int		my_showstr(char *str);
int		my_showmem(char *str, int size);
char		*my_strcat(char *dest, char *str);
char		*my_strncat(char *dest, char *src, int nb);
int		my_strlcat(char *dest, char *src, int size);
char		*my_strdup(char *src);
char		**my_str_to_wordtab(char *str);
char		**my_str_to_wordtab_sep(char *str, char sep);
int		my_show_wordtab(char **tab);
int		my_isalpha(char);
int		my_isnum(char);
void		my_lowerize(char *c);
void		my_upperize(char *c);
void		my_swap_char(char *a, char *b);
int		my_swap_int(int *a, int *b);
void		init_putnbr_base_tab(char *tab);
void		my_putnbr_base_size(int nbr, int nb_char);
char		*my_putnbr_base_char(int nbr, char* base);
void		*my_realloc(void *src, int size, int type_size, int memset_size);
void		*my_memcpy(void *dest, void *src, int size);
void		*my_memset(void *ptr, int value, int size);
void		my_sort_char_tab(char **t, int reverse);
void		my_putstr_n_free(char *str);
void		my_put_double_str(char *str1, char *str2);
void		my_put_triple_str(char *str1, char *str2, char *str3);
char		to_lower(char c);
char		*my_nbr_to_char(int nb);
void		my_put_x_space_and_double_str(int nb, char *str1, char *str2);
int		my_power_it(int nb, int pow);
void		clean_wordtab(char **t);
void		*xmalloc(unsigned int size);
int		my_strcmp_casse(char *s1, char *s2);
char		*my_substr(char *src, int from, int to);
void		my_perror(char *str);
struct s_stock_par	*my_param_to_tab(int ac, char **av);

typedef struct s_stock_par
{
  int		size_param;
  char		*str;
  char		*copy;
  char		**tab;
}		t_stock_par;

#endif		/* _MY2_H_ */
