extern int D_0020E9FC;
extern int D_0020E9F4;
extern int D_0020E9F8;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_0A29C0(void);
extern void func_0A0800(int a, int b);
extern void func_0A0808(int a, int b);
extern void func_0A0810(int a, int b);
extern void func_0A0690(int a);
extern void func_0A06B0(int a);
extern void func_0A0820(float a, float b);

void func_08FA60(void)
{
    D_0020E9FC = D_0020E9FC ^ 1;
    D_0020E9F4 = 0;
    D_0020E9F8 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_0A29C0();
    func_0A0800(1, 1);
    func_0A0808(0, 1);
    func_0A0810(0, 0);
    func_0A0690(9);
    func_0A06B0(4);
    func_0A0820(1.0f, 1.0f);
}
