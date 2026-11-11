extern char D_002CA958[];
extern void func_0AC9D8(void *, unsigned int, unsigned char, unsigned char);

void func_0AC740(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0AC9D8(D_002CA958 + index * 0x18, value, first, second);
}
