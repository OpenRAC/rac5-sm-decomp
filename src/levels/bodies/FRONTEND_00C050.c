/* FRONTEND:0x00C050 -- runs the setup call sequence, then updates two flag words. */

extern unsigned int D_0002FDE8;
extern unsigned int D_0002FDEC;

extern void func_005E60(unsigned int a);
extern void func_005EF0(int a, int b, int c, int d, int e);
extern void func_005D98(int a);
extern void func_005DB8(int a);
extern void func_005EE8(int a, unsigned int b, unsigned int c);
extern void func_005EA8(int a, int b);
extern void func_005EB0(int a, int b);
extern void func_005EB8(int a, int b);
extern void func_005EC0(float a, float b);

void func_00C050(void)
{
    func_005E60(0xFFFFFFFF);
    func_005EF0(0, 2, 3, 0, 0);
    func_005D98(4);
    func_005DB8(0xA);
    func_005DB8(0xB);
    func_005DB8(0xC);
    func_005DB8(0xD);
    func_005DB8(0xE);
    func_005DB8(0);
    func_005DB8(1);
    func_005DB8(0x11);
    func_005EE8(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_005EA8(1, 1);
    func_005EB0(0, 1);
    func_005EB8(0, 0);
    func_005EC0(16.0f, 16.0f);
    func_005DB8(5);
    D_0002FDEC |= 1;
    D_0002FDE8 |= 1;
    if ((D_0002FDE8 & 4) == 0 || (D_0002FDEC & 4) != 0) {
        func_005DB8(9);
        D_0002FDEC &= ~4;
        D_0002FDE8 |= 4;
    }
}
