#include "libft.h"

int	ft_stracasecmp(const char *s1, const char *s2)
{
	size_t	i;

    i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (ft_tolower(s1[i]) != ft_tolower(s2[i]) || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)ft_tolower(s1[i]) - (unsigned char)ft_tolower(s2[i]));
		i++;
	}
    return ((unsigned char)ft_tolower(s1[i]) - (unsigned char)ft_tolower(s2[i]));
}