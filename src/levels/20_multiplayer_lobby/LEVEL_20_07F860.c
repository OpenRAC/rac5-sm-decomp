/* LEVEL_20:0x07F860 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_0018E7E8[];
extern void func_07F908(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_07F860(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_07F908(D_0018E7E8 + index * 0x18, value, first, second, third, extra);
}
