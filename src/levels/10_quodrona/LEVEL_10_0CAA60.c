extern long long func_131050(void);
extern void func_131088(int);
extern void func_0C5AA8(void);
extern void func_1313D0(int);
extern unsigned char D_001FCED1;
extern char *D_001FCFAC;

void func_0CAA60(void)
{
    int value = ((int (*)(void))func_131050)();
    func_131088(0);
    if (D_001FCED1 != 0) {
        func_0C5AA8();
    }
    func_131088(value);
    func_1313D0(*(int *)(D_001FCFAC + 0x3c));
}
