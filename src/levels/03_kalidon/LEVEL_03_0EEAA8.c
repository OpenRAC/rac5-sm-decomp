/* LEVEL_03:0x0EEAA8 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0EEA40(unsigned char *p);
void func_0EEA58(unsigned char *p);
void func_0EEA70(unsigned char *p);
void func_0EEA88(unsigned char *p);

void func_0EEAA8(unsigned char *o, int flag)
{
    func_0EEA40(o + 0x04);
    func_0EEA58(o + 0x44);
    func_0EEA70(o + 0x88);
    if (flag) {
        func_0EEA88(o + 0xF0);
    }
}
