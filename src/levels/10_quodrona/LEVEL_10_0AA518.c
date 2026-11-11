/* LEVEL_10:0x0AA518 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_00204DE8;
extern unsigned int D_00204DEC;

extern void func_0A1B40(unsigned int a);
extern void func_0A1CE0(int a, int b, int c, int d, int e);
extern void func_0A1A28(int a);
extern void func_0A1A48(int a);
extern void func_0A1CB8(int a, unsigned int b, unsigned int c);
extern void func_0A1B98(int a, int b);
extern void func_0A1BA0(int a, int b);
extern void func_0A1BA8(int a, int b);
extern void func_0A1BB8(float a, float b);

void func_0AA518(void)
{
    func_0A1B40(0xFFFFFFFF);
    func_0A1CE0(0, 2, 3, 0, 0);
    func_0A1A28(4);
    func_0A1A48(0xA);
    func_0A1A48(0xB);
    func_0A1A48(0xC);
    func_0A1A48(0xD);
    func_0A1A48(0xE);
    func_0A1A48(0);
    func_0A1A48(1);
    func_0A1A48(0x11);
    func_0A1CB8(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0A1B98(1, 1);
    func_0A1BA0(0, 1);
    func_0A1BA8(0, 0);
    func_0A1BB8(16.0f, 16.0f);
    func_0A1A48(5);
    D_00204DEC |= 1;
    D_00204DE8 |= 1;
    if ((D_00204DE8 & 4) == 0 || (D_00204DEC & 4) != 0) {
        func_0A1A48(9);
        D_00204DEC &= ~4;
        D_00204DE8 |= 4;
    }
}
