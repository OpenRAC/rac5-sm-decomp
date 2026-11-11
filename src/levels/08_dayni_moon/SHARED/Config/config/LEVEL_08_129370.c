/* LEVEL_08:0x129370 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_002613D8[];
extern void *func_11FF40(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_129370(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_11FF40(n, 0, D_002613D8, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
