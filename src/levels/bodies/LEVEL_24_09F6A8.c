extern char D_0027F318[];
extern void func_09F940(void *, long long, unsigned char, unsigned char);

void func_09F6A8(int index, long long value, unsigned char first, unsigned char second)
{
    func_09F940(D_0027F318 + index * 0x18, value, first, second);
}
