extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_112570(void);
extern void func_112590(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_347038[];
extern int D_21B07C;

void func_1125B0(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_347038, 0, 0x6C);
    n = func_112570() - D_21B07C;
    func_112590();
    func_112570();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_347038 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_347038 + 0x08) = (int)q;
        *(int *)(D_347038 + 0x10) = n;
        *(int *)(D_347038 + 0x04) = n;
    }
    memset(D_347038 + 0x20, 0, 0x4C);
}
