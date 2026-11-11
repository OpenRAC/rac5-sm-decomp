/* LEVEL_01:0x078E78 -- detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_0794D8(unsigned char *o);
extern void func_079568(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_00078F68[];
extern unsigned char D_001F60EC[];

void func_078E78(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_0794D8(a0);
    if (s1 != 0) {
        func_079568(*(void **)s1, (void *)D_00078F68);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_00078F68) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_001F60EC = *(int *)D_001F60EC - 1;
    }
}
