extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_0EE970(void);
extern void func_0EE990(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_27F968[];
extern int D_1B5D0C;

void func_0EE9B0(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_27F968, 0, 0x6C);
    n = func_0EE970() - D_1B5D0C;
    func_0EE990();
    func_0EE970();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_27F968 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_27F968 + 0x08) = (int)q;
        *(int *)(D_27F968 + 0x10) = n;
        *(int *)(D_27F968 + 0x04) = n;
    }
    memset(D_27F968 + 0x20, 0, 0x4C);
}
