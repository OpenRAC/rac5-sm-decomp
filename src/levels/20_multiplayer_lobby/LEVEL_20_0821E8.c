/* LEVEL_20:0x0821E8 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_0010C488;
extern unsigned int D_0010C48C;

extern void func_07A3E8(unsigned int a);
extern void func_07A588(int a, int b, int c, int d, int e);
extern void func_07A2C8(int a);
extern void func_07A2E8(int a);
extern void func_07A560(int a, unsigned int b, unsigned int c);
extern void func_07A440(int a, int b);
extern void func_07A448(int a, int b);
extern void func_07A450(int a, int b);
extern void func_07A460(float a, float b);

void func_0821E8(void)
{
    func_07A3E8(0xFFFFFFFF);
    func_07A588(0, 2, 3, 0, 0);
    func_07A2C8(4);
    func_07A2E8(0xA);
    func_07A2E8(0xB);
    func_07A2E8(0xC);
    func_07A2E8(0xD);
    func_07A2E8(0xE);
    func_07A2E8(0);
    func_07A2E8(1);
    func_07A2E8(0x11);
    func_07A560(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_07A440(1, 1);
    func_07A448(0, 1);
    func_07A450(0, 0);
    func_07A460(16.0f, 16.0f);
    func_07A2E8(5);
    D_0010C48C |= 1;
    D_0010C488 |= 1;
    if ((D_0010C488 & 4) == 0 || (D_0010C48C & 4) != 0) {
        func_07A2E8(9);
        D_0010C48C &= ~4;
        D_0010C488 |= 4;
    }
}
