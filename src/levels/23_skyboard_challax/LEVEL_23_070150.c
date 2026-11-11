/* LEVEL_23:0x070150 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_0707B0(unsigned char *o);
extern void func_070840(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_00070240[];
extern unsigned char D_001C94EC[];

void func_070150(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_0707B0(a0);
    if (s1 != 0) {
        func_070840(*(void **)s1, (void *)D_00070240);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_00070240) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_001C94EC = *(int *)D_001C94EC - 1;
    }
}
