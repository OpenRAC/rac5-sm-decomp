extern int D_001C977C;
extern int D_001C9774;
extern int D_001C9778;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_099980(void);
extern void func_0977C0(int a, int b);
extern void func_0977C8(int a, int b);
extern void func_0977D0(int a, int b);
extern void func_097650(int a);
extern void func_097670(int a);
extern void func_0977E0(float a, float b);

void func_085850(void)
{
    D_001C977C = D_001C977C ^ 1;
    D_001C9774 = 0;
    D_001C9778 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_099980();
    func_0977C0(1, 1);
    func_0977C8(0, 1);
    func_0977D0(0, 0);
    func_097650(9);
    func_097670(4);
    func_0977E0(1.0f, 1.0f);
}
