/* LEVEL_02:0x0AC910 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_002CA958[];
extern void func_0AC990(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_0AC910(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_0AC990(D_002CA958 + index * 0x18, value, first, second, third, extra);
}
