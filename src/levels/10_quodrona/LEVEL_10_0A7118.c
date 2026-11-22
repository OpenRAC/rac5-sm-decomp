/* LEVEL_10:0x0A7118 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_002BC858[];
extern void func_0A7198(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0A7118(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_0A7198(D_002BC858 + index * 0x18, value, first, second, third, extra);
}
