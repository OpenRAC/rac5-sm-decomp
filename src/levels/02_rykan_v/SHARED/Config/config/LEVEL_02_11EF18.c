/* LEVEL_02:0x11EF18 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_0022C6D8[];
extern void *func_115AE8(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_11EF18(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_115AE8(n, 0, D_0022C6D8, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
