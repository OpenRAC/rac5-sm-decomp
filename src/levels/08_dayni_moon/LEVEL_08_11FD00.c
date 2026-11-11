extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_11FCC0(void);
extern void func_11FCE0(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_3809B8[];
extern int D_24FC3C;

void func_11FD00(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_3809B8, 0, 0x6C);
    n = func_11FCC0() - D_24FC3C;
    func_11FCE0();
    func_11FCC0();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_3809B8 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_3809B8 + 0x08) = (int)q;
        *(int *)(D_3809B8 + 0x10) = n;
        *(int *)(D_3809B8 + 0x04) = n;
    }
    memset(D_3809B8 + 0x20, 0, 0x4C);
}
