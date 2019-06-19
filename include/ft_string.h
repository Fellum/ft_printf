//
// Created by fellum on 6/8/19.
//

#ifndef EXPANDABLE_STRING_FT_STRING_H
#define EXPANDABLE_STRING_FT_STRING_H

#include <stdlib.h>
char	*ft_strnew(size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strdup(char *src);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *dest, const char *src);
void	*ft_realloc(void *mem, size_t old_size, size_t new_size);
char	*ft_strappend(char *s1, char *s2);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*fill_with_chars(int num, char c);

#endif //EXPANDABLE_STRING_FT_STRING_H
