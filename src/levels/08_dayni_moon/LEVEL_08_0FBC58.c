/* LEVEL_08:0x0FBC58 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0FBBF0(unsigned char *p);
void func_0FBC08(unsigned char *p);
void func_0FBC20(unsigned char *p);
void func_0FBC38(unsigned char *p);

void func_0FBC58(unsigned char *o, int flag)
{
    func_0FBBF0(o + 0x04);
    func_0FBC08(o + 0x44);
    func_0FBC20(o + 0x88);
    if (flag) {
        func_0FBC38(o + 0xF0);
    }
}
