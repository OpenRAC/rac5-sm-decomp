/* LEVEL_07:0x0F1010 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0F0FA8(unsigned char *p);
void func_0F0FC0(unsigned char *p);
void func_0F0FD8(unsigned char *p);
void func_0F0FF0(unsigned char *p);

void func_0F1010(unsigned char *o, int flag)
{
    func_0F0FA8(o + 0x04);
    func_0F0FC0(o + 0x44);
    func_0F0FD8(o + 0x88);
    if (flag) {
        func_0F0FF0(o + 0xF0);
    }
}
