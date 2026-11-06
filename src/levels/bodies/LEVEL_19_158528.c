extern int func_01F500(void *, char *, void *, void *, int, int, int);

unsigned char func_158528(void *unused, void *a, void *b, void *c)
{
    char scratch[32];
    return func_01F500(a, scratch, b, c, 0x28, 0, 0);
}
