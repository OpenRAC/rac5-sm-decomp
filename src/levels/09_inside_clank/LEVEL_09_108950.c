extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_108910(void);
extern void func_108930(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_318EB8[];
extern int D_1F087C;

void func_108950(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_318EB8, 0, 0x6C);
    n = func_108910() - D_1F087C;
    func_108930();
    func_108910();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_318EB8 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_318EB8 + 0x08) = (int)q;
        *(int *)(D_318EB8 + 0x10) = n;
        *(int *)(D_318EB8 + 0x04) = n;
    }
    memset(D_318EB8 + 0x20, 0, 0x4C);
}
