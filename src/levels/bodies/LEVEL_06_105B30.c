extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_105AF0(void);
extern void func_105B10(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_31E4B8[];
extern int D_1F597C;

void func_105B30(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_31E4B8, 0, 0x6C);
    n = func_105AF0() - D_1F597C;
    func_105B10();
    func_105AF0();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_31E4B8 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_31E4B8 + 0x08) = (int)q;
        *(int *)(D_31E4B8 + 0x10) = n;
        *(int *)(D_31E4B8 + 0x04) = n;
    }
    memset(D_31E4B8 + 0x20, 0, 0x4C);
}
