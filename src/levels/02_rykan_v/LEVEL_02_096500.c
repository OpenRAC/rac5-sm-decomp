extern int D_0020B33C;
extern int D_0020B334;
extern int D_0020B338;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_0A9550(void);
extern void func_0A7390(int a, int b);
extern void func_0A7398(int a, int b);
extern void func_0A73A0(int a, int b);
extern void func_0A7220(int a);
extern void func_0A7240(int a);
extern void func_0A73B0(float a, float b);

void func_096500(void)
{
    D_0020B33C = D_0020B33C ^ 1;
    D_0020B334 = 0;
    D_0020B338 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_0A9550();
    func_0A7390(1, 1);
    func_0A7398(0, 1);
    func_0A73A0(0, 0);
    func_0A7220(9);
    func_0A7240(4);
    func_0A73B0(1.0f, 1.0f);
}
