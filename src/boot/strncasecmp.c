/* strncasecmp, retail 0x01ECA480: like strcasecmp but stops after n characters. */
extern int _tolower(int c);
int strncasecmp(const char *a, const char *b, unsigned int n)
{
    if (n == 0) return 0;
    for (;;) {
        if (--n == (unsigned int)-1) break;
        if (_tolower(*a) != _tolower(*b)) break;
        if (n == 0) break;
        if (*a == 0) break;
        if (*b == 0) break;
        a++;
        b++;
    }
    return _tolower((unsigned char)*a) - _tolower((unsigned char)*b);
}
