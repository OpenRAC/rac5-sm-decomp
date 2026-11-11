extern unsigned char D_001ECEE4;
extern char D_00314CA0[];
extern void func_0BE630(void);
extern void *memset(void *, int, unsigned int);

void func_0BE760(void)
{
    D_001ECEE4 = 0;
    func_0BE630();
    memset(D_00314CA0, 0, 0xff);
}
