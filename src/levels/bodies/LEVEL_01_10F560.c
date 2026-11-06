extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_10F520(void);
extern void func_10F540(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_331738[];
extern int D_206D7C;

void func_10F560(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_331738, 0, 0x6C);
    n = func_10F520() - D_206D7C;
    func_10F540();
    func_10F520();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_331738 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_331738 + 0x08) = (int)q;
        *(int *)(D_331738 + 0x10) = n;
        *(int *)(D_331738 + 0x04) = n;
    }
    memset(D_331738 + 0x20, 0, 0x4C);
}
