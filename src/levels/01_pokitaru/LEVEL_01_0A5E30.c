extern char D_002B3458[];
extern void func_0A60C8(void *, unsigned int, unsigned char, unsigned char);

void func_0A5E30(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0A60C8(D_002B3458 + index * 0x18, value, first, second);
}
