extern char D_0025C2A8[];
extern void func_094750(void *, unsigned int, unsigned char, unsigned char);

void func_094468(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_094750(D_0025C2A8 + index * 0x18, value, first, second);
}
