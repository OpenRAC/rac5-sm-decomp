/* LEVEL_07:0x07B068 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_07B6C8(unsigned char *o);
extern void func_07B758(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_0007B158[];
extern unsigned char D_0020A3EC[];

void func_07B068(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_07B6C8(a0);
    if (s1 != 0) {
        func_07B758(*(void **)s1, (void *)D_0007B158);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_0007B158) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_0020A3EC = *(int *)D_0020A3EC - 1;
    }
}
