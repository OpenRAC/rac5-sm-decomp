extern int D_001556FC;
extern int D_001556F4;
extern int D_001556F8;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_091250(void);
extern void func_08F0F8(int a, int b);
extern void func_08F100(int a, int b);
extern void func_08F108(int a, int b);
extern void func_08EF88(int a);
extern void func_08EFA8(int a);
extern void func_08F118(float a, float b);

void func_080C00(void)
{
    D_001556FC = D_001556FC ^ 1;
    D_001556F4 = 0;
    D_001556F8 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_091250();
    func_08F0F8(1, 1);
    func_08F100(0, 1);
    func_08F108(0, 0);
    func_08EF88(9);
    func_08EFA8(4);
    func_08F118(1.0f, 1.0f);
}
