/* LEVEL_17:0x094660 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_0025C2A8[];
extern void func_094708(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_094660(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_094708(D_0025C2A8 + index * 0x18, value, first, second, third, extra);
}
