extern char D_002A01D8[];
extern void func_0A0898(void *, unsigned int, unsigned char, unsigned char);

void func_0A0600(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0A0898(D_002A01D8 + index * 0x18, value, first, second);
}
