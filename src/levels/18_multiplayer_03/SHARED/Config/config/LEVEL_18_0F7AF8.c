/* LEVEL_18:0x0F7AF8 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_001CDB98[];
extern void *func_0EEBF0(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_0F7AF8(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_0EEBF0(n, 0, D_001CDB98, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
