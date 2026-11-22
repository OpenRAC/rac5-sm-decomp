/* LEVEL_08:0x0B08F8 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_003026D8[];
extern void func_0B0978(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0B08F8(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_0B0978(D_003026D8 + index * 0x18, value, first, second, third, extra);
}
