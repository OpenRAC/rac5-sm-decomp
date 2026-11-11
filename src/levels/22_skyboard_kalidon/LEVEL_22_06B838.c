/* LEVEL_22:0x06B838 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_06BE98(unsigned char *o);
extern void func_06BF28(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_0006B928[];
extern unsigned char D_0015546C[];

void func_06B838(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_06BE98(a0);
    if (s1 != 0) {
        func_06BF28(*(void **)s1, (void *)D_0006B928);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_0006B928) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_0015546C = *(int *)D_0015546C - 1;
    }
}
