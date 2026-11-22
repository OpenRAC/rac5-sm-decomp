/* LEVEL_24:0x09F878 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_0027F318[];
extern void func_09F8F8(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_09F878(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_09F8F8(D_0027F318 + index * 0x18, value, first, second, third, extra);
}
