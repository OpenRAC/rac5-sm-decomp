extern char D_002BC858[];
extern void func_0A71E0(void *, unsigned int, unsigned char, unsigned char);

void func_0A6F48(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0A71E0(D_002BC858 + index * 0x18, value, first, second);
}
