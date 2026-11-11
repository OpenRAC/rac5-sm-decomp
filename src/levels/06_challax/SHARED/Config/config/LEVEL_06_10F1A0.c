/* LEVEL_06:0x10F1A0 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_002065D8[];
extern void *func_105D70(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_10F1A0(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_105D70(n, 0, D_002065D8, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
