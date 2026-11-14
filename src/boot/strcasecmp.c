/* strcasecmp, retail 0x01ECA400: compares case-insensitively through _tolower until the first difference or the end of the first string. */
extern int _tolower(int c);
int strcasecmp(const char *a, const char *b)
{
    while (*a != 0) {
        if (_tolower(*a) != _tolower(*b)) break;
        a++;
        b++;
    }
    return _tolower((unsigned char)*a) - _tolower((unsigned char)*b);
}
