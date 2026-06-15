#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newStr;
	unsigned int	len_newStr;
	unsigned int	len_s;
	unsigned int	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	len_newStr = len_s - start;
	if (len_newStr > len)
		len_newStr = len;
	newStr = malloc ((len_newStr + 1) * sizeof(char));
	if (!newStr)
		return (NULL);
	i = 0;
	while (i < len_newStr)
	{
	newStr[i] = s[start + i];
		i++;
	}
	newStr[i] = '\0';
	return (newStr);
}