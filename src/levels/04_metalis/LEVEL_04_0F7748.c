/* LEVEL_04:0x0F7748 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0F76E0(unsigned char *p);
void func_0F76F8(unsigned char *p);
void func_0F7710(unsigned char *p);
void func_0F7728(unsigned char *p);

void func_0F7748(unsigned char *o, int flag)
{
    func_0F76E0(o + 0x04);
    func_0F76F8(o + 0x44);
    func_0F7710(o + 0x88);
    if (flag) {
        func_0F7728(o + 0xF0);
    }
}
