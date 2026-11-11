extern char *strncpy(char *, const char *, unsigned int);

char *func_095CF0(char *destination, const char *source, unsigned int count)
{
    if (count != 0) {
        destination[count - 1] = 0;
        return strncpy(destination, source, count - 1);
    }
    return destination;
}
