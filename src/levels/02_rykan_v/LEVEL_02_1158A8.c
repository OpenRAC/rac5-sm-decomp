extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_115868(void);
extern void func_115888(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_348C38[];
extern int D_21BD3C;

void func_1158A8(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_348C38, 0, 0x6C);
    n = func_115868() - D_21BD3C;
    func_115888();
    func_115868();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_348C38 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_348C38 + 0x08) = (int)q;
        *(int *)(D_348C38 + 0x10) = n;
        *(int *)(D_348C38 + 0x04) = n;
    }
    memset(D_348C38 + 0x20, 0, 0x4C);
}
