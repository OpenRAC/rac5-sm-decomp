/* LEVEL_03:0x0A5D80 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_002CE2D8[];
extern void func_0A5E00(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0A5D80(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_0A5E00(D_002CE2D8 + index * 0x18, value, first, second, third, extra);
}
