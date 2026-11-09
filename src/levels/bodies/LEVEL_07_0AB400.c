/* LEVEL_07:0x0AB400 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_002100E8;
extern unsigned int D_002100EC;

extern void func_0A2A28(unsigned int a);
extern void func_0A2BC8(int a, int b, int c, int d, int e);
extern void func_0A2910(int a);
extern void func_0A2930(int a);
extern void func_0A2BA0(int a, unsigned int b, unsigned int c);
extern void func_0A2A80(int a, int b);
extern void func_0A2A88(int a, int b);
extern void func_0A2A90(int a, int b);
extern void func_0A2AA0(float a, float b);

void func_0AB400(void)
{
    func_0A2A28(0xFFFFFFFF);
    func_0A2BC8(0, 2, 3, 0, 0);
    func_0A2910(4);
    func_0A2930(0xA);
    func_0A2930(0xB);
    func_0A2930(0xC);
    func_0A2930(0xD);
    func_0A2930(0xE);
    func_0A2930(0);
    func_0A2930(1);
    func_0A2930(0x11);
    func_0A2BA0(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0A2A80(1, 1);
    func_0A2A88(0, 1);
    func_0A2A90(0, 0);
    func_0A2AA0(16.0f, 16.0f);
    func_0A2930(5);
    D_002100EC |= 1;
    D_002100E8 |= 1;
    if ((D_002100E8 & 4) == 0 || (D_002100EC & 4) != 0) {
        func_0A2930(9);
        D_002100EC &= ~4;
        D_002100E8 |= 4;
    }
}
