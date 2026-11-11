/* LEVEL_17:0x096FE8 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_0019D3A8;
extern unsigned int D_0019D3AC;

extern void func_08F1E0(unsigned int a);
extern void func_08F388(int a, int b, int c, int d, int e);
extern void func_08F0C0(int a);
extern void func_08F0E0(int a);
extern void func_08F360(int a, unsigned int b, unsigned int c);
extern void func_08F240(int a, int b);
extern void func_08F248(int a, int b);
extern void func_08F250(int a, int b);
extern void func_08F260(float a, float b);

void func_096FE8(void)
{
    func_08F1E0(0xFFFFFFFF);
    func_08F388(0, 2, 3, 0, 0);
    func_08F0C0(4);
    func_08F0E0(0xA);
    func_08F0E0(0xB);
    func_08F0E0(0xC);
    func_08F0E0(0xD);
    func_08F0E0(0xE);
    func_08F0E0(0);
    func_08F0E0(1);
    func_08F0E0(0x11);
    func_08F360(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_08F240(1, 1);
    func_08F248(0, 1);
    func_08F250(0, 0);
    func_08F260(16.0f, 16.0f);
    func_08F0E0(5);
    D_0019D3AC |= 1;
    D_0019D3A8 |= 1;
    if ((D_0019D3A8 & 4) == 0 || (D_0019D3AC & 4) != 0) {
        func_08F0E0(9);
        D_0019D3AC &= ~4;
        D_0019D3A8 |= 4;
    }
}
