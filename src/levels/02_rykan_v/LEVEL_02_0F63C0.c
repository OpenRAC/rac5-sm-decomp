/* LEVEL_02:0x0F63C0 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0F6358(unsigned char *p);
void func_0F6370(unsigned char *p);
void func_0F6388(unsigned char *p);
void func_0F63A0(unsigned char *p);

void func_0F63C0(unsigned char *o, int flag)
{
    func_0F6358(o + 0x04);
    func_0F6370(o + 0x44);
    func_0F6388(o + 0x88);
    if (flag) {
        func_0F63A0(o + 0xF0);
    }
}
