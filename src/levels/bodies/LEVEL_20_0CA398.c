extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_0CA358(void);
extern void func_0CA378(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_1A2E28[];
extern int D_116F6C;

void func_0CA398(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_1A2E28, 0, 0x6C);
    n = func_0CA358() - D_116F6C;
    func_0CA378();
    func_0CA358();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_1A2E28 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_1A2E28 + 0x08) = (int)q;
        *(int *)(D_1A2E28 + 0x10) = n;
        *(int *)(D_1A2E28 + 0x04) = n;
    }
    memset(D_1A2E28 + 0x20, 0, 0x4C);
}
