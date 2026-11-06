extern int D_00106A8C;
extern int D_00106A84;
extern int D_00106A88;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_07C598(void);
extern void func_07A440(int a, int b);
extern void func_07A448(int a, int b);
extern void func_07A450(int a, int b);
extern void func_07A2C8(int a);
extern void func_07A2E8(int a);
extern void func_07A460(float a, float b);

void func_06E9D0(void)
{
    D_00106A8C = D_00106A8C ^ 1;
    D_00106A84 = 0;
    D_00106A88 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_07C598();
    func_07A440(1, 1);
    func_07A448(0, 1);
    func_07A450(0, 0);
    func_07A2C8(9);
    func_07A2E8(4);
    func_07A460(1.0f, 1.0f);
}
