/* LEVEL_23:0x0E30F8 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0E3090(unsigned char *p);
void func_0E30A8(unsigned char *p);
void func_0E30C0(unsigned char *p);
void func_0E30D8(unsigned char *p);

void func_0E30F8(unsigned char *o, int flag)
{
    func_0E3090(o + 0x04);
    func_0E30A8(o + 0x44);
    func_0E30C0(o + 0x88);
    if (flag) {
        func_0E30D8(o + 0xF0);
    }
}
