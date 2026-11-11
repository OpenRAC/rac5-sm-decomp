/* LEVEL_18:0x069530 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_069B98(unsigned char *o);
extern void func_069C28(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_00069620[];
extern unsigned char D_001A4FBC[];

void func_069530(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_069B98(a0);
    if (s1 != 0) {
        func_069C28(*(void **)s1, (void *)D_00069620);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_00069620) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_001A4FBC = *(int *)D_001A4FBC - 1;
    }
}
