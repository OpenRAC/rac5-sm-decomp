extern int D_001FF37C;
extern int D_001FF374;
extern int D_001FF378;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_0A3D58(void);
extern void func_0A1B98(int a, int b);
extern void func_0A1BA0(int a, int b);
extern void func_0A1BA8(int a, int b);
extern void func_0A1A28(int a);
extern void func_0A1A48(int a);
extern void func_0A1BB8(float a, float b);

void func_0901A0(void)
{
    D_001FF37C = D_001FF37C ^ 1;
    D_001FF374 = 0;
    D_001FF378 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_0A3D58();
    func_0A1B98(1, 1);
    func_0A1BA0(0, 1);
    func_0A1BA8(0, 0);
    func_0A1A28(9);
    func_0A1A48(4);
    func_0A1BB8(1.0f, 1.0f);
}
