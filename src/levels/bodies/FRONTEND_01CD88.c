/* FRONTEND:0x01CD88 -- duplicates a string into a fresh allocation and stores the pointer. */
extern char D_00109568[];
extern void *func_01C870(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_01CD88(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_01C870(n, 0, D_00109568, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
