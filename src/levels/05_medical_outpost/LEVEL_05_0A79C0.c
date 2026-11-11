/* LEVEL_05:0x0A79C0 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001EB168;
extern unsigned int D_001EB16C;

extern void func_09EFD8(unsigned int a);
extern void func_09F188(int a, int b, int c, int d, int e);
extern void func_09EEC0(int a);
extern void func_09EEE0(int a);
extern void func_09F158(int a, unsigned int b, unsigned int c);
extern void func_09F038(int a, int b);
extern void func_09F040(int a, int b);
extern void func_09F048(int a, int b);
extern void func_09F058(float a, float b);

void func_0A79C0(void)
{
    func_09EFD8(0xFFFFFFFF);
    func_09F188(0, 2, 3, 0, 0);
    func_09EEC0(4);
    func_09EEE0(0xA);
    func_09EEE0(0xB);
    func_09EEE0(0xC);
    func_09EEE0(0xD);
    func_09EEE0(0xE);
    func_09EEE0(0);
    func_09EEE0(1);
    func_09EEE0(0x11);
    func_09F158(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_09F038(1, 1);
    func_09F040(0, 1);
    func_09F048(0, 0);
    func_09F058(16.0f, 16.0f);
    func_09EEE0(5);
    D_001EB16C |= 1;
    D_001EB168 |= 1;
    if ((D_001EB168 & 4) == 0 || (D_001EB16C & 4) != 0) {
        func_09EEE0(9);
        D_001EB16C &= ~4;
        D_001EB168 |= 4;
    }
}
