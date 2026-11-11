/* LEVEL_05:0x0EC350 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0EC2E8(unsigned char *p);
void func_0EC300(unsigned char *p);
void func_0EC318(unsigned char *p);
void func_0EC330(unsigned char *p);

void func_0EC350(unsigned char *o, int flag)
{
    func_0EC2E8(o + 0x04);
    func_0EC300(o + 0x44);
    func_0EC318(o + 0x88);
    if (flag) {
        func_0EC330(o + 0xF0);
    }
}
