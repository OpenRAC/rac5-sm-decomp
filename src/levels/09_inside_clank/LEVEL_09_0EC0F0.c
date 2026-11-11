/* LEVEL_09:0x0EC0F0 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0EC088(unsigned char *p);
void func_0EC0A0(unsigned char *p);
void func_0EC0B8(unsigned char *p);
void func_0EC0D0(unsigned char *p);

void func_0EC0F0(unsigned char *o, int flag)
{
    func_0EC088(o + 0x04);
    func_0EC0A0(o + 0x44);
    func_0EC0B8(o + 0x88);
    if (flag) {
        func_0EC0D0(o + 0xF0);
    }
}
