extern int D_0023F23C;
extern int D_0023F234;
extern int D_0023F238;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_0AD538(void);
extern void func_0AB378(int a, int b);
extern void func_0AB380(int a, int b);
extern void func_0AB388(int a, int b);
extern void func_0AB208(int a);
extern void func_0AB228(int a);
extern void func_0AB398(float a, float b);

void func_097D50(void)
{
    D_0023F23C = D_0023F23C ^ 1;
    D_0023F234 = 0;
    D_0023F238 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_0AD538();
    func_0AB378(1, 1);
    func_0AB380(0, 1);
    func_0AB388(0, 0);
    func_0AB208(9);
    func_0AB228(4);
    func_0AB398(1.0f, 1.0f);
}
