/* LEVEL_04:0x124138 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_002310D8[];
extern void *func_11AD08(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_124138(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_11AD08(n, 0, D_002310D8, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
