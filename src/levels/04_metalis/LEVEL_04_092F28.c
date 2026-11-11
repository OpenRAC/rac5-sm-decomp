extern int D_0020F83C;
extern int D_0020F834;
extern int D_0020F838;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_0A7E50(void);
extern void func_0A5C90(int a, int b);
extern void func_0A5C98(int a, int b);
extern void func_0A5CA0(int a, int b);
extern void func_0A5B20(int a);
extern void func_0A5B40(int a);
extern void func_0A5CB0(float a, float b);

void func_092F28(void)
{
    D_0020F83C = D_0020F83C ^ 1;
    D_0020F834 = 0;
    D_0020F838 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_0A7E50();
    func_0A5C90(1, 1);
    func_0A5C98(0, 1);
    func_0A5CA0(0, 0);
    func_0A5B20(9);
    func_0A5B40(4);
    func_0A5CB0(1.0f, 1.0f);
}
