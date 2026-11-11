extern int D_0020A67C;
extern int D_0020A674;
extern int D_0020A678;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_0A4C40(void);
extern void func_0A2A80(int a, int b);
extern void func_0A2A88(int a, int b);
extern void func_0A2A90(int a, int b);
extern void func_0A2910(int a);
extern void func_0A2930(int a);
extern void func_0A2AA0(float a, float b);

void func_091CB8(void)
{
    D_0020A67C = D_0020A67C ^ 1;
    D_0020A674 = 0;
    D_0020A678 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_0A4C40();
    func_0A2A80(1, 1);
    func_0A2A88(0, 1);
    func_0A2A90(0, 0);
    func_0A2910(9);
    func_0A2930(4);
    func_0A2AA0(1.0f, 1.0f);
}
