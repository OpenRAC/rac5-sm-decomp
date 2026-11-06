extern int D_0014AFFC;
extern int D_0014AFF4;
extern int D_0014AFF8;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_083538(void);
extern void func_0813E0(int a, int b);
extern void func_0813E8(int a, int b);
extern void func_0813F0(int a, int b);
extern void func_081270(int a);
extern void func_081290(int a);
extern void func_081400(float a, float b);

void func_073E00(void)
{
    D_0014AFFC = D_0014AFFC ^ 1;
    D_0014AFF4 = 0;
    D_0014AFF8 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_083538();
    func_0813E0(1, 1);
    func_0813E8(0, 1);
    func_0813F0(0, 0);
    func_081270(9);
    func_081290(4);
    func_081400(1.0f, 1.0f);
}
