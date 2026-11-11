/* LEVEL_03:0x078C70 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_0792D0(unsigned char *o);
extern void func_079360(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_00078D60[];
extern unsigned char D_0020E76C[];

void func_078C70(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_0792D0(a0);
    if (s1 != 0) {
        func_079360(*(void **)s1, (void *)D_00078D60);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_00078D60) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_0020E76C = *(int *)D_0020E76C - 1;
    }
}
