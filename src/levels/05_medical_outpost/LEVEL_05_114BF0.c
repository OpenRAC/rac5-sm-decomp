/* LEVEL_05:0x114BF0 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_00206658[];
extern void *func_10BBE0(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_114BF0(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_10BBE0(n, 0, D_00206658, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
