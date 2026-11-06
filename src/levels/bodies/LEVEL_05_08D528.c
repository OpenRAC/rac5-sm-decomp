extern int D_001E56FC;
extern int D_001E56F4;
extern int D_001E56F8;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_0A1200(void);
extern void func_09F038(int a, int b);
extern void func_09F040(int a, int b);
extern void func_09F048(int a, int b);
extern void func_09EEC0(int a);
extern void func_09EEE0(int a);
extern void func_09F058(float a, float b);

void func_08D528(void)
{
    D_001E56FC = D_001E56FC ^ 1;
    D_001E56F4 = 0;
    D_001E56F8 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_0A1200();
    func_09F038(1, 1);
    func_09F040(0, 1);
    func_09F048(0, 0);
    func_09EEC0(9);
    func_09EEE0(4);
    func_09F058(1.0f, 1.0f);
}
