extern char D_00209018[];
extern void func_0946D0(void *, unsigned int, unsigned char, unsigned char);

void func_094410(int index, unsigned int value, unsigned char first, unsigned char second)
{
    func_0946D0(D_00209018 + index * 0x18, value, first, second);
}
