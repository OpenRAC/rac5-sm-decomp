/* LEVEL_16:0x095168 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_0026AFA8[];
extern void func_095210(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_095168(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_095210(D_0026AFA8 + index * 0x18, value, first, second, third, extra);
}
