/* LEVEL_24:0x0A2C78 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001CCA68;
extern unsigned int D_001CCA6C;

extern void func_09A2A0(unsigned int a);
extern void func_09A440(int a, int b, int c, int d, int e);
extern void func_09A188(int a);
extern void func_09A1A8(int a);
extern void func_09A418(int a, unsigned int b, unsigned int c);
extern void func_09A2F8(int a, int b);
extern void func_09A300(int a, int b);
extern void func_09A308(int a, int b);
extern void func_09A318(float a, float b);

void func_0A2C78(void)
{
    func_09A2A0(0xFFFFFFFF);
    func_09A440(0, 2, 3, 0, 0);
    func_09A188(4);
    func_09A1A8(0xA);
    func_09A1A8(0xB);
    func_09A1A8(0xC);
    func_09A1A8(0xD);
    func_09A1A8(0xE);
    func_09A1A8(0);
    func_09A1A8(1);
    func_09A1A8(0x11);
    func_09A418(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_09A2F8(1, 1);
    func_09A300(0, 1);
    func_09A308(0, 0);
    func_09A318(16.0f, 16.0f);
    func_09A1A8(5);
    D_001CCA6C |= 1;
    D_001CCA68 |= 1;
    if ((D_001CCA68 & 4) == 0 || (D_001CCA6C & 4) != 0) {
        func_09A1A8(9);
        D_001CCA6C &= ~4;
        D_001CCA68 |= 4;
    }
}
