#include <stdlib.h>

char *_strdup(char *str)
{
char *duplicate;
int length;
int i;

if (str == NULL)
return (NULL);

length = strlen(str);
duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; i < length; i++)
duplicate[i] = str[i];

duplicate[length] = '\0';

return (duplicate);
}
