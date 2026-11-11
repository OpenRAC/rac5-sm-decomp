extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_11AA88(void);
extern void func_11AAA8(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_34BF38[];
extern int D_22019C;

void func_11AAC8(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_34BF38, 0, 0x6C);
    n = func_11AA88() - D_22019C;
    func_11AAA8();
    func_11AA88();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_34BF38 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_34BF38 + 0x08) = (int)q;
        *(int *)(D_34BF38 + 0x10) = n;
        *(int *)(D_34BF38 + 0x04) = n;
    }
    memset(D_34BF38 + 0x20, 0, 0x4C);
}
