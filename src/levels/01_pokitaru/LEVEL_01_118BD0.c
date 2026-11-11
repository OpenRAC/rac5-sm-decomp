/* LEVEL_01:0x118BD0 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_00217758[];
extern void *func_10F7A0(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_118BD0(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_10F7A0(n, 0, D_00217758, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
