/* LEVEL_09:0x111FC0 -- placement copy of FRONTEND_01CD88.c: duplicates a string into a fresh allocation and stores the pointer. */
extern char D_00201358[];
extern void *func_108B90(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_111FC0(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_108B90(n, 0, D_00201358, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
