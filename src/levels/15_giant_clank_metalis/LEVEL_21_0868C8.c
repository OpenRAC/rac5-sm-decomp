/* LEVEL_21:0x0868C8 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_001CB498[];
extern void func_086948(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0868C8(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_086948(D_001CB498 + index * 0x18, value, first, second, third, extra);
}
