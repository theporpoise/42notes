
char    *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}







[2:03]
if*

dnelson [2:04 PM]
you used a char?

[2:04]
how?

sgardner [3:50 PM]
```char    *ft_strcpy(char *dest, char *src)
{
    char    *origin;
    
    origin = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (origin);
}```
(edited)

[3:54]
Can squeeze it down too if you want, but I didn't for some reason... I'll edit it lol

[3:55]
I think it technically counts as a multiple assignment, so wasn't sure if moulinette would fail the condensed version

dnelson [4:06 PM]
that looks better than mine

[4:06]
lol

sgardner [4:11 PM]
```char    *ft_strcpy(char *dest, char *src)
{
    char    *origin;
    
    origin = dest;
    while (*src != '\0')
        *dest++ = *src++;
    *dest = '\0';
    return (origin);
}