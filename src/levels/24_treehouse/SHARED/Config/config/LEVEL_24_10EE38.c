/* LEVEL_24:0x10EE38 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_001E84D8[];
extern void *func_1067A0(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_10EE38(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_1067A0(n, 0, D_001E84D8, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
