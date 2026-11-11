extern int func_01F520(void *, char *, void *, void *, int, int, int);

unsigned char func_156340(void *unused, void *a, void *b, void *c)
{
    char scratch[32];
    return func_01F520(a, scratch, b, c, 0x28, 0, 0);
}
