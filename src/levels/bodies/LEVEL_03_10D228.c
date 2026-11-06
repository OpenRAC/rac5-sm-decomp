extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_10D1E8(void);
extern void func_10D208(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_34C5B8[];
extern int D_21F3FC;

void func_10D228(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_34C5B8, 0, 0x6C);
    n = func_10D1E8() - D_21F3FC;
    func_10D208();
    func_10D1E8();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_34C5B8 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_34C5B8 + 0x08) = (int)q;
        *(int *)(D_34C5B8 + 0x10) = n;
        *(int *)(D_34C5B8 + 0x04) = n;
    }
    memset(D_34C5B8 + 0x20, 0, 0x4C);
}
