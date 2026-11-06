extern int D_001E527C;
extern int D_001E5274;
extern int D_001E5278;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_09D410(void);
extern void func_09B250(int a, int b);
extern void func_09B258(int a, int b);
extern void func_09B260(int a, int b);
extern void func_09B0E0(int a);
extern void func_09B100(int a);
extern void func_09B270(float a, float b);

void func_088A80(void)
{
    D_001E527C = D_001E527C ^ 1;
    D_001E5274 = 0;
    D_001E5278 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_09D410();
    func_09B250(1, 1);
    func_09B258(0, 1);
    func_09B260(0, 0);
    func_09B0E0(9);
    func_09B100(4);
    func_09B270(1.0f, 1.0f);
}
