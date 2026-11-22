/* LEVEL_22:0x0945E0 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_00209018[];
extern void func_094688(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0945E0(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_094688(D_00209018 + index * 0x18, value, first, second, third, extra);
}
