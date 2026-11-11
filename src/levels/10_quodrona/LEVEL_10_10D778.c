extern void *malloc(unsigned int size);
extern void free(void *p);
extern void *memset(void *p, int c, unsigned int n);
extern int func_10D738(void);
extern void func_10D758(void);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);

extern char D_33AB38[];
extern int D_20F9DC;

void func_10D778(void)
{
    void *p = malloc(0x10);
    int n;
    void *q;

    free(p);
    memset(D_33AB38, 0, 0x6C);
    n = func_10D738() - D_20F9DC;
    func_10D758();
    func_10D738();
    q = PS2HEAP_Malloc__FUi(n);
    *(int *)(D_33AB38 + 0x00) = (int)q;
    if (q != 0) {
        *(int *)(D_33AB38 + 0x08) = (int)q;
        *(int *)(D_33AB38 + 0x10) = n;
        *(int *)(D_33AB38 + 0x04) = n;
    }
    memset(D_33AB38 + 0x20, 0, 0x4C);
}
