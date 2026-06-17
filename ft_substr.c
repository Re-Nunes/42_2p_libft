#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newSub;
	unsigned int	len_newSub;
	unsigned int	len_s;
	unsigned int	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	len_newSub = len_s - start;
	if (len_newSub > len)
		len_newSub = len;
	newSub = malloc ((len_newSub + 1) * sizeof(char));
	if (!newSub)
		return (NULL);
	i = 0;
	while (i < len_newSub)
	{
	newSub[i] = s[start + i];
		i++;
	}
	newSub[i] = '\0';
	return (newSub);
}