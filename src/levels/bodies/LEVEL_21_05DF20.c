/* LEVEL_21:0x05DF20 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_05E580(unsigned char *o);
extern void func_05E610(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_0005E010[];
extern unsigned char D_0014AD6C[];

void func_05DF20(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_05E580(a0);
    if (s1 != 0) {
        func_05E610(*(void **)s1, (void *)D_0005E010);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_0005E010) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_0014AD6C = *(int *)D_0014AD6C - 1;
    }
}
