extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_10B960(void);
extern void func_10B980(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_31D5F8[];
extern int D_1F5DFC;

void func_10B9A0(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_31D5F8, 0, 0x6C);
    n = func_10B960() - D_1F5DFC;
    func_10B980();
    func_10B960();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_31D5F8 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_31D5F8 + 0x08) = (int)q;
        *(int *)(D_31D5F8 + 0x10) = n;
        *(int *)(D_31D5F8 + 0x04) = n;
    }
    memset(D_31D5F8 + 0x20, 0, 0x4C);
}
