extern int func_01FC78(void *, char *, void *, void *, int, int, int);

unsigned char func_176C38(void *unused, void *a, void *b, void *c)
{
    char scratch[32];
    return func_01FC78(a, scratch, b, c, 0x28, 0, 0);
}
