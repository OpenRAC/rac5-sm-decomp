/* FRONTEND:0x00AB70 -- placement copy of LEVEL_01_0A6000.c: forwards a table entry address and four values to the update helper, narrowing the three flags to bytes. */
extern char D_001230C8[];
extern void func_00AC18(void *, unsigned int, unsigned char, unsigned char, unsigned char, int);

void func_00AB70(int index, unsigned int value, unsigned char first, unsigned char second, unsigned char third, int extra)
{
    func_00AC18(D_001230C8 + index * 0x18, value, first, second, third, extra);
}
