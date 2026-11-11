extern int D_001A43AC;
extern int D_001A43A4;
extern int D_001A43A8;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_091EA0(void);
extern void func_08FD48(int a, int b);
extern void func_08FD50(int a, int b);
extern void func_08FD58(int a, int b);
extern void func_08FBC8(int a);
extern void func_08FBE8(int a);
extern void func_08FD68(float a, float b);

void func_081088(void)
{
    D_001A43AC = D_001A43AC ^ 1;
    D_001A43A4 = 0;
    D_001A43A8 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_091EA0();
    func_08FD48(1, 1);
    func_08FD50(0, 1);
    func_08FD58(0, 0);
    func_08FBC8(9);
    func_08FBE8(4);
    func_08FD68(1.0f, 1.0f);
}
