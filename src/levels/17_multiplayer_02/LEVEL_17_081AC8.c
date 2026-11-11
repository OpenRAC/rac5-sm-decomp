extern int D_001979AC;
extern int D_001979A4;
extern int D_001979A8;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_091398(void);
extern void func_08F240(int a, int b);
extern void func_08F248(int a, int b);
extern void func_08F250(int a, int b);
extern void func_08F0C0(int a);
extern void func_08F0E0(int a);
extern void func_08F260(float a, float b);

void func_081AC8(void)
{
    D_001979AC = D_001979AC ^ 1;
    D_001979A4 = 0;
    D_001979A8 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_091398();
    func_08F240(1, 1);
    func_08F248(0, 1);
    func_08F250(0, 0);
    func_08F0C0(9);
    func_08F0E0(4);
    func_08F260(1.0f, 1.0f);
}
