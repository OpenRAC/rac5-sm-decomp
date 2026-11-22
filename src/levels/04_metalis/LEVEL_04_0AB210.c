/* LEVEL_04:0x0AB210 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_002CDC58[];
extern void func_0AB290(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0AB210(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_0AB290(D_002CDC58 + index * 0x18, value, first, second, third, extra);
}
