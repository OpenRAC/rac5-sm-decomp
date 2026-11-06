extern int D_001A552C;
extern int D_001A5524;
extern int D_001A5528;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_091730(void);
extern void func_08F5D8(int a, int b);
extern void func_08F5E0(int a, int b);
extern void func_08F5E8(int a, int b);
extern void func_08F460(int a);
extern void func_08F480(int a);
extern void func_08F5F8(float a, float b);

void func_081538(void)
{
    D_001A552C = D_001A552C ^ 1;
    D_001A5524 = 0;
    D_001A5528 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_091730();
    func_08F5D8(1, 1);
    func_08F5E0(0, 1);
    func_08F5E8(0, 0);
    func_08F460(9);
    func_08F480(4);
    func_08F5F8(1.0f, 1.0f);
}
