#ifndef CUB3_H
#define CUB3_H
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


#ifndef BUFFER_SIZE 
#define BUFFER_SIZE 1
#endif
//libft 
char    *ft_strdup(const char *s1);
size_t  ft_strlen(const char *s);
char	*ft_memmove(char *dst, char *src, size_t len);
char	*ft_memcpy(char *dst, const char *src, size_t n);
char	*strmalloc(int size);
int     ft_isupper(int c);
int     ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_strchr(const char *s, int c);

//pars
bool    filename(char *file);

// pourrait etre la struct
char    **valide_map(char *file);
char    **getfile(char *file);
bool    pathtexture(char *data);
bool    wallscolors(char *data);
char    **getmap(char **files);
char    **removenewline(char **map);
bool    close_by_one(char **map);
bool    looking_for_six(char *s, char x);
int     size_len(char **map);
void    err(char *str);
bool    look_space(char **map);
bool    six_char_invalide(char  **map);

// get_next
char	*ft_concante(char *dst, char *src, int *stop);
char	*get_next_line(int fd);
char	*ft_srch_backn(char *src);

#endif
