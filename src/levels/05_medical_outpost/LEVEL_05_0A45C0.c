/* LEVEL_05:0x0A45C0 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_0029F318[];
extern void func_0A4640(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0A45C0(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_0A4640(D_0029F318 + index * 0x18, value, first, second, third, extra);
}
