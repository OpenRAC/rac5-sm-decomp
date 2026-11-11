char *strncpy(char *, const char *, unsigned int);

char *func_00B5B0(char *dst, const char *src, unsigned int size)
{
    if (size != 0) {
        dst[size - 1] = 0;
        return strncpy(dst, src, size - 1);
    }
    return dst;
}
