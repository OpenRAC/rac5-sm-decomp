/* LEVEL_10:0x0EFB50 -- placement copy of LEVEL_01_0F0210.c: calls three sub-initialisers on fixed offsets, and a fourth only when the flag argument is non-zero. */

void func_0EFAE8(unsigned char *p);
void func_0EFB00(unsigned char *p);
void func_0EFB18(unsigned char *p);
void func_0EFB30(unsigned char *p);

void func_0EFB50(unsigned char *o, int flag)
{
    func_0EFAE8(o + 0x04);
    func_0EFB00(o + 0x44);
    func_0EFB18(o + 0x88);
    if (flag) {
        func_0EFB30(o + 0xF0);
    }
}
