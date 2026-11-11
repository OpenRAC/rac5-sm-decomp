extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_101D88(void);
extern void func_101DA8(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_302B78[];
extern int D_1DA17C;

void func_101DC8(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_302B78, 0, 0x6C);
    n = func_101D88() - D_1DA17C;
    func_101DA8();
    func_101D88();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_302B78 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_302B78 + 0x08) = (int)q;
        *(int *)(D_302B78 + 0x10) = n;
        *(int *)(D_302B78 + 0x04) = n;
    }
    memset(D_302B78 + 0x20, 0, 0x4C);
}
