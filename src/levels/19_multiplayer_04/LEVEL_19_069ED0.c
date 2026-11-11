/* LEVEL_19:0x069ED0 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_06A538(unsigned char *o);
extern void func_06A5C8(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_00069FC0[];
extern unsigned char D_001A4CBC[];

void func_069ED0(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_06A538(a0);
    if (s1 != 0) {
        func_06A5C8(*(void **)s1, (void *)D_00069FC0);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_00069FC0) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_001A4CBC = *(int *)D_001A4CBC - 1;
    }
}
