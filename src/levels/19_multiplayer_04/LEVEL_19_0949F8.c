/* LEVEL_19:0x0949F8 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_0026B128[];
extern void func_094AA0(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0949F8(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_094AA0(D_0026B128 + index * 0x18, value, first, second, third, extra);
}
