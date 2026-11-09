/* LEVEL_23:0x0A0170 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001CF1E8;
extern unsigned int D_001CF1EC;

extern void func_097768(unsigned int a);
extern void func_097908(int a, int b, int c, int d, int e);
extern void func_097650(int a);
extern void func_097670(int a);
extern void func_0978E0(int a, unsigned int b, unsigned int c);
extern void func_0977C0(int a, int b);
extern void func_0977C8(int a, int b);
extern void func_0977D0(int a, int b);
extern void func_0977E0(float a, float b);

void func_0A0170(void)
{
    func_097768(0xFFFFFFFF);
    func_097908(0, 2, 3, 0, 0);
    func_097650(4);
    func_097670(0xA);
    func_097670(0xB);
    func_097670(0xC);
    func_097670(0xD);
    func_097670(0xE);
    func_097670(0);
    func_097670(1);
    func_097670(0x11);
    func_0978E0(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0977C0(1, 1);
    func_0977C8(0, 1);
    func_0977D0(0, 0);
    func_0977E0(16.0f, 16.0f);
    func_097670(5);
    D_001CF1EC |= 1;
    D_001CF1E8 |= 1;
    if ((D_001CF1E8 & 4) == 0 || (D_001CF1EC & 4) != 0) {
        func_097670(9);
        D_001CF1EC &= ~4;
        D_001CF1E8 |= 4;
    }
}
