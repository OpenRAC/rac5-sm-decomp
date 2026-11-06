extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_0EB2C8(void);
extern void func_0EB2E8(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_287128[];
extern int D_165D5C;

void func_0EB308(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_287128, 0, 0x6C);
    n = func_0EB2C8() - D_165D5C;
    func_0EB2E8();
    func_0EB2C8();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_287128 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_287128 + 0x08) = (int)q;
        *(int *)(D_287128 + 0x10) = n;
        *(int *)(D_287128 + 0x04) = n;
    }
    memset(D_287128 + 0x20, 0, 0x4C);
}
