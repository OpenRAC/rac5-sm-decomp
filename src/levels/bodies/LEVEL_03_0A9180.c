/* LEVEL_03:0x0A9180 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_00214468;
extern unsigned int D_0021446C;

extern void func_0A07A8(unsigned int a);
extern void func_0A0948(int a, int b, int c, int d, int e);
extern void func_0A0690(int a);
extern void func_0A06B0(int a);
extern void func_0A0920(int a, unsigned int b, unsigned int c);
extern void func_0A0800(int a, int b);
extern void func_0A0808(int a, int b);
extern void func_0A0810(int a, int b);
extern void func_0A0820(float a, float b);

void func_0A9180(void)
{
    func_0A07A8(0xFFFFFFFF);
    func_0A0948(0, 2, 3, 0, 0);
    func_0A0690(4);
    func_0A06B0(0xA);
    func_0A06B0(0xB);
    func_0A06B0(0xC);
    func_0A06B0(0xD);
    func_0A06B0(0xE);
    func_0A06B0(0);
    func_0A06B0(1);
    func_0A06B0(0x11);
    func_0A0920(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0A0800(1, 1);
    func_0A0808(0, 1);
    func_0A0810(0, 0);
    func_0A0820(16.0f, 16.0f);
    func_0A06B0(5);
    D_0021446C |= 1;
    D_00214468 |= 1;
    if ((D_00214468 & 4) == 0 || (D_0021446C & 4) != 0) {
        func_0A06B0(9);
        D_0021446C &= ~4;
        D_00214468 |= 4;
    }
}
