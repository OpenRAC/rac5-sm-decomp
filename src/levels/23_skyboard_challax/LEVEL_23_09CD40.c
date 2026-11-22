/* LEVEL_23:0x09CD40 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_00284898[];
extern void func_09CDE8(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_09CD40(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_09CDE8(D_00284898 + index * 0x18, value, first, second, third, extra);
}
