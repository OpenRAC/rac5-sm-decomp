/* LEVEL_01:0x0A6000 -- forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_002B3458[];
extern void func_0A6080(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0A6000(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_0A6080(D_002B3458 + index * 0x18, value, first, second, third, extra);
}
