extern int D_001A582C;
extern int D_001A5824;
extern int D_001A5828;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_090EB0(void);
extern void func_08ED58(int a, int b);
extern void func_08ED60(int a, int b);
extern void func_08ED68(int a, int b);
extern void func_08EBE0(int a);
extern void func_08EC00(int a);
extern void func_08ED78(float a, float b);

void func_0809D0(void)
{
    D_001A582C = D_001A582C ^ 1;
    D_001A5824 = 0;
    D_001A5828 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_090EB0();
    func_08ED58(1, 1);
    func_08ED60(0, 1);
    func_08ED68(0, 0);
    func_08EBE0(9);
    func_08EC00(4);
    func_08ED78(1.0f, 1.0f);
}
