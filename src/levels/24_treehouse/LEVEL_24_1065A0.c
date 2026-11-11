extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_106560(void);
extern void func_106580(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_2FD5F8[];
extern int D_1D79FC;

void func_1065A0(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_2FD5F8, 0, 0x6C);
    n = func_106560() - D_1D79FC;
    func_106580();
    func_106560();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_2FD5F8 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_2FD5F8 + 0x08) = (int)q;
        *(int *)(D_2FD5F8 + 0x10) = n;
        *(int *)(D_2FD5F8 + 0x04) = n;
    }
    memset(D_2FD5F8 + 0x20, 0, 0x4C);
}
