/* LEVEL_09:0x0A66B0 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001E5BE8;
extern unsigned int D_001E5BEC;

extern void func_09DCD8(unsigned int a);
extern void func_09DE78(int a, int b, int c, int d, int e);
extern void func_09DBC0(int a);
extern void func_09DBE0(int a);
extern void func_09DE50(int a, unsigned int b, unsigned int c);
extern void func_09DD30(int a, int b);
extern void func_09DD38(int a, int b);
extern void func_09DD40(int a, int b);
extern void func_09DD50(float a, float b);

void func_0A66B0(void)
{
    func_09DCD8(0xFFFFFFFF);
    func_09DE78(0, 2, 3, 0, 0);
    func_09DBC0(4);
    func_09DBE0(0xA);
    func_09DBE0(0xB);
    func_09DBE0(0xC);
    func_09DBE0(0xD);
    func_09DBE0(0xE);
    func_09DBE0(0);
    func_09DBE0(1);
    func_09DBE0(0x11);
    func_09DE50(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_09DD30(1, 1);
    func_09DD38(0, 1);
    func_09DD40(0, 0);
    func_09DD50(16.0f, 16.0f);
    func_09DBE0(5);
    D_001E5BEC |= 1;
    D_001E5BE8 |= 1;
    if ((D_001E5BE8 & 4) == 0 || (D_001E5BEC & 4) != 0) {
        func_09DBE0(9);
        D_001E5BEC &= ~4;
        D_001E5BE8 |= 4;
    }
}
