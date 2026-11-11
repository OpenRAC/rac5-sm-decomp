extern int D_001F637C;
extern int D_001F6374;
extern int D_001F6378;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_0A2C40(void);
extern void func_0A0A80(int a, int b);
extern void func_0A0A88(int a, int b);
extern void func_0A0A90(int a, int b);
extern void func_0A0908(int a);
extern void func_0A0928(int a);
extern void func_0A0AA0(float a, float b);

void func_08FE30(void)
{
    D_001F637C = D_001F637C ^ 1;
    D_001F6374 = 0;
    D_001F6378 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_0A2C40();
    func_0A0A80(1, 1);
    func_0A0A88(0, 1);
    func_0A0A90(0, 0);
    func_0A0908(9);
    func_0A0928(4);
    func_0A0AA0(1.0f, 1.0f);
}
