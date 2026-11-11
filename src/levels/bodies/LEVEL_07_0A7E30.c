extern char D_002C8D58[];
extern void func_0A80C8(void *, unsigned int, unsigned char, unsigned char);

void func_0A7E30(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0A80C8(D_002C8D58 + index * 0x18, value, first, second);
}
