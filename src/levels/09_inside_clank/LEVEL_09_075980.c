/* LEVEL_09:0x075980 -- placement copy of LEVEL_01_078E78.c: detaches a looked-up record, relinks its owner when it points at the shared marker, clears it and decrements the live count. */

extern unsigned char *func_075FE0(unsigned char *o);
extern void func_076070(void *a, void *b);
extern void *memset(void *p, int c, unsigned int n);
extern unsigned char D_00075A70[];
extern unsigned char D_001DFEEC[];

void func_075980(unsigned char *a0)
{
    unsigned char *s1;
    unsigned char *obj;

    s1 = func_075FE0(a0);
    if (s1 != 0) {
        func_076070(*(void **)s1, (void *)D_00075A70);
        obj = *(unsigned char **)(a0 + 0x48);
        if (*(unsigned char **)(obj + 0xDC) == D_00075A70) {
            *(unsigned int *)(obj + 0xDC) = *(unsigned int *)(s1 + 4);
        }
        memset(s1, 0, 0x10);
        *(int *)D_001DFEEC = *(int *)D_001DFEEC - 1;
    }
}
