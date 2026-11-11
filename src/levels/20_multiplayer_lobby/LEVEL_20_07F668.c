extern char D_0018E7E8[];
extern void func_07F950(void *, unsigned int, unsigned char, unsigned char);

void func_07F668(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_07F950(D_0018E7E8 + index * 0x18, value, first, second);
}
