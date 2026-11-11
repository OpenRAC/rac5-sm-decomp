/* LEVEL_08:0x080700 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_080D60(unsigned char *o);
extern void func_080DF0(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_000807F0[];
extern unsigned char D_0023EFAC[];

void func_080700(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_080D60(a0);
    if (s1 != 0) {
        func_080DF0(*(void **)s1, (void *)D_000807F0);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_000807F0) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_0023EFAC = *(int *)D_0023EFAC - 1;
    }
}
