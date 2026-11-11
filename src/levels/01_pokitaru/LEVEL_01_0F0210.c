/* LEVEL_01:0x0F0210 -- calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0F01A8(unsigned char *p);
void func_0F01C0(unsigned char *p);
void func_0F01D8(unsigned char *p);
void func_0F01F0(unsigned char *p);

void func_0F0210(unsigned char *o, int flag)
{
    func_0F01A8(o + 0x04);
    func_0F01C0(o + 0x44);
    func_0F01D8(o + 0x88);
    if (flag) {
        func_0F01F0(o + 0xF0);
    }
}
