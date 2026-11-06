extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_0D4DA0(void);
extern void func_0D4DC0(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_248DA8[];
extern int D_15B6FC;

void func_0D4DE0(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_248DA8, 0, 0x6C);
    n = func_0D4DA0() - D_15B6FC;
    func_0D4DC0();
    func_0D4DA0();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_248DA8 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_248DA8 + 0x08) = (int)q;
        *(int *)(D_248DA8 + 0x10) = n;
        *(int *)(D_248DA8 + 0x04) = n;
    }
    memset(D_248DA8 + 0x20, 0, 0x4C);
}
