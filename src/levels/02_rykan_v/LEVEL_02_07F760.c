/* LEVEL_02:0x07F760 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_07FDC0(unsigned char *o);
extern void func_07FE50(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_0007F850[];
extern unsigned char D_0020B0AC[];

void func_07F760(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_07FDC0(a0);
    if (s1 != 0) {
        func_07FE50(*(void **)s1, (void *)D_0007F850);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_0007F850) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_0020B0AC = *(int *)D_0020B0AC - 1;
    }
}
