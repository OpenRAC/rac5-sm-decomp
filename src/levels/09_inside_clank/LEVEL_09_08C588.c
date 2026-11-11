extern int D_001E017C;
extern int D_001E0174;
extern int D_001E0178;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_09FEF0(void);
extern void func_09DD30(int a, int b);
extern void func_09DD38(int a, int b);
extern void func_09DD40(int a, int b);
extern void func_09DBC0(int a);
extern void func_09DBE0(int a);
extern void func_09DD50(float a, float b);

void func_08C588(void)
{
    D_001E017C = D_001E017C ^ 1;
    D_001E0174 = 0;
    D_001E0178 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_09FEF0();
    func_09DD30(1, 1);
    func_09DD38(0, 1);
    func_09DD40(0, 0);
    func_09DBC0(9);
    func_09DBE0(4);
    func_09DD50(1.0f, 1.0f);
}
