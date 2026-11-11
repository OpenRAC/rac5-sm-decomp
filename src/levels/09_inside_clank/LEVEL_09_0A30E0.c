extern char D_0029ABD8[];
extern void func_0A3378(void *, unsigned int, unsigned char, unsigned char);

void func_0A30E0(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0A3378(D_0029ABD8 + index * 0x18, value, first, second);
}
