/* LEVEL_06:0x0E92D0 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0E9268(unsigned char *p);
void func_0E9280(unsigned char *p);
void func_0E9298(unsigned char *p);
void func_0E92B0(unsigned char *p);

void func_0E92D0(unsigned char *o, int flag)
{
    func_0E9268(o + 0x04);
    func_0E9280(o + 0x44);
    func_0E9298(o + 0x88);
    if (flag) {
        func_0E92B0(o + 0xF0);
    }
}
