extern char D_002CE2D8[];
extern void func_0A5E48(void *, unsigned int, unsigned char, unsigned char);

void func_0A5BB0(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0A5E48(D_002CE2D8 + index * 0x18, value, first, second);
}
