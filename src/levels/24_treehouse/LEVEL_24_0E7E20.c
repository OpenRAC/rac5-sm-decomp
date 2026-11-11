/* LEVEL_24:0x0E7E20 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0E7DB8(unsigned char *p);
void func_0E7DD0(unsigned char *p);
void func_0E7DE8(unsigned char *p);
void func_0E7E00(unsigned char *p);

void func_0E7E20(unsigned char *o, int flag)
{
    func_0E7DB8(o + 0x04);
    func_0E7DD0(o + 0x44);
    func_0E7DE8(o + 0x88);
    if (flag) {
        func_0E7E00(o + 0xF0);
    }
}
