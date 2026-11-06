extern unsigned char D_00206B64;
extern char *D_001FCFAC;
extern unsigned char D_0020F749;
extern void func_131120(int);
extern void func_0275B8(void);

void func_0C1540(void)
{
    if (D_00206B64 != 0)
        func_131120(*(int *)(D_001FCFAC + 0x1c6c));
    func_0275B8();
    D_0020F749 = 0;
}
